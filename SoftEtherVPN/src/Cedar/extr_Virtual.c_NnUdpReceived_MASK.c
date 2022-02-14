
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_9__ {int SrcPort; int DstPort; int PacketLength; } ;
typedef TYPE_1__ UDP_HEADER ;
typedef int UCHAR ;
struct TYPE_12__ {int Now; } ;
struct TYPE_11__ {TYPE_4__* v; int NatTableForRecv; } ;
struct TYPE_10__ {int SrcPort; int SrcIp; int TotalRecv; int LastCommTime; } ;
typedef TYPE_2__ NATIVE_NAT_ENTRY ;
typedef TYPE_3__ NATIVE_NAT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int ,int ,int,int) ;
 TYPE_2__* FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,int ,int ,int,int,int *,int) ;

void FUNC_4(NATIVE_NAT *VAR_1, UINT VAR_2, UINT VAR_3, void *VAR_4, UINT VAR_5, UCHAR VAR_6, UINT VAR_7)
{
 UDP_HEADER *VAR_8;
 UCHAR *VAR_9;
 UINT VAR_10;

 if (VAR_1 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }


 if (VAR_5 <= sizeof(UDP_HEADER))
 {
  return;
 }

 VAR_8 = (UDP_HEADER *)VAR_4;


 VAR_9 = ((UCHAR *)VAR_4) + sizeof(UDP_HEADER);
 VAR_10 = VAR_5 - sizeof(UDP_HEADER);


 if (VAR_10 < (FUNC_0(VAR_8->PacketLength) - sizeof(UDP_HEADER)))
 {
  return;
 }


 VAR_10 = FUNC_0(VAR_8->PacketLength) - sizeof(UDP_HEADER);


 if (1)
 {
  NATIVE_NAT_ENTRY VAR_11;
  NATIVE_NAT_ENTRY *VAR_12;

  FUNC_1(&VAR_11, VAR_0, 0, 0, 0, 0, VAR_3, FUNC_0(VAR_8->DstPort));

  VAR_12 = FUNC_2(VAR_1->NatTableForRecv, &VAR_11);

  if (VAR_12 != ((void*)0))
  {

   VAR_12->LastCommTime = VAR_1->v->Now;
   VAR_12->TotalRecv += (UINT64)VAR_10;


   FUNC_3(VAR_1->v, VAR_12->SrcIp, VAR_12->SrcPort, VAR_2, FUNC_0(VAR_8->SrcPort),
    VAR_9, VAR_10);
  }
 }
}
