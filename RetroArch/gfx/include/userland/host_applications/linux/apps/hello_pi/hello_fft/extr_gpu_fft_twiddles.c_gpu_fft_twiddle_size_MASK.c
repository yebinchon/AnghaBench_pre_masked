
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shared; int unique; int passes; } ;


 TYPE_1__* VAR_0 ;

int FUNC_0(int VAR_1, int *VAR_2, int *VAR_3, int *VAR_4) {
    if (VAR_1<8 || VAR_1>22) return -1;
    *VAR_2 = VAR_0[VAR_1-8].shared;
    *VAR_3 = VAR_0[VAR_1-8].unique;
    *VAR_4 = VAR_0[VAR_1-8].passes;
    return 0;
}
