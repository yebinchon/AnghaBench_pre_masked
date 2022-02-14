
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* prev; struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__* next; } ;
typedef TYPE_2__ STRING_T ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(const char *VAR_1)
{
    STRING_T *VAR_2;

    if (!VAR_1)
 return;

    VAR_2 = (STRING_T *)(VAR_1 - sizeof(STRING_T));
    if (VAR_2 == VAR_0)
    {
 VAR_0 = VAR_2->next;
 if (VAR_0 == VAR_2)
     VAR_0 = ((void*)0);
    }
    VAR_2->prev->next = VAR_2->next;
    VAR_2->next->prev = VAR_2->prev;
    FUNC_0(VAR_2);
}
