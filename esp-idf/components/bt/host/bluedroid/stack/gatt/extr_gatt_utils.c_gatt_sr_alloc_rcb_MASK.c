
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* p_db; int e_hdl; int s_hdl; int type; int service_instance; int app_uuid; scalar_t__ in_use; } ;
typedef TYPE_3__ tGATT_SR_REG ;
struct TYPE_9__ {int svc_buffer; } ;
struct TYPE_8__ {int e_handle; int s_handle; scalar_t__ is_primary; int svc_inst; int app_uuid128; } ;
struct TYPE_11__ {TYPE_2__ svc_db; TYPE_1__ asgn_range; } ;
typedef TYPE_4__ tGATT_HDL_LIST_ELEM ;
typedef int tBT_UUID ;
typedef scalar_t__ UINT8 ;
struct TYPE_12__ {TYPE_3__* sr_reg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_7__ VAR_4 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;

UINT8 FUNC_4(tGATT_HDL_LIST_ELEM *VAR_5 )
{
    UINT8 VAR_6 = 0;
    tGATT_SR_REG *VAR_7 = ((void*)0);


    for (VAR_6 = 0, VAR_7 = VAR_4.sr_reg; VAR_6 < VAR_0; VAR_6++, VAR_7++) {
        if (!VAR_7->in_use) {
            FUNC_3 (VAR_7, 0, sizeof(tGATT_SR_REG));

            VAR_7->in_use = VAR_3;
            FUNC_2 (&VAR_7->app_uuid, &VAR_5->asgn_range.app_uuid128, sizeof(tBT_UUID));

            VAR_7->service_instance = VAR_5->asgn_range.svc_inst;
            VAR_7->type = VAR_5->asgn_range.is_primary ? VAR_1 : VAR_2;
            VAR_7->s_hdl = VAR_5->asgn_range.s_handle;
            VAR_7->e_hdl = VAR_5->asgn_range.e_handle;
            VAR_7->p_db = &VAR_5->svc_db;

            FUNC_0 ("total buffer in db [%d]", FUNC_1(VAR_7->p_db->svc_buffer));
            break;
        }
    }

    return VAR_6;
}
