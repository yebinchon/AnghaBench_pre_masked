
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int sec_flags; scalar_t__ hci_handle; scalar_t__ last_author_service_id; int sec_state; scalar_t__ is_originator; int sec_bd_name; int dev_class; int bd_addr; TYPE_1__* p_cur_service; } ;
typedef TYPE_3__ tBTM_SEC_DEV_REC ;
typedef scalar_t__ UINT8 ;
struct TYPE_8__ {scalar_t__ (* p_authorize_callback ) (int ,int ,int ,scalar_t__*,scalar_t__,scalar_t__) ;} ;
struct TYPE_10__ {TYPE_2__ api; } ;
struct TYPE_7__ {scalar_t__ service_id; scalar_t__* term_service_name; scalar_t__* orig_service_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,scalar_t__) ;
 TYPE_6__ VAR_9 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,scalar_t__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static UINT8 FUNC_3 (tBTM_SEC_DEV_REC *VAR_10)
{
    UINT8 VAR_11;
    UINT8 *VAR_12 = ((void*)0);
    UINT8 VAR_13;

    if ((VAR_10->sec_flags & VAR_4)
            || (VAR_10->hci_handle == VAR_3)) {
        if (!VAR_9.api.p_authorize_callback) {
            return (VAR_1);
        }

        if (VAR_10->p_cur_service) {







            VAR_13 = VAR_10->p_cur_service->service_id;
        } else {
            VAR_13 = 0;
        }


        if (VAR_10->last_author_service_id == VAR_5
                || VAR_10->last_author_service_id != VAR_13) {
            VAR_10->sec_state = VAR_6;
            VAR_11 = (*VAR_9.api.p_authorize_callback) (VAR_10->bd_addr,
                     VAR_10->dev_class,
                     VAR_10->sec_bd_name,
                     VAR_12,
                     VAR_13,
                     VAR_10->is_originator);
        }

        else {
            FUNC_0 ("btm_sec_start_authorization: (Ignoring extra Authorization prompt for service %d)\n", VAR_13);
            return (VAR_8);
        }

        if (VAR_11 == VAR_8) {
            VAR_10->sec_flags |= VAR_2;


            if (!VAR_10->is_originator) {
                VAR_10->last_author_service_id = VAR_13;
            }

            VAR_10->sec_state = VAR_7;
        }
        return (VAR_11);
    }
    FUNC_1 (VAR_10);
    return (VAR_0);
}
