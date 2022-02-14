
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int level0; int duration0; int duration1; scalar_t__ level1; } ;
typedef TYPE_1__ rmt_item32_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(rmt_item32_t* VAR_1, int VAR_2, int VAR_3)
{
    VAR_1->level0 = 1;
    VAR_1->duration0 = (VAR_2) / 10 * VAR_0;
    VAR_1->level1 = 0;
    VAR_1->duration1 = (VAR_3) / 10 * VAR_0;
}
