
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* v; struct TYPE_5__* next; } ;
typedef TYPE_1__ Set ;


 TYPE_1__* FUNC_0 (int) ;

Set *FUNC_1(Set *VAR_0, char *VAR_1) {
    Set *VAR_2 = FUNC_0(sizeof(Set));
    VAR_2->next = VAR_0;
    VAR_2->v = VAR_1;
    return VAR_2;
}
