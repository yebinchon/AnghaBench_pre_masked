
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ifnet_t ;
typedef int * if_fake_ref ;
struct TYPE_5__ {int * if_softc; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(ifnet_t VAR_0)
{
 if_fake_ref VAR_1;

 if (VAR_0 == ((void*)0)) {
  return;
 }
 FUNC_0();
 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1 == ((void*)0)) {
  FUNC_2();
  return;
 }
 VAR_0->if_softc = ((void*)0);
 FUNC_2();
 FUNC_1(VAR_1);
 FUNC_4(VAR_0);
 return;
}
