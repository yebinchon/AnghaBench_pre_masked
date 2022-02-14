
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* child; } ;
typedef TYPE_1__ fuzzyseperator_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(fuzzyseperator_t *VAR_0)
{
 if (!VAR_0) return;
 if (VAR_0->child) FUNC_1(VAR_0->child);
 if (VAR_0->next) FUNC_1(VAR_0->next);
 FUNC_0(VAR_0);
}
