
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int num_resp; } ;
typedef TYPE_2__ tBTM_INQUIRY_CMPL ;
struct TYPE_6__ {int num_resps; } ;
struct TYPE_8__ {TYPE_1__ inq_cmpl; } ;
typedef TYPE_3__ tBTA_DM_SEARCH ;
struct TYPE_9__ {int (* p_scan_cback ) (int ,TYPE_3__*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_1 (int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_2 (void *VAR_2)
{
    tBTA_DM_SEARCH VAR_3;

    FUNC_0("bta_dm_observe_cmpl_cb");

    VAR_3.inq_cmpl.num_resps = ((tBTM_INQUIRY_CMPL *)VAR_2)->num_resp;
    if (VAR_1.p_scan_cback) {
        VAR_1.p_scan_cback(VAR_0, &VAR_3);
    }
}
