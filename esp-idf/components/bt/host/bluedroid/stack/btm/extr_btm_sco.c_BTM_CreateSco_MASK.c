
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {int packet_types; } ;
struct TYPE_12__ {int bd_addr; } ;
struct TYPE_13__ {TYPE_6__ setup; TYPE_1__ data; } ;
struct TYPE_15__ {scalar_t__ state; scalar_t__ is_orig; int hci_handle; int * p_disc_cb; int * p_conn_cb; TYPE_2__ esco; scalar_t__ rem_bd_known; } ;
typedef TYPE_4__ tSCO_CONN ;
typedef scalar_t__ tBTM_STATUS ;
typedef int tBTM_SCO_CB ;
struct TYPE_16__ {int mode; } ;
typedef TYPE_5__ tBTM_PM_PWR_MD ;
typedef scalar_t__ tBTM_PM_MODE ;
typedef TYPE_6__ tBTM_ESCO_PARAMS ;
struct TYPE_18__ {scalar_t__ switch_role_state; } ;
typedef TYPE_7__ tACL_CONN ;
typedef int pm ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_14__ {scalar_t__ desired_sco_mode; TYPE_6__ def_esco_parms; TYPE_4__* sco_db; } ;
struct TYPE_19__ {int btm_sco_pkt_types_supported; TYPE_3__ sco_cb; } ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (int ,int ,TYPE_5__*) ;
 int FUNC_3 (char*,int,...) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 TYPE_7__* FUNC_4 (int ,int ) ;
 TYPE_9__ VAR_29 ;
 scalar_t__ FUNC_5 (int,TYPE_6__*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (void*,int ,int) ;

tBTM_STATUS FUNC_9 (BD_ADDR VAR_30, BOOLEAN VAR_31, UINT16 VAR_32,
                           UINT16 *VAR_33, tBTM_SCO_CB *VAR_34,
                           tBTM_SCO_CB *VAR_35)
{
    return (VAR_9);
}
