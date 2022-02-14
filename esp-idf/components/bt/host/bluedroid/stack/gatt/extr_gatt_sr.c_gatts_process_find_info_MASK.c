
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int payload_size; } ;
typedef TYPE_1__ tGATT_TCB ;
struct TYPE_16__ {scalar_t__ s_hdl; scalar_t__ e_hdl; scalar_t__ in_use; } ;
typedef TYPE_2__ tGATT_SR_REG ;
struct TYPE_17__ {TYPE_4__* p_first; } ;
typedef TYPE_3__ tGATT_SRV_LIST_INFO ;
struct TYPE_18__ {struct TYPE_18__* p_next; int i_sreg; } ;
typedef TYPE_4__ tGATT_SRV_LIST_ELEM ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_20__ {TYPE_3__ srv_list_info; } ;
struct TYPE_19__ {int len; int offset; } ;
typedef TYPE_5__ BT_HDR ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_5__*,scalar_t__*,scalar_t__,scalar_t__) ;
 TYPE_9__ VAR_6 ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__*,scalar_t__**,int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_7(tGATT_TCB *VAR_7, UINT8 VAR_8, UINT16 VAR_9, UINT8 *VAR_10)
{
    UINT8 VAR_11 = VAR_1, *VAR_12;
    UINT16 VAR_13 = 0, VAR_14 = 0, VAR_15;
    BT_HDR *VAR_16 = ((void*)0);
    tGATT_SR_REG *VAR_17;
    tGATT_SRV_LIST_INFO *VAR_18 = &VAR_6.srv_list_info;
    tGATT_SRV_LIST_ELEM *VAR_19 = ((void*)0);

    VAR_11 = FUNC_4(VAR_8, &VAR_9, &VAR_10, ((void*)0), &VAR_13, &VAR_14);

    if (VAR_11 == VAR_4) {
        VAR_15 = (UINT16)(sizeof(BT_HDR) + VAR_7->payload_size + VAR_5);

        if ((VAR_16 = (BT_HDR *)FUNC_5(VAR_15)) == ((void*)0)) {
            VAR_11 = VAR_3;
        } else {
            VAR_11 = VAR_2;

            VAR_12 = (UINT8 *)(VAR_16 + 1) + VAR_5;
            *VAR_12 ++ = VAR_8 + 1;
            VAR_16->len = 2;

            VAR_15 = VAR_7->payload_size - 2;

            VAR_19 = VAR_18->p_first;

            while (VAR_19) {
                VAR_17 = FUNC_0(VAR_19->i_sreg);

                if (VAR_17->in_use &&
                        !(VAR_17->s_hdl > VAR_14 ||
                          VAR_17->e_hdl < VAR_13)) {
                    VAR_11 = FUNC_2(VAR_17, VAR_16, &VAR_15, VAR_13, VAR_14);
                    if (VAR_11 == VAR_3) {
                        VAR_11 = VAR_4;
                        break;
                    }
                }
                VAR_19 = VAR_19->p_next;
            }
            *VAR_12 = (UINT8)VAR_16->offset;

            VAR_16->offset = VAR_5;
        }
    }

    if (VAR_11 != VAR_4) {
        if (VAR_16) {
            FUNC_6(VAR_16);
        }
        FUNC_3 (VAR_7, VAR_11, VAR_8, VAR_13, VAR_0);
    } else {
        FUNC_1(VAR_7, VAR_16);
    }

}
