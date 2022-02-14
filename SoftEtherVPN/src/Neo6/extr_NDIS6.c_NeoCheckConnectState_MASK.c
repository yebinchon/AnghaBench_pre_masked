
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int t ;
typedef int state ;
struct TYPE_9__ {scalar_t__ ConnectedOld; scalar_t__ Connected; int ConnectedForce; scalar_t__ Halting; int * NdisMiniport; } ;
struct TYPE_7__ {int Size; int Revision; int Type; } ;
struct TYPE_8__ {int StatusBufferSize; void* MediaConnectState; struct TYPE_8__* StatusBuffer; int StatusCode; int PauseFunctions; int RcvLinkSpeed; int XmitLinkSpeed; int MediaDuplexState; TYPE_1__ Header; int * SourceHandle; } ;
typedef TYPE_2__ NDIS_STATUS_INDICATION ;
typedef TYPE_2__ NDIS_LINK_STATE ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_2__*,int) ;
 TYPE_4__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_2()
{
 NDIS_STATUS_INDICATION VAR_15;
 NDIS_LINK_STATE VAR_16;
 if (VAR_12 == ((void*)0) || VAR_12->NdisMiniport == ((void*)0))
 {
  return;
 }

 FUNC_1(&VAR_15, sizeof(VAR_15));
 VAR_15.Header.Type = VAR_5;
 VAR_15.Header.Revision = VAR_8;
 VAR_15.Header.Size = VAR_7;

 VAR_15.SourceHandle = VAR_12->NdisMiniport;

 FUNC_1(&VAR_16, sizeof(VAR_16));
 VAR_16.Header.Type = VAR_4;
 VAR_16.Header.Revision = VAR_3;
 VAR_16.Header.Size = VAR_6;

 VAR_16.MediaDuplexState = VAR_10;
 VAR_16.XmitLinkSpeed = VAR_16.RcvLinkSpeed = VAR_14;
 VAR_16.PauseFunctions = VAR_11;

 VAR_15.StatusCode = VAR_9;
 VAR_15.StatusBuffer = &VAR_16;
 VAR_15.StatusBufferSize = sizeof(NDIS_LINK_STATE);

 if (VAR_13 == 0)
 {
  if (VAR_12->ConnectedOld != VAR_12->Connected || VAR_12->ConnectedForce)
  {
   VAR_12->ConnectedForce = VAR_0;
   VAR_12->ConnectedOld = VAR_12->Connected;
   if (VAR_12->Halting == VAR_0)
   {
    VAR_16.MediaConnectState = VAR_12->Connected ? VAR_1 : VAR_2;
    FUNC_0(VAR_12->NdisMiniport, &VAR_15);
   }
  }
 }
 else
 {
  if (VAR_12->ConnectedForce)
  {
   VAR_12->ConnectedForce = 0;

   if (VAR_12->Halting == VAR_0)
   {
    VAR_16.MediaConnectState = VAR_1;
    FUNC_0(VAR_12->NdisMiniport, &VAR_15);
   }
  }
 }
}
