
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** index_run; int n; int** max_level; } ;
typedef TYPE_1__ RLTable ;



__attribute__((used)) static inline int FUNC_0(const RLTable *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;
    VAR_4 = VAR_0->index_run[VAR_1][VAR_2];
    if (VAR_4 >= VAR_0->n)
        return VAR_0->n;
    if (VAR_3 > VAR_0->max_level[VAR_1][VAR_2])
        return VAR_0->n;
    return VAR_4 + VAR_3 - 1;
}
