
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int num_dis; } ;
struct TYPE_6__ {TYPE_1__ inq_dis; } ;
typedef TYPE_2__ tBTA_DM_SEARCH ;
struct TYPE_7__ {int (* p_scan_cback ) (int ,TYPE_2__*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2 (uint32_t VAR_2)
{
    tBTA_DM_SEARCH VAR_3;

    FUNC_0("bta_dm_observe_discard_cb");

    VAR_3.inq_dis.num_dis = VAR_2;
    if (VAR_1.p_scan_cback) {
        VAR_1.p_scan_cback(VAR_0, &VAR_3);
    }
}
