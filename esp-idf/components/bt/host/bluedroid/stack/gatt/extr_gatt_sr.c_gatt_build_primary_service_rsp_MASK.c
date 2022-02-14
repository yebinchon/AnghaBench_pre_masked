
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_17__ {scalar_t__ payload_size; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef int tGATT_STATUS ;
struct TYPE_18__ {scalar_t__ s_hdl; scalar_t__ type; int e_hdl; int p_db; scalar_t__ in_use; } ;
typedef TYPE_2__ tGATT_SR_REG ;
struct TYPE_19__ {TYPE_4__* p_last; TYPE_4__* p_last_primary; TYPE_4__* p_first; } ;
typedef TYPE_3__ tGATT_SRV_LIST_INFO ;
struct TYPE_20__ {struct TYPE_20__* p_next; int i_sreg; } ;
typedef TYPE_4__ tGATT_SRV_LIST_ELEM ;
struct TYPE_21__ {scalar_t__ len; } ;
typedef TYPE_5__ tBT_UUID ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_22__ {scalar_t__ offset; scalar_t__ len; } ;
struct TYPE_16__ {TYPE_3__ srv_list_info; } ;
typedef TYPE_6__ BT_HDR ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__**,TYPE_5__) ;
 TYPE_10__ VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_5__,TYPE_5__) ;
 TYPE_5__* FUNC_6 (int ) ;

__attribute__((used)) static tGATT_STATUS FUNC_7 (BT_HDR *VAR_7, tGATT_TCB *VAR_8,
        UINT8 VAR_9, UINT16 VAR_10,
        UINT16 VAR_11, UINT8 *VAR_12, tBT_UUID VAR_13)
{
    tGATT_STATUS VAR_14 = VAR_0;
    UINT8 VAR_15 = 4, *VAR_16 ;
    tGATT_SR_REG *VAR_17;
    tGATT_SRV_LIST_INFO *VAR_18 = &VAR_6.srv_list_info;
    tGATT_SRV_LIST_ELEM *VAR_19 = ((void*)0);
    tBT_UUID *VAR_20;

    FUNC_3(VAR_12);

    VAR_16 = (UINT8 *)(VAR_7 + 1) + VAR_5;

    VAR_19 = VAR_18->p_first;

    while (VAR_19) {
        VAR_17 = FUNC_0(VAR_19->i_sreg);

        if (VAR_17->in_use &&
                VAR_17->s_hdl >= VAR_10 &&
                VAR_17->s_hdl <= VAR_11 &&
                VAR_17->type == VAR_4) {
            if ((VAR_20 = FUNC_6 (VAR_17->p_db)) != ((void*)0)) {
                if (VAR_9 == VAR_2) {
                    VAR_15 = 4 + VAR_20->len;
                }


                if (VAR_7->offset == 0) {
                    *VAR_16 ++ = VAR_9 + 1;
                    VAR_7->len ++;
                    VAR_7->offset = VAR_15;

                    if (VAR_9 == VAR_2) {
                        *VAR_16 ++ = (UINT8)VAR_7->offset;
                        VAR_7->len ++;
                    }
                }

                if (VAR_7->len + VAR_7->offset <= VAR_8->payload_size &&
                        VAR_15 == VAR_7->offset) {
                    if (VAR_9 != VAR_1 ||
                            FUNC_5(VAR_13, *VAR_20)) {
                        FUNC_2(VAR_16, VAR_17->s_hdl);

                        if (VAR_18->p_last_primary == VAR_19 &&
                                VAR_18->p_last_primary == VAR_18->p_last) {
                            FUNC_1("Use 0xFFFF for the last primary attribute");
                            FUNC_2(VAR_16, 0xFFFF);
                        } else {
                            FUNC_2(VAR_16, VAR_17->e_hdl);
                        }

                        if (VAR_9 == VAR_2) {
                            FUNC_4(&VAR_16, *VAR_20);
                        }

                        VAR_14 = VAR_3;
                        VAR_7->len += VAR_7->offset;
                    }
                } else {
                    break;
                }
            }
        }
        VAR_19 = VAR_19->p_next;
    }
    VAR_7->offset = VAR_5;

    return VAR_14;
}
