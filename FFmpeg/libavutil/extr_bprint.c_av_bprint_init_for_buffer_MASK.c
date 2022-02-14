
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* str; unsigned int size; unsigned int size_max; scalar_t__ len; } ;
typedef TYPE_1__ AVBPrint ;



void FUNC_0(AVBPrint *VAR_0, char *VAR_1, unsigned VAR_2)
{
    VAR_0->str = VAR_1;
    VAR_0->len = 0;
    VAR_0->size = VAR_2;
    VAR_0->size_max = VAR_2;
    *VAR_0->str = 0;
}
