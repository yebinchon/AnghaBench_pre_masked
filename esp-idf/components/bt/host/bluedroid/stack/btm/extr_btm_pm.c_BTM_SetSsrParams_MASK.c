
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_5__ {scalar_t__ state; void* min_loc_to; void* min_rmt_to; void* max_lat; } ;
typedef TYPE_2__ tBTM_PM_MCB ;
typedef void* UINT16 ;
struct TYPE_6__ {TYPE_2__* pm_mode_db; TYPE_1__* acl_db; } ;
struct TYPE_4__ {int hci_handle; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,void*,void*,void*) ;

tBTM_STATUS FUNC_2 (BD_ADDR VAR_9, UINT16 VAR_10,
                              UINT16 VAR_11, UINT16 VAR_12)
{

    int VAR_13;
    tBTM_PM_MCB *VAR_14;

    if ( (VAR_13 = FUNC_0(VAR_9)) == VAR_7) {
        return (VAR_6);
    }

    if (VAR_3 == VAR_8.pm_mode_db[VAR_13].state ||
            VAR_4 == VAR_8.pm_mode_db[VAR_13].state) {
        if (FUNC_1(VAR_8.acl_db[VAR_13].hci_handle, VAR_10,
                                      VAR_11, VAR_12)) {
            return VAR_5;
        } else {
            return VAR_2;
        }
    }
    VAR_14 = &VAR_8.pm_mode_db[VAR_13];
    VAR_14->max_lat = VAR_10;
    VAR_14->min_rmt_to = VAR_11;
    VAR_14->min_loc_to = VAR_12;
    return VAR_0;



}
