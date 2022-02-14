
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int payload_size; int transport; int peer_bda; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef scalar_t__ tGATT_STATUS ;
struct TYPE_13__ {int p_db; } ;
typedef TYPE_2__ tGATT_SR_REG ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_14__ {int len; } ;
typedef TYPE_3__ BT_HDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 int FUNC_1 (int,scalar_t__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_6 (int ,int ,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ,scalar_t__,int,int,scalar_t__*,int*,int,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_10(tGATT_TCB *VAR_8, tGATT_SR_REG *VAR_9, UINT8 VAR_10,
                                   UINT16 VAR_11, UINT16 VAR_12, UINT8 *VAR_13)
{
    UINT16 VAR_14 = (UINT16)(sizeof(BT_HDR) + VAR_8->payload_size + VAR_7);
    tGATT_STATUS VAR_15;
    BT_HDR *VAR_16 = ((void*)0);
    UINT8 VAR_17, VAR_18, *VAR_19;
    UINT16 VAR_20 = 0, VAR_21 = 0;

    FUNC_2 (VAR_12);
    if ((VAR_16 = (BT_HDR *)FUNC_8(VAR_14)) == ((void*)0)) {
        FUNC_0("gatts_process_find_info failed. no resources.\n");

        VAR_15 = VAR_2;
    } else {
        if (VAR_10 == VAR_4) {
            FUNC_1(VAR_20, VAR_13);
        }

        VAR_19 = (UINT8 *)(VAR_16 + 1) + VAR_7;
        *VAR_19 ++ = VAR_10 + 1;
        VAR_16->len = 1;
        VAR_14 = VAR_8->payload_size - 1;

        FUNC_6(VAR_8->peer_bda,
                             VAR_8->transport,
                             &VAR_17,
                             &VAR_18);

        VAR_15 = FUNC_7(VAR_8,
                 VAR_9->p_db,
                 VAR_10,
                 VAR_11,
                 VAR_20,
                 VAR_19,
                 &VAR_21,
                 VAR_14,
                 VAR_17,
                 VAR_18,
                 0);

        VAR_16->len += VAR_21;
    }


    if (VAR_15 != VAR_6 && VAR_15 != VAR_3 && VAR_15 != VAR_5) {
        if (VAR_16) {
            FUNC_9(VAR_16);
        }


        if (VAR_15 != VAR_1) {
            FUNC_5 (VAR_8, VAR_15, VAR_10, VAR_11, VAR_0);
            FUNC_4(VAR_8);
        }
    } else if (VAR_15 == VAR_6 || VAR_15 == VAR_5) {
        FUNC_3(VAR_8, VAR_16);
        FUNC_4(VAR_8);
    } else {
        if (VAR_16) {
            FUNC_9(VAR_16);
        }
    }

}
