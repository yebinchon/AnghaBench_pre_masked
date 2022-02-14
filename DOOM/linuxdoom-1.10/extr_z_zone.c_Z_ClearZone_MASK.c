
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tag; void* user; TYPE_3__* prev; TYPE_3__* next; } ;
struct TYPE_6__ {scalar_t__ size; TYPE_1__ blocklist; TYPE_3__* rover; } ;
typedef TYPE_2__ memzone_t ;
struct TYPE_7__ {scalar_t__ size; int * user; TYPE_1__* next; TYPE_1__* prev; } ;
typedef TYPE_3__ memblock_t ;
typedef int byte ;


 int VAR_0 ;

void FUNC_0 (memzone_t* VAR_1)
{
    memblock_t* VAR_2;


    VAR_1->blocklist.next =
 VAR_1->blocklist.prev =
 VAR_2 = (memblock_t *)( (byte *)VAR_1 + sizeof(memzone_t) );

    VAR_1->blocklist.user = (void *)VAR_1;
    VAR_1->blocklist.tag = VAR_0;
    VAR_1->rover = VAR_2;

    VAR_2->prev = VAR_2->next = &VAR_1->blocklist;


    VAR_2->user = ((void*)0);

    VAR_2->size = VAR_1->size - sizeof(memzone_t);
}
