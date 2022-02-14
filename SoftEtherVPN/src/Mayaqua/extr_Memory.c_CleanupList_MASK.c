
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lock; struct TYPE_4__* p; } ;
typedef TYPE_1__ LIST ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

void FUNC_3(LIST *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_1->p);
 if (VAR_1->lock != ((void*)0))
 {
  FUNC_0(VAR_1->lock);
 }
 FUNC_1(VAR_1);


 FUNC_2(VAR_0);
}
