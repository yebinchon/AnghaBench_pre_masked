
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ handle; } ;
typedef TYPE_1__ tGATT_VALUE ;
typedef int tGATT_TCB ;
struct TYPE_8__ {scalar_t__ operation; scalar_t__ op_subtype; scalar_t__ p_attr_buf; scalar_t__ first_read_blob_after_read; scalar_t__ status; } ;
typedef TYPE_2__ tGATT_CLCB ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,void*) ;
 int FUNC_5 (int *,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,TYPE_2__*,int ) ;

void FUNC_7(tGATT_TCB *VAR_12, tGATT_CLCB *VAR_13, UINT8 VAR_14,
                            UINT16 VAR_15, UINT8 *VAR_16)
{
    UINT8 VAR_17, VAR_18, * VAR_19 = VAR_16;
    UINT16 VAR_20;
    tGATT_VALUE *VAR_21 = (tGATT_VALUE *)VAR_13->p_attr_buf;

    FUNC_3(VAR_14);
    FUNC_3(VAR_15);

    FUNC_0("gatt_process_error_rsp ");
    FUNC_2(VAR_17, VAR_19);
    FUNC_1(VAR_20, VAR_19);
    FUNC_2(VAR_18, VAR_19);

    if (VAR_13->operation == VAR_0) {
        FUNC_5(VAR_12, VAR_13, VAR_17, VAR_20, VAR_18);
    } else {
        if ( (VAR_13->operation == VAR_2) &&
                (VAR_13->op_subtype == VAR_11) &&
                (VAR_17 == VAR_8) &&
                (VAR_21) &&
                (VAR_20 == VAR_21->handle) ) {
            if (VAR_18 == VAR_10){
               VAR_18 = VAR_3;
            }
            VAR_13->status = VAR_18;
            FUNC_6(VAR_12, VAR_13, VAR_5);
        } else if ((VAR_13->operation == VAR_1) &&
                   ((VAR_13->op_subtype == VAR_7) ||
                    (VAR_13->op_subtype == VAR_6)) &&
                   (VAR_17 == VAR_9) &&
                   VAR_13->first_read_blob_after_read &&
                   (VAR_18 == VAR_4)) {
            FUNC_4(VAR_13, VAR_10, (void *)VAR_13->p_attr_buf);
        } else {
            FUNC_4(VAR_13, VAR_18, ((void*)0));
        }
    }
}
