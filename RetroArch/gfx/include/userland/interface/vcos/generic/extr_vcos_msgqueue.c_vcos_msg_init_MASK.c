
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pool; int * waiter; int * next; int magic; } ;
typedef TYPE_1__ VCOS_MSG_T ;


 int VAR_0 ;

void FUNC_0(VCOS_MSG_T *VAR_1)
{
   VAR_1->magic = VAR_0;
   VAR_1->next = ((void*)0);
   VAR_1->waiter = ((void*)0);
   VAR_1->pool = ((void*)0);
}
