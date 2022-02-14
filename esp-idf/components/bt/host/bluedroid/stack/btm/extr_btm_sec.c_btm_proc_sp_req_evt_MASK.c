
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_13__ {int* bd_addr; int* dev_class; scalar_t__ num_val; scalar_t__ just_works; int loc_auth_req; int rmt_auth_req; int rmt_io_caps; int loc_io_caps; scalar_t__ bd_name; } ;
struct TYPE_11__ {scalar_t__ passkey; } ;
struct TYPE_14__ {TYPE_4__ cfm_req; TYPE_2__ key_notif; } ;
typedef TYPE_5__ tBTM_SP_EVT_DATA ;
typedef int const tBTM_SP_EVT ;
struct TYPE_15__ {int rmt_auth_req; int hci_handle; int rmt_io_caps; scalar_t__ sec_bd_name; int dev_class; int bd_addr; } ;
typedef TYPE_6__ tBTM_SEC_DEV_REC ;
typedef int UINT8 ;
struct TYPE_12__ {scalar_t__ (* p_sp_callback ) (int const,TYPE_5__*) ;} ;
struct TYPE_10__ {int loc_auth_req; int loc_io_caps; } ;
struct TYPE_16__ {scalar_t__ pairing_state; int acl_disc_reason; TYPE_3__ api; TYPE_1__ devcb; int pairing_bda; } ;


 int FUNC_0 (char*,int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__,int*,int ) ;



 scalar_t__ VAR_10 ;
 int FUNC_3 (char*,scalar_t__,...) ;
 int FUNC_4 (char*,int,int,int const,int ) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int*,int*) ;
 int FUNC_6 (scalar_t__,int*) ;
 scalar_t__ VAR_15 ;
 TYPE_9__ VAR_16 ;
 TYPE_6__* FUNC_7 (int*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int*,scalar_t__) ;
 int FUNC_12 (int*) ;
 scalar_t__ FUNC_13 (int ,int*,int ) ;
 int FUNC_14 (int*,int ,int ) ;
 scalar_t__ FUNC_15 (int const,TYPE_5__*) ;

void FUNC_16 (tBTM_SP_EVT VAR_17, UINT8 *VAR_18)
{
    tBTM_STATUS VAR_19 = VAR_2;
    tBTM_SP_EVT_DATA VAR_20;
    UINT8 *VAR_21 = VAR_20.cfm_req.bd_addr;
    tBTM_SEC_DEV_REC *VAR_22;


    FUNC_5 (VAR_21, VAR_18);

    FUNC_4 ("btm_proc_sp_req_evt() BDA: %08x%04x event: 0x%x, State: %s\n",
                     (VAR_21[0] << 24) + (VAR_21[1] << 16) + (VAR_21[2] << 8) + VAR_21[3], (VAR_21[4] << 8) + VAR_21[5],
                     VAR_17, FUNC_8(VAR_16.pairing_state));

    if ( ((VAR_22 = FUNC_7 (VAR_21)) != ((void*)0))
            && (VAR_16.pairing_state != VAR_6)
            && (FUNC_13 (VAR_16.pairing_bda, VAR_21, VAR_0) == 0) ) {
        FUNC_14 (VAR_20.cfm_req.bd_addr, VAR_22->bd_addr, VAR_0);
        FUNC_14 (VAR_20.cfm_req.dev_class, VAR_22->dev_class, VAR_11);

        FUNC_0 ((char *)VAR_20.cfm_req.bd_name, sizeof(VAR_20.cfm_req.bd_name), (char *)VAR_22->sec_bd_name, VAR_4);

        switch (VAR_17) {
        case 130:

            FUNC_9 (VAR_9);


            FUNC_6 (VAR_20.cfm_req.num_val, VAR_18);

            VAR_20.cfm_req.just_works = VAR_15;



            if ( (VAR_22->rmt_io_caps == VAR_3)
                    && (VAR_16.devcb.loc_io_caps == VAR_3)
                    && ((VAR_22->rmt_auth_req & VAR_1) || (VAR_16.devcb.loc_auth_req & VAR_1)) ) {


                VAR_20.cfm_req.just_works = VAR_12;
            }

            FUNC_3 ("btm_proc_sp_req_evt()  just_works:%d, io loc:%d, rmt:%d, auth loc:%d, rmt:%d\n",
                             VAR_20.cfm_req.just_works, VAR_16.devcb.loc_io_caps, VAR_22->rmt_io_caps,
                             VAR_16.devcb.loc_auth_req, VAR_22->rmt_auth_req);

            VAR_20.cfm_req.loc_auth_req = VAR_16.devcb.loc_auth_req;
            VAR_20.cfm_req.rmt_auth_req = VAR_22->rmt_auth_req;
            VAR_20.cfm_req.loc_io_caps = VAR_16.devcb.loc_io_caps;
            VAR_20.cfm_req.rmt_io_caps = VAR_22->rmt_io_caps;
            break;

        case 129:

            FUNC_6 (VAR_20.key_notif.passkey, VAR_18);

            FUNC_3 ("BTM_SP_KEY_NOTIF_EVT:  passkey: %u\n", VAR_20.key_notif.passkey);

            FUNC_9 (VAR_8);
            break;


        case 128:

            FUNC_9 (VAR_7);
            break;

        }

        if (VAR_16.api.p_sp_callback) {
            VAR_19 = (*VAR_16.api.p_sp_callback) (VAR_17, (tBTM_SP_EVT_DATA *)&VAR_20);
            if (VAR_19 != VAR_5) {
                return;
            }

        } else if ( (VAR_17 == 130) && (VAR_20.cfm_req.just_works == VAR_15) ) {

            VAR_19 = VAR_10;
        }

        if (VAR_17 == 130) {
            FUNC_3 ("calling BTM_ConfirmReqReply with status: %d\n", VAR_19);
            FUNC_1 (VAR_19, VAR_21);
        }

        else if (VAR_17 == 128) {
            FUNC_2(VAR_19, VAR_21, 0);
        }

        return;
    }

    VAR_16.acl_disc_reason = VAR_14;

    if (130 == VAR_17) {
        FUNC_11 (VAR_21, VAR_12);
    } else if (129 == VAR_17) {






        if (((void*)0) != (VAR_22 = FUNC_7 (VAR_21)) ) {
            FUNC_10 (VAR_22->hci_handle, VAR_13);
        }
    }


    else {
        FUNC_12(VAR_21);
    }

}
