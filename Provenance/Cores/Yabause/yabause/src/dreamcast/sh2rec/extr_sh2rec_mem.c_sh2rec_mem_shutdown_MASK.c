
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ sh2rec_mem_allocblock ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * VAR_1 ;
 int * VAR_2 ;

void FUNC_1(void) {
    sh2rec_mem_allocblock *VAR_3, *VAR_4;


    VAR_3 = VAR_0;
    while(VAR_3) {
        VAR_4 = VAR_3->next;
        FUNC_0(VAR_3);
        VAR_3 = VAR_4;
    }


    VAR_0 = ((void*)0);
    VAR_1 = ((void*)0);
    VAR_2 = ((void*)0);
}
