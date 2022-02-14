
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* next; TYPE_1__* prev; } ;
struct TYPE_9__ {TYPE_1__* prev; } ;
struct TYPE_8__ {TYPE_2__* next; } ;
typedef TYPE_3__ Job ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

Job *
FUNC_2(Job *VAR_0)
{
    if (!VAR_0) return ((void*)0);
    if (FUNC_0(VAR_0)) return ((void*)0);

    VAR_0->next->prev = VAR_0->prev;
    VAR_0->prev->next = VAR_0->next;

    FUNC_1(VAR_0);

    return VAR_0;
}
