
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int HaltNat; int NativeNat; int NatThread; int SockEvent; int NatTable; } ;
typedef TYPE_1__ VH ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,void*) ;
 int FUNC_5 (int ) ;

void FUNC_6(VH *VAR_2)
{

 if (VAR_2 == ((void*)0))
 {
  return;
 }


 VAR_2->NatTable = FUNC_1(VAR_0);


 VAR_2->SockEvent = FUNC_3();


 VAR_2->HaltNat = 0;
 VAR_2->NatThread = FUNC_4(VAR_1, (void *)VAR_2);
 FUNC_5(VAR_2->NatThread);

 if (FUNC_0())
 {

  VAR_2->NativeNat = FUNC_2(VAR_2);
 }
}
