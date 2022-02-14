
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tBT_TRANSPORT ;
typedef size_t UINT8 ;
struct TYPE_11__ {int param; int * p_cback; } ;
struct TYPE_9__ {size_t count; TYPE_1__* peer_device; } ;
struct TYPE_12__ {int (* p_sec_cback ) (int ,int *) ;void* disabling; TYPE_4__ disable_timer; TYPE_2__ device_list; } ;
struct TYPE_10__ {scalar_t__ param; } ;
struct TYPE_8__ {int peer_bdaddr; int transport; } ;
typedef TYPE_3__ TIMER_LIST_ENT ;
typedef int TIMER_CBACK ;
typedef void* BOOLEAN ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_4 ;
 TYPE_6__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7 (TIMER_LIST_ENT *VAR_6)
{
    FUNC_2(VAR_6);
    UINT8 VAR_7;
    tBT_TRANSPORT VAR_8 = VAR_1;
    BOOLEAN VAR_9 = VAR_2;


    FUNC_0(" bta_dm_disable_timer_cback trial %d ", VAR_6->param);

    if (FUNC_1() && VAR_6->param == 0) {
        for (VAR_7 = 0; VAR_7 < VAR_5.device_list.count; VAR_7++) {

            VAR_8 = VAR_5.device_list.peer_device[VAR_7].transport;

            FUNC_5(VAR_5.device_list.peer_device[VAR_7].peer_bdaddr, VAR_8);
            VAR_9 = VAR_3;
        }



        if (VAR_9) {
            VAR_5.disable_timer.p_cback = (TIMER_CBACK *)&FUNC_7;
            VAR_5.disable_timer.param = 1;
            FUNC_4(&VAR_5.disable_timer, 0, 1500);
        }
    } else {
        VAR_5.disabling = VAR_2;

        FUNC_3(VAR_4);
        VAR_5.p_sec_cback(VAR_0, ((void*)0));
    }
}
