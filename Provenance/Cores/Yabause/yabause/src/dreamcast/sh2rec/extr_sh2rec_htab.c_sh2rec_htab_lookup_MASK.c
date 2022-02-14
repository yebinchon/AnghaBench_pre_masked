
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ start_pc; } ;
typedef TYPE_1__ sh2rec_block_t ;
struct TYPE_6__ {struct TYPE_6__* next; TYPE_1__ block; } ;
typedef TYPE_2__ htab_entry_t ;


 size_t FUNC_0 (scalar_t__) ;
 TYPE_2__** VAR_0 ;

sh2rec_block_t *FUNC_1(u32 VAR_1) {
    htab_entry_t *VAR_2 = VAR_0[FUNC_0(VAR_1)];


    while(VAR_2) {
        if(VAR_2->block.start_pc == VAR_1) {
            return &VAR_2->block;
        }

        VAR_2 = VAR_2->next;
    }


    return ((void*)0);
}
