
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int quant; int vop_flags; int motion_flags; int vol_flags; TYPE_1__* zone; } ;
typedef TYPE_2__ xvid_plg_data_t ;
struct xvid_context {int dummy; } ;
struct TYPE_4__ {scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static int FUNC_0(struct xvid_context *VAR_15,
                                xvid_plg_data_t *VAR_16)
{
    int VAR_17;
    int VAR_18;
    int VAR_19;


    if (VAR_16->zone && VAR_16->zone->mode == VAR_14)
        return 0;


    VAR_16->quant = 2;


    VAR_17 = ~VAR_3 &
                          ~VAR_2 &
                          ~VAR_4 &
                          ~VAR_0;
    VAR_18 = VAR_6 |
                          VAR_7 |
                          VAR_5 |
                          VAR_1;
    VAR_19 = ~VAR_12 &
                          ~VAR_9 &
                          ~VAR_13 &
                          ~VAR_11 &
                          ~VAR_10;

    VAR_16->vol_flags &= ~VAR_8;
    VAR_16->vop_flags &= VAR_19;
    VAR_16->motion_flags &= VAR_17;
    VAR_16->motion_flags |= VAR_18;

    return 0;
}
