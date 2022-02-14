
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pending_cl_req; scalar_t__ next_slot_inq; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef scalar_t__ tGATT_STATUS ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;

tGATT_STATUS FUNC_3(tGATT_TCB *VAR_10, UINT16 VAR_11, UINT8 VAR_12, BT_HDR *VAR_13)
{
    tGATT_STATUS VAR_14 = VAR_8;

    if (VAR_10 != ((void*)0)) {
        VAR_12 &= ~VAR_1;


        if (VAR_10->pending_cl_req == VAR_10->next_slot_inq ||
                VAR_12 == VAR_6) {
            VAR_14 = FUNC_0(VAR_10, VAR_13);
            if (VAR_14 == VAR_4 || VAR_14 == VAR_8) {

                if (VAR_12 != VAR_6 && VAR_12 != VAR_3) {
                    FUNC_2 (VAR_11);
                    FUNC_1(VAR_10, VAR_11, VAR_0, VAR_12, ((void*)0));
                }
            } else {
                VAR_14 = VAR_7;
            }
        } else {
            VAR_14 = VAR_2;
            FUNC_1(VAR_10, VAR_11, VAR_9, VAR_12, VAR_13);
        }
    } else {
        VAR_14 = VAR_5;
    }

    return VAR_14;
}
