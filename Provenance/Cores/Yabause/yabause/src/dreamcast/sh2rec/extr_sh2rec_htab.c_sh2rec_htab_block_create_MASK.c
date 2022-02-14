
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* u32 ;
typedef int u16 ;
struct TYPE_5__ {int length; int * block; int * ptr; void* pc; scalar_t__ cycles; void* start_pc; } ;
typedef TYPE_1__ sh2rec_block_t ;
struct TYPE_6__ {TYPE_1__ block; struct TYPE_6__* next; } ;
typedef TYPE_2__ htab_entry_t ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__** VAR_0 ;

sh2rec_block_t *FUNC_2(u32 VAR_1, int VAR_2) {
    uint8_t *VAR_3;
    htab_entry_t *VAR_4;
    int VAR_5 = FUNC_0(VAR_1);

    VAR_3 = (uint8_t *)FUNC_1(VAR_2 + sizeof(htab_entry_t));
    VAR_4 = (htab_entry_t *)VAR_3;
    VAR_4->block.block = (u16 *)(VAR_3 + sizeof(htab_entry_t));


    VAR_4->block.start_pc = VAR_1;
    VAR_4->block.cycles = 0;
    VAR_4->block.pc = VAR_1;
    VAR_4->block.length = VAR_2;
    VAR_4->block.ptr = VAR_4->block.block;



    VAR_4->next = VAR_0[VAR_5];
    VAR_0[VAR_5] = VAR_4;

    return &VAR_4->block;
}
