
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
struct TYPE_3__ {int connPowerInHalfDbm; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

u32_t FUNC_3(zdev_t* VAR_1)
{
    u32_t VAR_2 = 0;

    FUNC_2(VAR_1);

    if (FUNC_1(VAR_1)) {
        VAR_2 = VAR_0->sta.connPowerInHalfDbm;
    } else {
        VAR_2 = FUNC_0(VAR_1);
    }

    return VAR_2;
}
