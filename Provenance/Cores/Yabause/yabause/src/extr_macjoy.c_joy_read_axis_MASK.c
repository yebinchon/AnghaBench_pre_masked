
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int axes_count; TYPE_3__* axes; } ;
typedef TYPE_1__ joydata_t ;
struct TYPE_6__ {scalar_t__ max; } ;


 float FUNC_0 (TYPE_1__*,TYPE_3__*) ;

int FUNC_1(joydata_t *VAR_0, int VAR_1) {
    float VAR_2;

    if(VAR_1 >= VAR_0->axes_count) {
        return 0;
    }

    VAR_2 = FUNC_0(VAR_0, VAR_0->axes + VAR_1) /
        (float)(VAR_0->axes[VAR_1].max + 1);

    return (int)(VAR_2 * 32768);
}
