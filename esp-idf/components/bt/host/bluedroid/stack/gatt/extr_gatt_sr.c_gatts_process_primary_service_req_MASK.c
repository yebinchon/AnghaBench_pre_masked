
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ payload_size; } ;
typedef TYPE_3__ tGATT_TCB ;
struct TYPE_16__ {int uuid16; } ;
struct TYPE_15__ {int member_0; } ;
struct TYPE_18__ {TYPE_2__ uu; TYPE_1__ member_1; int member_0; } ;
typedef TYPE_4__ tBT_UUID ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
typedef int BT_HDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_3__*,scalar_t__,int ,int ,scalar_t__*,TYPE_4__) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,scalar_t__**) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_4__,TYPE_4__) ;
 scalar_t__ FUNC_7 (scalar_t__,int *,scalar_t__**,TYPE_4__*,int *,int *) ;
 int FUNC_8 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

void FUNC_11(tGATT_TCB *VAR_11, UINT8 VAR_12, UINT16 VAR_13, UINT8 *VAR_14)
{
    UINT8 VAR_15 = VAR_1;
    UINT16 VAR_16 = 0, VAR_17 = 0;
    tBT_UUID VAR_18, VAR_19, VAR_20 = {VAR_10, {VAR_8}};
    BT_HDR *VAR_21 = ((void*)0);
    UINT16 VAR_22 = (UINT16)(sizeof(BT_HDR) + VAR_11->payload_size + VAR_9);

    FUNC_8 (&VAR_19, 0, sizeof(tBT_UUID));
    VAR_15 = FUNC_7(VAR_12, &VAR_13, &VAR_14, &VAR_18, &VAR_16, &VAR_17);

    if (VAR_15 == VAR_6) {
        if (FUNC_6(VAR_18, VAR_20)) {
            if (VAR_12 == VAR_4) {
                if (FUNC_4(&VAR_19, VAR_13, &VAR_14) == VAR_0) {
                    VAR_15 = VAR_1;
                }
            }

            if (VAR_15 == VAR_6) {
                if ((VAR_21 = (BT_HDR *)FUNC_9(VAR_22)) == ((void*)0)) {
                    FUNC_1("gatts_process_primary_service_req failed. no resources.");
                    VAR_15 = VAR_3;
                } else {
                    VAR_15 = FUNC_3 (VAR_21, VAR_11, VAR_12, VAR_16, VAR_17, VAR_14, VAR_19);
                }
            }
        } else {
            if (VAR_12 == VAR_5) {
                VAR_15 = VAR_7;
                FUNC_0("unexpected ReadByGrpType Group: 0x%04x", VAR_18.uu.uuid16);
            } else {

                VAR_15 = VAR_2;
                FUNC_0("unexpected ReadByTypeValue type: 0x%04x", VAR_18.uu.uuid16);
            }
        }
    }

    if (VAR_15 != VAR_6) {
        if (VAR_21) {
            FUNC_10(VAR_21);
        }
        FUNC_5 (VAR_11, VAR_15, VAR_12, VAR_16, VAR_0);
    } else {
        FUNC_2(VAR_11, VAR_21);
    }

}
