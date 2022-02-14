
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int bd_addr; scalar_t__ link_type; } ;
struct TYPE_10__ {TYPE_2__ data; int (* p_esco_cback ) (int ,int *) ;} ;
struct TYPE_11__ {scalar_t__ state; void* rem_bd_known; TYPE_3__ esco; int is_orig; } ;
typedef TYPE_4__ tSCO_CONN ;
struct TYPE_8__ {int packet_types; } ;
struct TYPE_12__ {int (* app_sco_ind_cb ) (scalar_t__) ;TYPE_4__* sco_db; TYPE_1__ def_esco_parms; } ;
typedef TYPE_5__ tSCO_CB ;
typedef int tBTM_ESCO_EVT_DATA ;
struct TYPE_13__ {scalar_t__ sco_inx; scalar_t__ link_type; int dev_class; int bd_addr; } ;
typedef TYPE_6__ tBTM_ESCO_CONN_REQ_EVT_DATA ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_14__ {TYPE_5__ sco_cb; } ;
typedef int DEV_CLASS ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 void* VAR_16 ;
 TYPE_7__ VAR_17 ;
 int FUNC_1 (scalar_t__,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6 (BD_ADDR VAR_18, DEV_CLASS VAR_19, UINT8 VAR_20)
{
    FUNC_0("btm_sco_conn_req: No one wants this SCO connection; rejecting it");
    FUNC_1(VAR_5, VAR_10, VAR_18, ((void*)0));
}
