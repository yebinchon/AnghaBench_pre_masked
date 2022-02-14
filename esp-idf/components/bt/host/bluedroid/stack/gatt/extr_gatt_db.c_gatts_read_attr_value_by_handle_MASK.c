
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tGATT_TCB ;
struct TYPE_5__ {scalar_t__ p_attr_list; } ;
typedef TYPE_1__ tGATT_SVC_DB ;
typedef scalar_t__ tGATT_STATUS ;
typedef int tGATT_SEC_FLAG ;
struct TYPE_6__ {scalar_t__ handle; scalar_t__ p_next; } ;
typedef TYPE_2__ tGATT_ATTR16 ;
typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
typedef scalar_t__ UINT16 ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__**,int,scalar_t__,scalar_t__*,int ,scalar_t__) ;

tGATT_STATUS FUNC_2(tGATT_TCB *VAR_4,
        tGATT_SVC_DB *VAR_5,
        UINT8 VAR_6,
        UINT16 VAR_7, UINT16 VAR_8,
        UINT8 *VAR_9, UINT16 *VAR_10,
        UINT16 VAR_11,
        tGATT_SEC_FLAG VAR_12,
        UINT8 VAR_13,
        UINT32 VAR_14)
{
    tGATT_STATUS VAR_15 = VAR_0;
    tGATT_ATTR16 *VAR_16;
    UINT8 *VAR_17 = VAR_9;

    if (VAR_5 && VAR_5->p_attr_list) {
        VAR_16 = (tGATT_ATTR16 *)VAR_5->p_attr_list;

        while (VAR_16 && VAR_7 >= VAR_16->handle) {
            if (VAR_16->handle == VAR_7) {
                VAR_15 = FUNC_1 (VAR_16, VAR_8, &VAR_17,
                                          (BOOLEAN)(VAR_6 == VAR_2),
                                          VAR_11, VAR_10, VAR_12, VAR_13);

                if ((VAR_15 == VAR_1) || (VAR_15 == VAR_3)) {
                    BOOLEAN VAR_18 = (VAR_15 != VAR_3);
                    VAR_15 = FUNC_0(VAR_4, VAR_6, VAR_16->handle, VAR_8, VAR_14, VAR_18);
                }
                break;
            }
            VAR_16 = (tGATT_ATTR16 *)VAR_16->p_next;
        }
    }


    return VAR_15;
}
