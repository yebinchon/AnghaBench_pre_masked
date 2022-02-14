
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_15__ {int Now; } ;
struct TYPE_14__ {TYPE_5__* v; int NatTableForRecv; } ;
struct TYPE_13__ {scalar_t__ Status; int SrcIp; void* LastAck; void* LastSeq; int SrcPort; int TotalRecv; int LastCommTime; } ;
struct TYPE_12__ {int Flag; scalar_t__ Checksum; int SeqNumber; int AckNumber; int DstPort; int SrcPort; } ;
typedef TYPE_1__ TCP_HEADER ;
typedef TYPE_2__ NATIVE_NAT_ENTRY ;
typedef TYPE_3__ NATIVE_NAT ;


 scalar_t__ FUNC_0 (int,int ,int ,TYPE_1__*,int,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ,int,int ,int,int ) ;
 TYPE_2__* FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_5__*,int ,int,int ,TYPE_1__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_7(NATIVE_NAT *VAR_8, UINT VAR_9, UINT VAR_10, void *VAR_11, UINT VAR_12, UCHAR VAR_13, UINT VAR_14)
{
 TCP_HEADER *VAR_15;
 UCHAR *VAR_16;
 UINT VAR_17;
 UINT VAR_18;

 if (VAR_8 == ((void*)0) || VAR_11 == ((void*)0))
 {
  return;
 }


 if (VAR_12 < sizeof(TCP_HEADER))
 {
  return;
 }

 VAR_15 = (TCP_HEADER *)VAR_11;


 VAR_18 = FUNC_6(VAR_15) * 4;
 if (VAR_12 < VAR_18 || VAR_18 < sizeof(TCP_HEADER))
 {
  return;
 }


 VAR_16 = ((UCHAR *)VAR_11) + VAR_18;
 VAR_17 = VAR_12 - VAR_18;


 if (1)
 {
  NATIVE_NAT_ENTRY VAR_19;
  NATIVE_NAT_ENTRY *VAR_20;

  FUNC_3(&VAR_19, VAR_1, 0, 0, VAR_9, FUNC_1(VAR_15->SrcPort), VAR_10, FUNC_1(VAR_15->DstPort));

  VAR_20 = FUNC_4(VAR_8->NatTableForRecv, &VAR_19);

  if (VAR_20 != ((void*)0))
  {

   VAR_20->LastCommTime = VAR_8->v->Now;
   VAR_20->TotalRecv += (UINT64)VAR_12;


   VAR_15->Checksum = 0;
   VAR_15->DstPort = FUNC_1(VAR_20->SrcPort);

   if (VAR_15->Flag & VAR_5 || VAR_15->Flag & VAR_6)
   {

    VAR_20->Status = VAR_3;
   }

   if (VAR_15->Flag & VAR_7 && VAR_15->Flag & VAR_4)
   {

    if (VAR_20->Status != VAR_3)
    {
     VAR_20->Status = VAR_2;
    }
   }

   VAR_20->LastSeq = FUNC_2(VAR_15->AckNumber);
   VAR_20->LastAck = FUNC_2(VAR_15->SeqNumber);


   VAR_15->Checksum = FUNC_0(VAR_9, VAR_20->SrcIp, VAR_0, VAR_15, VAR_12, 0);


   FUNC_5(VAR_8->v, VAR_20->SrcIp, VAR_9, VAR_0, VAR_15, VAR_12);
  }
 }
}
