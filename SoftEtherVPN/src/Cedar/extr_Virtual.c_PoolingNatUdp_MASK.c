
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int HostIP; } ;
typedef TYPE_1__ VH ;
typedef int UINT ;
struct TYPE_13__ {scalar_t__ num_item; } ;
struct TYPE_12__ {int Param1; int Size; int Buf; } ;
struct TYPE_11__ {int DestIp; int DestPort; int SrcPort; int SrcIp; TYPE_8__* UdpRecvQueue; } ;
typedef TYPE_2__ NAT_ENTRY ;
typedef TYPE_3__ BLOCK ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int,int ,int ,int ) ;

void FUNC_3(VH *VAR_0, NAT_ENTRY *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }


 if (VAR_1->UdpRecvQueue->num_item != 0)
 {
  BLOCK *VAR_2;


  while ((VAR_2 = FUNC_1(VAR_1->UdpRecvQueue)))
  {
   UINT VAR_3 = VAR_1->DestIp;

   if (VAR_3 == 0xFFFFFFFF)
   {
    VAR_3 = VAR_0->HostIP;
   }

   if (VAR_2->Param1 != 0)
   {
    VAR_3 = VAR_2->Param1;
   }

   FUNC_2(VAR_0, VAR_1->SrcIp, VAR_1->SrcPort, VAR_3, VAR_1->DestPort,
    VAR_2->Buf, VAR_2->Size);

   FUNC_0(VAR_2);
  }
 }
}
