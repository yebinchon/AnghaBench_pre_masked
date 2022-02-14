
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int size; int * next; int * prev; } ;
typedef TYPE_1__ sh2rec_mem_block ;
struct TYPE_6__ {int * next; } ;
typedef TYPE_2__ sh2rec_mem_allocblock ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_0 (int) ;

int FUNC_1(void) {
    sh2rec_mem_block *VAR_4;
    sh2rec_mem_allocblock *VAR_5;
    uint8_t *VAR_6;


    VAR_6 = (uint8_t *)FUNC_0(VAR_0);
    VAR_5 = (sh2rec_mem_allocblock *)VAR_6;
    VAR_4 = (sh2rec_mem_block *)(VAR_6 + sizeof(sh2rec_mem_allocblock));
    VAR_2 = VAR_0;


    VAR_4->size = VAR_0 - sizeof(sh2rec_mem_allocblock) -
        sizeof(sh2rec_mem_block);
    VAR_4->prev = ((void*)0);
    VAR_4->next = ((void*)0);

    VAR_5->next = ((void*)0);
    VAR_1 = VAR_5;


    VAR_3 = VAR_4;

    return 0;
}
