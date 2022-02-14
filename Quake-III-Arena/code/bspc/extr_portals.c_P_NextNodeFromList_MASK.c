
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ node_t ;


 TYPE_1__* VAR_0 ;
 int * VAR_1 ;

node_t *FUNC_0(void)
{
 node_t *VAR_2;

 VAR_2 = VAR_0;
 if (VAR_0) VAR_0 = VAR_0->next;
 if (!VAR_0) VAR_1 = ((void*)0);
 return VAR_2;
}
