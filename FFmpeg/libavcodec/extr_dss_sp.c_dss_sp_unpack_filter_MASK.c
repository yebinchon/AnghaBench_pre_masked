
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t* filter_idx; } ;
struct TYPE_5__ {TYPE_1__ fparam; int * lpc_filter; } ;
typedef TYPE_2__ DssSpContext ;


 int ** VAR_0 ;

__attribute__((used)) static void FUNC_0(DssSpContext *VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < 14; VAR_2++)
        VAR_1->lpc_filter[VAR_2] = VAR_0[VAR_2][VAR_1->fparam.filter_idx[VAR_2]];
}
