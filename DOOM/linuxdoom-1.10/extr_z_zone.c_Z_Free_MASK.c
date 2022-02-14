
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ id; void** user; struct TYPE_3__* prev; struct TYPE_3__* next; scalar_t__ size; scalar_t__ tag; } ;
typedef TYPE_1__ memblock_t ;
typedef int byte ;
struct TYPE_4__ {TYPE_1__* rover; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_1 (void* VAR_2)
{
    memblock_t* VAR_3;
    memblock_t* VAR_4;

    VAR_3 = (memblock_t *) ( (byte *)VAR_2 - sizeof(memblock_t));

    if (VAR_3->id != VAR_0)
 FUNC_0 ("Z_Free: freed a pointer without ZONEID");

    if (VAR_3->user > (void **)0x100)
    {




 *VAR_3->user = 0;
    }


    VAR_3->user = ((void*)0);
    VAR_3->tag = 0;
    VAR_3->id = 0;

    VAR_4 = VAR_3->prev;

    if (!VAR_4->user)
    {

 VAR_4->size += VAR_3->size;
 VAR_4->next = VAR_3->next;
 VAR_4->next->prev = VAR_4;

 if (VAR_3 == VAR_1->rover)
     VAR_1->rover = VAR_4;

 VAR_3 = VAR_4;
    }

    VAR_4 = VAR_3->next;
    if (!VAR_4->user)
    {

 VAR_3->size += VAR_4->size;
 VAR_3->next = VAR_4->next;
 VAR_3->next->prev = VAR_3;

 if (VAR_4 == VAR_1->rover)
     VAR_1->rover = VAR_3;
    }
}
