
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int size; TYPE_1__* prev; TYPE_4__* next; } ;
struct TYPE_10__ {TYPE_2__ base; int * freespace; } ;
typedef TYPE_3__ sh2rec_mem_usedblock ;
struct TYPE_11__ {TYPE_1__* prev; } ;
typedef TYPE_4__ sh2rec_mem_block ;
struct TYPE_8__ {TYPE_4__* next; } ;


 TYPE_4__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_3__* VAR_2 ;

void FUNC_0(void *VAR_3) {
    sh2rec_mem_usedblock *VAR_4 = (sh2rec_mem_usedblock *)VAR_3;


    if(VAR_4->base.next) {
        VAR_4->base.next->prev = VAR_4->base.prev;
    }

    if(VAR_4->base.prev) {
        VAR_4->base.prev->next = VAR_4->base.next;
    }

    if(VAR_4 == VAR_1) {
        VAR_1 = (sh2rec_mem_usedblock *)VAR_4->base.next;
    }

    if(VAR_4 == VAR_2) {
        VAR_2 = (sh2rec_mem_usedblock *)VAR_4->base.prev;
    }



    VAR_4->freespace = ((void*)0);
    VAR_4->base.next = VAR_0;
    VAR_4->base.prev = ((void*)0);
    VAR_4->base.size += sizeof(sh2rec_mem_usedblock) - sizeof(sh2rec_mem_block);
    VAR_0 = (sh2rec_mem_block *)VAR_4;
}
