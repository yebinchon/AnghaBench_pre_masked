
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {int NumPacketSendError; } ;
struct TYPE_4__ {scalar_t__ Halting; scalar_t__ Opened; TYPE_1__ Status; int NdisMiniport; } ;
typedef int NDIS_PACKET ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ VAR_5 ;

BOOL FUNC_2(NDIS_PACKET **VAR_6, UINT VAR_7)
{
 UINT VAR_8;

 if (VAR_4 == ((void*)0))
 {
  return VAR_0;
 }

 if (VAR_4->Halting != VAR_0 || VAR_4->Opened == VAR_0)
 {

  for (VAR_8 = 0;VAR_8 < VAR_7;VAR_8++)
  {
   FUNC_0(VAR_6[VAR_8], VAR_1);

   if (VAR_5)
   {
    FUNC_1(VAR_4->NdisMiniport, VAR_6[VAR_8], VAR_2);
   }

   VAR_4->Status.NumPacketSendError++;
  }
  return VAR_0;
 }
 return VAR_3;
}
