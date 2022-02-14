
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u16_t ;
struct TYPE_11__ {scalar_t__ cw_mode; void* cw_width; } ;
struct TYPE_8__ {int ChannelInfo; } ;
struct TYPE_7__ {int HtCapInfo; } ;
struct TYPE_9__ {TYPE_2__ HtInfo; TYPE_1__ HtCap; } ;
struct TYPE_10__ {TYPE_3__ ie; } ;
struct TYPE_12__ {scalar_t__ wlanMode; TYPE_5__ cwm; TYPE_4__ sta; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_6__* VAR_12 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_13, u16_t VAR_14)
{

    FUNC_1(VAR_13);

    FUNC_0(VAR_7, "CwmBusy=", VAR_14);

    if(VAR_12->cwm.cw_mode == VAR_0) {
        VAR_12->cwm.cw_width = VAR_2;
        return;
    }

    if(VAR_12->cwm.cw_mode == VAR_1) {
        VAR_12->cwm.cw_width = VAR_3;
        return;
    }

    if (VAR_14) {
        VAR_12->cwm.cw_width = VAR_2;
        return;
    }


    if((VAR_12->wlanMode == VAR_10 || VAR_12->wlanMode == VAR_11 ||
        VAR_12->wlanMode == VAR_9)) {
        if ((VAR_12->sta.ie.HtCap.HtCapInfo & VAR_6) &&
            (VAR_12->sta.ie.HtInfo.ChannelInfo & VAR_5) &&
            (VAR_12->sta.ie.HtInfo.ChannelInfo & VAR_4)) {

            VAR_12->cwm.cw_width = VAR_3;
        }
        else {
            VAR_12->cwm.cw_width = VAR_2;
        }

        return;
    }

    if(VAR_12->wlanMode == VAR_8) {
        VAR_12->cwm.cw_width = VAR_3;
    }

}
