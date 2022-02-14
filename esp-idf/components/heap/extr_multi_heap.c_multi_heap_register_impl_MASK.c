
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* multi_heap_handle_t ;
struct TYPE_6__ {intptr_t header; TYPE_4__* next_free; } ;
struct TYPE_7__ {size_t free_bytes; size_t minimum_free_bytes; TYPE_1__ first_block; TYPE_4__* last_block; int * lock; } ;
typedef TYPE_2__ heap_t ;
struct TYPE_8__ {intptr_t header; struct TYPE_8__* next_free; } ;
typedef TYPE_4__ heap_block_t ;


 uintptr_t FUNC_0 (uintptr_t) ;
 uintptr_t FUNC_1 (uintptr_t) ;
 intptr_t VAR_0 ;

multi_heap_handle_t FUNC_2(void *VAR_1, size_t VAR_2)
{
    uintptr_t VAR_3 = FUNC_1((uintptr_t)VAR_1);
    uintptr_t VAR_4 = FUNC_0((uintptr_t)VAR_1 + VAR_2);
    heap_t *VAR_5 = (heap_t *)VAR_3;
    VAR_2 = VAR_4 - VAR_3;

    if (VAR_4 < VAR_3 || VAR_2 < sizeof(heap_t) + 2*sizeof(heap_block_t)) {
        return ((void*)0);
    }
    VAR_5->lock = ((void*)0);
    VAR_5->last_block = (heap_block_t *)(VAR_4 - sizeof(heap_block_t));


    heap_block_t *VAR_6 = (heap_block_t *)(VAR_3 + sizeof(heap_t));
    VAR_6->header = (intptr_t)VAR_5->last_block | VAR_0;
    VAR_6->next_free = VAR_5->last_block;


    VAR_5->last_block->header = VAR_0;
    VAR_5->last_block->next_free = ((void*)0);



    VAR_5->first_block.header = (intptr_t)VAR_6 | VAR_0;
    VAR_5->first_block.next_free = VAR_6;







    VAR_5->free_bytes = VAR_2 - sizeof(heap_t) - sizeof(VAR_6->header) - sizeof(heap_block_t);
    VAR_5->minimum_free_bytes = VAR_5->free_bytes;

    return VAR_5;
}
