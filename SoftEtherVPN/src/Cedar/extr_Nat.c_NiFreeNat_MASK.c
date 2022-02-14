
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; int HaltEvent; int Cedar; int * Virtual; } ;
typedef TYPE_1__ NAT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

void FUNC_9(NAT *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }





 FUNC_2(VAR_0->lock);
 {
  if (VAR_0->Virtual != ((void*)0))
  {
   FUNC_7(VAR_0->Virtual);
   FUNC_6(VAR_0->Virtual);
   VAR_0->Virtual = ((void*)0);
  }
 }
 FUNC_8(VAR_0->lock);


 FUNC_3(VAR_0);


 FUNC_4(VAR_0->Cedar);
 FUNC_5(VAR_0->HaltEvent);
 FUNC_0(VAR_0->lock);

 FUNC_1(VAR_0);
}
