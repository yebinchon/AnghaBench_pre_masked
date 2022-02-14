
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_9__ {int * p_cback; } ;
struct TYPE_7__ {int count; int le_count; TYPE_1__* peer_device; } ;
struct TYPE_10__ {TYPE_4__ switch_delay_timer; TYPE_2__ device_list; scalar_t__ cur_av_count; } ;
struct TYPE_8__ {scalar_t__ cfg; } ;
struct TYPE_6__ {scalar_t__ conn_state; scalar_t__ transport; scalar_t__ pref_role; int peer_bdaddr; } ;
typedef int TIMER_CBACK ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_10 ;
 TYPE_5__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 TYPE_3__* VAR_13 ;

__attribute__((used)) static void FUNC_3(BOOLEAN VAR_14)
{

    UINT8 VAR_15;
    BOOLEAN VAR_16 = VAR_7;

    UINT8 VAR_17 = VAR_11.device_list.count - VAR_11.device_list.le_count;



    if (VAR_17) {



        if ( (VAR_13[0].cfg == VAR_2) ||
                (VAR_11.cur_av_count && VAR_17 > 1) ) {

            FUNC_1 (VAR_8);
            VAR_16 = VAR_10;

        }

        for (VAR_15 = 0; VAR_15 < VAR_11.device_list.count; VAR_15++) {
            if (VAR_11.device_list.peer_device[VAR_15].conn_state == VAR_1

                    && VAR_11.device_list.peer_device[VAR_15].transport == VAR_6

               ) {
                if (!VAR_16 && (VAR_11.device_list.peer_device[VAR_15].pref_role != VAR_0)
                        && (VAR_13[0].cfg == VAR_3)) {
                    FUNC_1 (VAR_8);
                    VAR_16 = VAR_10;
                }

                if ((VAR_11.device_list.peer_device[VAR_15].pref_role == VAR_4)
                        || (VAR_17 > 1)) {







                    if (VAR_11.device_list.peer_device[VAR_15].pref_role != VAR_5 &&
                            VAR_14 == VAR_7) {
                        FUNC_0 (VAR_11.device_list.peer_device[VAR_15].peer_bdaddr,
                                        VAR_8, ((void*)0));
                    } else {
                        VAR_11.switch_delay_timer.p_cback =
                            (TIMER_CBACK *)&VAR_12;
                        FUNC_2(&VAR_11.switch_delay_timer, 0, 500);
                    }
                }

            }
        }


        if (!VAR_16) {

            FUNC_1 (VAR_9);

        }

    } else {
        FUNC_1 (VAR_9);
    }


}
