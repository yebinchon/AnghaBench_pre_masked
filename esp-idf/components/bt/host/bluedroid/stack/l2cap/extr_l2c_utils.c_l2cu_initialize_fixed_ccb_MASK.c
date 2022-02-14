
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_21__ {scalar_t__ link_state; TYPE_8__** p_fixed_ccbs; int timer_entry; } ;
typedef TYPE_7__ tL2C_LCB ;
struct TYPE_19__ {int max_held_acks; } ;
struct TYPE_18__ {int user_tx_buf_size; int user_rx_buf_size; int fcr_tx_buf_size; int fcr_rx_buf_size; } ;
struct TYPE_23__ {int tx_win_sz; } ;
struct TYPE_17__ {TYPE_9__ fcr; } ;
struct TYPE_16__ {TYPE_9__ fcr; } ;
struct TYPE_15__ {scalar_t__ param; } ;
struct TYPE_22__ {size_t local_cid; size_t remote_cid; int fixed_chnl_idle_tout; int chnl_state; TYPE_7__* p_lcb; TYPE_5__ fcrb; TYPE_4__ ertm_info; TYPE_3__ peer_cfg; TYPE_2__ our_cfg; TYPE_1__ timer_entry; int is_flushable; } ;
typedef TYPE_8__ tL2C_CCB ;
typedef TYPE_9__ tL2CAP_FCR_OPTS ;
typedef size_t UINT16 ;
struct TYPE_20__ {int default_idle_tout; } ;
struct TYPE_14__ {TYPE_6__* fixed_reg; } ;
typedef scalar_t__ TIMER_PARAM_TYPE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 TYPE_13__ VAR_9 ;
 TYPE_8__* FUNC_1 (int *,int ) ;

BOOLEAN FUNC_2 (tL2C_LCB *VAR_10, UINT16 VAR_11, tL2CAP_FCR_OPTS *VAR_12)
{
    return (VAR_8);
}
