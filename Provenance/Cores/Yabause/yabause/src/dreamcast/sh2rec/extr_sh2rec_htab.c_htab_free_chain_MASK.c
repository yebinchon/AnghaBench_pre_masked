
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* block; } ;
struct TYPE_6__ {TYPE_1__ block; struct TYPE_6__* next; } ;
typedef TYPE_2__ htab_entry_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(htab_entry_t *VAR_0) {
    htab_entry_t *VAR_1, *VAR_2;

    VAR_1 = VAR_0;
    while(VAR_1) {
        VAR_2 = VAR_1->next;
        FUNC_0(VAR_1->block.block);
        FUNC_0(VAR_1);
        VAR_1 = VAR_2;
    }
}
