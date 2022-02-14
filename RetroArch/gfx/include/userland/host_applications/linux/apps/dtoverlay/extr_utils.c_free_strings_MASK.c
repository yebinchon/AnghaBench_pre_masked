
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ STRING_T ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(void)
{
    if (VAR_0)
    {
 STRING_T *VAR_1 = VAR_0;
 do
 {
     STRING_T *VAR_2 = VAR_1;
     VAR_1 = VAR_2->next;
     FUNC_0(VAR_2);
 } while (VAR_1 != VAR_0);
 VAR_0 = ((void*)0);
    }
}
