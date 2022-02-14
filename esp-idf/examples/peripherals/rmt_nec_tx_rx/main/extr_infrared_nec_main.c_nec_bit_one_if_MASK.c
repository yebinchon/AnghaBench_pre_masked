
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ level0; scalar_t__ level1; int duration1; int duration0; } ;
typedef TYPE_1__ rmt_item32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_1(rmt_item32_t* VAR_4)
{
    if((VAR_4->level0 == VAR_3 && VAR_4->level1 != VAR_3)
        && FUNC_0(VAR_4->duration0, VAR_1, VAR_0)
        && FUNC_0(VAR_4->duration1, VAR_2, VAR_0)) {
        return 1;
    }
    return 0;
}
