
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tBTM_SP_EVT_DATA ;
struct TYPE_8__ {int* bd_addr; int* dev_class; int status; } ;
typedef TYPE_2__ tBTM_SP_COMPLT ;
struct TYPE_9__ {scalar_t__ sec_state; int hci_handle; int dev_class; int bd_addr; int sec_flags; } ;
typedef TYPE_3__ tBTM_SEC_DEV_REC ;
typedef scalar_t__ UINT8 ;
struct TYPE_7__ {int (* p_sp_callback ) (int ,int *) ;} ;
struct TYPE_10__ {TYPE_1__ api; int pairing_tle; int pairing_bda; int pairing_state; } ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (int*,scalar_t__*) ;
 scalar_t__ VAR_16 ;
 TYPE_6__ VAR_17 ;
 TYPE_3__* FUNC_3 (int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int*,int ) ;
 int FUNC_10 (int*,int ,int ) ;
 int FUNC_11 (int ,int *) ;

void FUNC_12 (UINT8 *VAR_18)
{
    tBTM_SP_COMPLT VAR_19;
    tBTM_SEC_DEV_REC *VAR_20;
    UINT8 VAR_21;
    BOOLEAN VAR_22 = VAR_10;

    VAR_21 = *VAR_18++;
    FUNC_2 (VAR_19.bd_addr, VAR_18);

    if ((VAR_20 = FUNC_3 (VAR_19.bd_addr)) == ((void*)0)) {
        FUNC_0 ("btm_simple_pair_complete() with unknown BDA: %08x%04x\n",
                         (VAR_19.bd_addr[0] << 24) + (VAR_19.bd_addr[1] << 16) + (VAR_19.bd_addr[2] << 8) + VAR_19.bd_addr[3],
                         (VAR_19.bd_addr[4] << 8) + VAR_19.bd_addr[5]);
        return;
    }

    FUNC_1 ("btm_simple_pair_complete()  Pair State: %s  Status:%d  sec_state: %u\n",
                     FUNC_4(VAR_17.pairing_state), VAR_21, VAR_20->sec_state);

    VAR_19.status = VAR_1;
    if (VAR_21 == VAR_15) {
        VAR_19.status = VAR_6;
        VAR_20->sec_flags |= VAR_3;
    } else {
        if (VAR_21 == VAR_13) {

            FUNC_5 (VAR_2);


            FUNC_7 (&VAR_17.pairing_tle, VAR_7, VAR_8);
        } else if (FUNC_9 (VAR_17.pairing_bda, VAR_19.bd_addr, VAR_0) == 0) {

            FUNC_8 (&VAR_17.pairing_tle);

            if (VAR_20->sec_state != VAR_4) {

                VAR_22 = VAR_16;
            }
        } else {
            VAR_22 = VAR_16;
        }
    }


    FUNC_10 (VAR_19.bd_addr, VAR_20->bd_addr, VAR_0);
    FUNC_10 (VAR_19.dev_class, VAR_20->dev_class, VAR_9);

    if (VAR_17.api.p_sp_callback) {
        (*VAR_17.api.p_sp_callback) (VAR_5, (tBTM_SP_EVT_DATA *)&VAR_19);
    }

    if (VAR_22) {


        if ((VAR_21 != VAR_14) && (VAR_21 != VAR_12)) {
            FUNC_6 (VAR_20, VAR_11, VAR_20->hci_handle);
        }
    }
}
