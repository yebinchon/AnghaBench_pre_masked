
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* sps; } ;
struct TYPE_11__ {TYPE_4__* HEVClc; TYPE_3__ ps; } ;
struct TYPE_7__ {scalar_t__ pred_mode; } ;
struct TYPE_10__ {int cc; TYPE_1__ cu; } ;
struct TYPE_8__ {int log2_min_cb_size; int amp_enabled_flag; } ;
typedef TYPE_5__ HEVCContext ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__* VAR_10 ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(HEVCContext *VAR_11, int VAR_12)
{
    if (FUNC_0(VAR_10[VAR_5]))
        return VAR_1;
    if (VAR_12 == VAR_11->ps.sps->log2_min_cb_size) {
        if (VAR_11->HEVClc->cu.pred_mode == VAR_0)
            return VAR_7;
        if (FUNC_0(VAR_10[VAR_5] + 1))
            return VAR_2;
        if (VAR_12 == 3)
            return VAR_6;
        if (FUNC_0(VAR_10[VAR_5] + 2))
            return VAR_6;
        return VAR_7;
    }

    if (!VAR_11->ps.sps->amp_enabled_flag) {
        if (FUNC_0(VAR_10[VAR_5] + 1))
            return VAR_2;
        return VAR_6;
    }

    if (FUNC_0(VAR_10[VAR_5] + 1)) {
        if (FUNC_0(VAR_10[VAR_5] + 3))
            return VAR_2;
        if (FUNC_1(&VAR_11->HEVClc->cc))
            return VAR_3;
        return VAR_4;
    }

    if (FUNC_0(VAR_10[VAR_5] + 3))
        return VAR_6;
    if (FUNC_1(&VAR_11->HEVClc->cc))
        return VAR_9;
    return VAR_8;
}
