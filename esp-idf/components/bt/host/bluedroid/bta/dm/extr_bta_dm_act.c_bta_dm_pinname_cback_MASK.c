
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ status; int length; int remote_bd_name; } ;
typedef TYPE_4__ tBTM_REMOTE_DEV_NAME ;
typedef scalar_t__ tBTA_DM_SEC_EVT ;
struct TYPE_10__ {int passkey; } ;
struct TYPE_9__ {scalar_t__* bd_name; int dev_class; int bd_addr; } ;
struct TYPE_8__ {int just_works; scalar_t__* bd_name; int dev_class; int bd_addr; } ;
struct TYPE_12__ {TYPE_3__ key_notif; TYPE_2__ pin_req; TYPE_1__ cfm_req; } ;
typedef TYPE_5__ tBTA_DM_SEC ;
typedef int UINT32 ;
struct TYPE_13__ {scalar_t__ pin_evt; int (* p_sec_cback ) (scalar_t__,TYPE_5__*) ;int num_val; int pin_dev_class; int pin_bd_addr; int just_works; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 TYPE_7__ VAR_3 ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (scalar_t__,TYPE_5__*) ;

__attribute__((used)) static void FUNC_4 (void *VAR_4)
{
    tBTM_REMOTE_DEV_NAME *VAR_5 = (tBTM_REMOTE_DEV_NAME *)VAR_4;
    tBTA_DM_SEC VAR_6;
    UINT32 VAR_7;
    tBTA_DM_SEC_EVT VAR_8 = VAR_3.pin_evt;

    if (VAR_1 == VAR_8) {

        FUNC_1(VAR_6.cfm_req.bd_addr, VAR_3.pin_bd_addr);
        FUNC_0(VAR_6.cfm_req.dev_class, VAR_3.pin_dev_class);

        if (VAR_5 && VAR_5->status == VAR_2) {
            VAR_7 = (VAR_5->length < (VAR_0 - 1))
                            ? VAR_5->length : (VAR_0 - 1);
            FUNC_2(VAR_6.cfm_req.bd_name, VAR_5->remote_bd_name, VAR_7);
            VAR_6.pin_req.bd_name[VAR_0 - 1] = 0;
        } else {
            VAR_6.cfm_req.bd_name[0] = 0;
        }

        VAR_6.key_notif.passkey = VAR_3.num_val;


        VAR_6.cfm_req.just_works = VAR_3.just_works;
    } else {

        FUNC_1(VAR_6.pin_req.bd_addr, VAR_3.pin_bd_addr);
        FUNC_0(VAR_6.pin_req.dev_class, VAR_3.pin_dev_class);

        if (VAR_5 && VAR_5->status == VAR_2) {
            VAR_7 = (VAR_5->length < (VAR_0 - 1))
                            ? VAR_5->length : (VAR_0 - 1);
            FUNC_2(VAR_6.pin_req.bd_name, VAR_5->remote_bd_name, VAR_7);
            VAR_6.pin_req.bd_name[VAR_0 - 1] = 0;
        } else {
            VAR_6.pin_req.bd_name[0] = 0;
        }

        VAR_8 = VAR_3.pin_evt;
        VAR_6.key_notif.passkey = VAR_3.num_val;
    }

    if ( VAR_3.p_sec_cback ) {
        VAR_3.p_sec_cback(VAR_8, &VAR_6);
    }
}
