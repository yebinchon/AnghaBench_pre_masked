
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int* dev_class; TYPE_3__* p_cur_service; int sec_bd_name; int is_originator; int trusted_mask; int sm4; } ;
typedef TYPE_4__ tBTM_SEC_DEV_REC ;
struct TYPE_11__ {int (* p_pin_callback ) (int*,int*,int ,int) ;} ;
struct TYPE_15__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_10__ {scalar_t__ pin_type; int pin_code_len; TYPE_6__ pin_code; } ;
struct TYPE_14__ {scalar_t__ pairing_state; int* pairing_bda; int pin_code_len_saved; int* connecting_bda; int* connecting_dc; scalar_t__ pin_code_len; TYPE_2__ api; int pairing_flags; scalar_t__ pairing_disabled; TYPE_6__ pin_code; TYPE_1__ cfg; } ;
typedef TYPE_5__ tBTM_CB ;
typedef int UINT8 ;
struct TYPE_12__ {int security_flags; } ;
typedef TYPE_6__ PIN_CODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,scalar_t__,...) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_5__ VAR_15 ;
 TYPE_4__* FUNC_3 (int*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*,int,TYPE_6__) ;
 scalar_t__ FUNC_8 (int*,int*,int ) ;
 int FUNC_9 (int*,int*,int ) ;
 int FUNC_10 (int*,int*,int ,int) ;

void FUNC_11 (UINT8 *VAR_16)
{
    tBTM_SEC_DEV_REC *VAR_17;
    tBTM_CB *VAR_18 = &VAR_15;






    FUNC_1 ("btm_sec_pin_code_request()  State: %s, BDA:%04x%08x\n",
                     FUNC_4(VAR_15.pairing_state),
                     (VAR_16[0] << 8) + VAR_16[1], (VAR_16[2] << 24) + (VAR_16[3] << 16) + (VAR_16[4] << 8) + VAR_16[5] );

    if (VAR_15.pairing_state != VAR_6) {
        if ( (FUNC_8 (VAR_16, VAR_15.pairing_bda, VAR_0) == 0) &&
                (VAR_15.pairing_state == VAR_7) ) {


            if (! VAR_15.pin_code_len_saved) {
                FUNC_6 (VAR_16);
                return;
            } else {
                FUNC_7 (VAR_16, VAR_15.pin_code_len_saved, VAR_18->pin_code);
                return;
            }
        } else if ((VAR_15.pairing_state != VAR_9)
                   || FUNC_8 (VAR_16, VAR_15.pairing_bda, VAR_0) != 0) {

            FUNC_2 ("btm_sec_pin_code_request() rejected - state: %s\n",
                               FUNC_4(VAR_15.pairing_state));
            FUNC_6 (VAR_16);

            return;
        }
    }

    VAR_17 = FUNC_3 (VAR_16);

    VAR_17->sm4 = VAR_11;

    if (VAR_15.pairing_state == VAR_6) {
        FUNC_9 (VAR_15.pairing_bda, VAR_16, VAR_0);

        VAR_15.pairing_flags = VAR_4;

        FUNC_0(VAR_17->trusted_mask);
    }

    if (!VAR_18->pairing_disabled && (VAR_18->cfg.pin_type == VAR_14)) {
        FUNC_1 ("btm_sec_pin_code_request fixed pin replying\n");
        FUNC_5 (VAR_7);
        FUNC_7 (VAR_16, VAR_18->cfg.pin_code_len, VAR_18->cfg.pin_code);
        return;
    }


    if ( (!FUNC_8 (VAR_16, VAR_18->connecting_bda, VAR_0))
            && (VAR_18->connecting_dc[0] || VAR_18->connecting_dc[1] || VAR_18->connecting_dc[2]) ) {
        FUNC_9 (VAR_17->dev_class, VAR_18->connecting_dc, VAR_12);
    }


    if (VAR_15.pin_code_len != 0) {
        FUNC_1 ("btm_sec_pin_code_request bonding sending reply\n");
        FUNC_7 (VAR_16, VAR_15.pin_code_len, VAR_18->pin_code);






        VAR_15.pin_code_len = 0;





        FUNC_5 (VAR_7);
    }



    else if (VAR_18->pairing_disabled
             || (VAR_18->api.p_pin_callback == ((void*)0))




             || (!VAR_17->is_originator
                 && ((VAR_17->dev_class[1] & VAR_1) == VAR_2)
                 && (VAR_17->dev_class[2] & VAR_3)) ) {
        FUNC_2("btm_sec_pin_code_request(): Pairing disabled:%d; PIN callback:%p, Dev Rec:%p!\n",
                          VAR_18->pairing_disabled, VAR_18->api.p_pin_callback, VAR_17);

        FUNC_6 (VAR_16);
    }

    else {
        VAR_15.pin_code_len_saved = 0;
        FUNC_5 (VAR_8);

        FUNC_9 (VAR_18->connecting_bda, VAR_16, VAR_0);
        FUNC_9 (VAR_18->connecting_dc, VAR_17->dev_class, VAR_12);

        FUNC_1 ("btm_sec_pin_code_request going for callback\n");
        VAR_15.pairing_flags |= VAR_5;
        if (VAR_18->api.p_pin_callback) {
            (*VAR_18->api.p_pin_callback) (VAR_16, VAR_17->dev_class, VAR_17->sec_bd_name,
                                         (VAR_17->p_cur_service == ((void*)0)) ? VAR_13
                                         : (VAR_17->p_cur_service->security_flags
                                            & VAR_10));
        }
    }
    return;
}
