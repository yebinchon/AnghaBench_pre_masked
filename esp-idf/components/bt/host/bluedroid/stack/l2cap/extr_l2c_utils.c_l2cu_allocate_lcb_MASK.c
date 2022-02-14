
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {void* param; } ;
struct TYPE_7__ {int link_flush_tout; int id; scalar_t__ completed_packets; int link_xmit_data_q; int le_sec_pending_q; int tx_data_len; scalar_t__ transport; int is_bonding; int idle_timeout; TYPE_6__ upda_con_timer; TYPE_6__ info_timer_entry; TYPE_6__ timer_entry; int handle; int link_state; scalar_t__ in_use; int remote_bd_addr; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef scalar_t__ tBT_TRANSPORT ;
struct TYPE_9__ {int (* get_ble_default_data_packet_length ) () ;} ;
struct TYPE_8__ {int num_links_active; int num_ble_links_active; int idle_timeout; TYPE_1__* lcb_pool; } ;
typedef void* TIMER_PARAM_TYPE ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_6__*) ;
 TYPE_5__* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_4__ VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 () ;

tL2C_LCB *FUNC_9 (BD_ADDR VAR_8, BOOLEAN VAR_9, tBT_TRANSPORT VAR_10)
{
    int VAR_11;
    tL2C_LCB *VAR_12 = &VAR_7.lcb_pool[0];

    for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++, VAR_12++) {
        if (!VAR_12->in_use) {
            FUNC_0(&VAR_12->timer_entry);
            FUNC_0(&VAR_12->info_timer_entry);
            FUNC_0(&VAR_12->upda_con_timer);

            FUNC_7 (VAR_12, 0, sizeof (tL2C_LCB));
            FUNC_6 (VAR_12->remote_bd_addr, VAR_8, VAR_0);

            VAR_12->in_use = VAR_6;
            VAR_12->link_state = VAR_3;
            VAR_12->handle = VAR_2;
            VAR_12->link_flush_tout = 0xFFFF;
            VAR_12->timer_entry.param = (TIMER_PARAM_TYPE)VAR_12;
            VAR_12->info_timer_entry.param = (TIMER_PARAM_TYPE)VAR_12;
            VAR_12->upda_con_timer.param = (TIMER_PARAM_TYPE)VAR_12;
            VAR_12->idle_timeout = VAR_7.idle_timeout;
            VAR_12->id = 1;
            VAR_12->is_bonding = VAR_9;

            VAR_12->transport = VAR_10;
            VAR_12->tx_data_len = FUNC_1()->get_ble_default_data_packet_length();
            VAR_12->le_sec_pending_q = FUNC_2(VAR_5);

            if (VAR_10 == VAR_1) {
                VAR_7.num_ble_links_active++;
                FUNC_3();
            } else

            {
                VAR_7.num_links_active++;
                FUNC_4();
            }
            VAR_12->link_xmit_data_q = FUNC_5(((void*)0));

            VAR_12->completed_packets = 0;

            return (VAR_12);
        }
    }


    return (((void*)0));
}
