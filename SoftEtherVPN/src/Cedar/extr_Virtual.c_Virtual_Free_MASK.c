
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int Active; int Logger; int Cancel; int * SendQueue; } ;
typedef TYPE_1__ VH ;
typedef int BLOCK ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*) ;

void FUNC_15(VH *VAR_0)
{

 FUNC_3(VAR_0);


 FUNC_7(VAR_0);

 FUNC_10(VAR_0);
 {

  FUNC_4(VAR_0);


  FUNC_5(VAR_0);


  FUNC_1(VAR_0);


  FUNC_0(VAR_0);


  FUNC_9(VAR_0->SendQueue);
  {
   BLOCK *VAR_1;


   while ((VAR_1 = FUNC_8(VAR_0->SendQueue)))
   {
    FUNC_2(VAR_1);
   }
  }
  FUNC_13(VAR_0->SendQueue);
  FUNC_12(VAR_0->SendQueue);
  VAR_0->SendQueue = ((void*)0);


  FUNC_11(VAR_0->Cancel);

  VAR_0->Active = 0;
 }
 FUNC_14(VAR_0);


 FUNC_6(VAR_0->Logger);
}
