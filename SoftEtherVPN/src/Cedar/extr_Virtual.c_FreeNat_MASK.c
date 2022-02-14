
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int HaltNat; int NatTable; int * SockEvent; int * NatThread; int * NativeNat; } ;
typedef TYPE_1__ VH ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(VH *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }


 if (VAR_1->NativeNat != ((void*)0))
 {
  FUNC_0(VAR_1->NativeNat);
  VAR_1->NativeNat = ((void*)0);
 }


 VAR_1->HaltNat = 1;
 FUNC_4(VAR_1->SockEvent);
 FUNC_5(VAR_1->NatThread, VAR_0);
 FUNC_3(VAR_1->NatThread);
 VAR_1->NatThread = ((void*)0);
 FUNC_2(VAR_1->SockEvent);
 VAR_1->SockEvent = ((void*)0);


 FUNC_1(VAR_1->NatTable);
}
