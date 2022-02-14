
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_6__ {int* Buf; int Size; } ;
struct TYPE_5__ {int L2TPv3; int * Ipc; } ;
typedef TYPE_1__ ETHERIP_SERVER ;
typedef TYPE_2__ BLOCK ;


 int FUNC_0 (int *,int*,int) ;

void FUNC_1(ETHERIP_SERVER *VAR_0, BLOCK *VAR_1)
{
 UCHAR *VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_0->Ipc == ((void*)0))
 {

  return;
 }

 VAR_2 = VAR_1->Buf;
 VAR_3 = VAR_1->Size;

 if (VAR_0->L2TPv3 == 0)
 {

  if (VAR_3 < 2)
  {
   return;
  }

  if ((VAR_2[0] & 0xf0) != 0x30)
  {
   return;
  }

  VAR_2 += 2;
  VAR_3 -= 2;
 }

 if (VAR_3 < 14)
 {

  return;
 }


 FUNC_0(VAR_0->Ipc, VAR_2, VAR_3);
}
