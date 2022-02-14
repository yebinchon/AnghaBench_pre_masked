
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ len; int value; int offset; int handle; int member_0; } ;
typedef TYPE_1__ tGATT_VALUE ;
typedef int tGATT_TCB ;
struct TYPE_10__ {scalar_t__ op_subtype; int status; } ;
typedef TYPE_2__ tGATT_CLCB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int ,int *,scalar_t__) ;

void FUNC_8 (tGATT_TCB *VAR_5, tGATT_CLCB *VAR_6, UINT8 VAR_7,
                                  UINT16 VAR_8, UINT8 *VAR_9)
{
    tGATT_VALUE VAR_10 = {0};
    UINT8 *VAR_11 = VAR_9;

    FUNC_0("value resp op_code = %s len = %d", FUNC_4(VAR_7), VAR_8);

    if (VAR_8 < VAR_1) {
        FUNC_1("illegal prepare write response length, discard");
        FUNC_5(VAR_6, VAR_0, &VAR_10);
        return;
    }

    FUNC_2 (VAR_10.handle, VAR_11);
    FUNC_2 (VAR_10.offset, VAR_11);

    VAR_10.len = VAR_8 - 4;

    FUNC_7 (VAR_10.value, VAR_11, VAR_10.len);

    if (VAR_6->op_subtype == VAR_4) {
        VAR_6->status = VAR_2;



        FUNC_5(VAR_6, VAR_6->status, &VAR_10);
    } else if (VAR_6->op_subtype == VAR_3 ) {
        if (!FUNC_3(VAR_5, VAR_6, &VAR_10)) {
            FUNC_6(VAR_5, VAR_6);
        }
    }

}
