
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_points; int* lev_code; } ;
typedef TYPE_1__ AtracGainInfo ;



__attribute__((used)) static inline void FUNC_0(AtracGainInfo *VAR_0, AtracGainInfo *VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->num_points; VAR_2++)
        VAR_0->lev_code[VAR_2] = (VAR_2 >= VAR_1->num_points) ? 7 : VAR_1->lev_code[VAR_2];
}
