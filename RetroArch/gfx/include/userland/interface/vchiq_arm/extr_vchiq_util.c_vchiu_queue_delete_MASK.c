
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * storage; int push; int pop; } ;
typedef TYPE_1__ VCHIU_QUEUE_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(VCHIU_QUEUE_T *VAR_0)
{
   FUNC_0(&VAR_0->pop);
   FUNC_0(&VAR_0->push);
   if (VAR_0->storage != ((void*)0))
      FUNC_1(VAR_0->storage);
}
