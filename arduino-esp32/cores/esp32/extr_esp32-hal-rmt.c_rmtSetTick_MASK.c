
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {size_t channel; } ;
typedef TYPE_4__ rmt_obj_t ;
struct TYPE_11__ {TYPE_3__* conf_ch; } ;
struct TYPE_8__ {int ref_always_on; } ;
struct TYPE_7__ {int div_cnt; } ;
struct TYPE_9__ {TYPE_2__ conf1; TYPE_1__ conf0; } ;


 TYPE_6__ VAR_0 ;
 scalar_t__ FUNC_0 (float) ;
 int FUNC_1 (float,int) ;

float FUNC_2(rmt_obj_t* VAR_1, float VAR_2)
{
    if (!VAR_1) {
        return 0;
    }







    int VAR_3 = FUNC_1(VAR_2/12.5, 256);
    int VAR_4 = FUNC_1(VAR_2/1000, 256);

    float VAR_5 = 12.5 * VAR_3;
    float VAR_6 = 1000.0 * VAR_4;

    size_t VAR_7 = VAR_1->channel;

    if (FUNC_0(VAR_5 - VAR_2) < FUNC_0(VAR_6 - VAR_2)) {
        VAR_0.conf_ch[VAR_7].conf0.div_cnt = VAR_3 & 0xFF;
        VAR_0.conf_ch[VAR_7].conf1.ref_always_on = 1;
        return VAR_5;
    } else {
        VAR_0.conf_ch[VAR_7].conf0.div_cnt = VAR_4 & 0xFF;
        VAR_0.conf_ch[VAR_7].conf1.ref_always_on = 0;
        return VAR_6;
    }
}
