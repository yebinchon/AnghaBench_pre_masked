
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tGATT_TCB ;
typedef scalar_t__ tGATT_STATUS ;
struct TYPE_7__ {int s_hdl; int e_hdl; TYPE_1__* p_db; scalar_t__ in_use; } ;
typedef TYPE_2__ tGATT_SR_REG ;
struct TYPE_8__ {int handle; scalar_t__ p_next; } ;
typedef TYPE_3__ tGATT_ATTR16 ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_9__ {int handle; scalar_t__ req_op_code; scalar_t__ err_status; scalar_t__ enable_err_rsp; TYPE_2__* sr_reg; } ;
struct TYPE_6__ {scalar_t__ p_attr_list; } ;


 int VAR_0 ;

 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;





 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,scalar_t__*) ;
 int FUNC_4 (int *,scalar_t__,int,scalar_t__,int,scalar_t__*) ;
 TYPE_5__ VAR_5 ;
 int FUNC_5 (int *,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_6 (int *,TYPE_2__*,scalar_t__,int,int,scalar_t__*) ;
 int FUNC_7 (int *,scalar_t__,int,scalar_t__,int,scalar_t__*) ;

void FUNC_8 (tGATT_TCB *VAR_6, UINT8 VAR_7,
                                  UINT16 VAR_8, UINT8 *VAR_9)
{
    UINT16 VAR_10 = 0;
    UINT8 *VAR_11 = VAR_9, VAR_12;
    tGATT_SR_REG *VAR_13 = VAR_5.sr_reg;
    tGATT_STATUS VAR_14 = VAR_1;
    tGATT_ATTR16 *VAR_15;

    if (VAR_8 < 2) {
        FUNC_2("Illegal PDU length, discard request\n");
        VAR_14 = VAR_2;
    } else {
        FUNC_3(VAR_10, VAR_11);
        VAR_8 -= 2;
    }


    VAR_5.handle = VAR_10;
    if (VAR_5.enable_err_rsp && VAR_5.req_op_code == VAR_7) {
        FUNC_1("Conformance tst: forced err rsp: error status=%d\n", VAR_5.err_status);

        FUNC_5 (VAR_6, VAR_5.err_status, VAR_5.req_op_code, VAR_10, VAR_0);

        return;
    }


    if (FUNC_0(VAR_10)) {
        for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12 ++, VAR_13 ++) {
            if (VAR_13->in_use && VAR_13->s_hdl <= VAR_10 && VAR_13->e_hdl >= VAR_10) {
                VAR_15 = (tGATT_ATTR16 *)VAR_13->p_db->p_attr_list;

                while (VAR_15) {
                    if (VAR_15->handle == VAR_10) {
                        switch (VAR_7) {
                        case 131:
                        case 130:
                            FUNC_6(VAR_6, VAR_13, VAR_7, VAR_10, VAR_8, VAR_11);
                            break;

                        case 129:
                        case 133:
                        case 128:
                            FUNC_7(VAR_6, VAR_12, VAR_10, VAR_7, VAR_8, VAR_11);
                            break;

                        case 132:
                            FUNC_4 (VAR_6, VAR_12, VAR_10, VAR_7, VAR_8, VAR_11);
                        default:
                            break;
                        }
                        VAR_14 = VAR_4;
                        break;
                    }
                    VAR_15 = (tGATT_ATTR16 *)VAR_15->p_next;
                }
                break;
            }
        }
    }

    if (VAR_14 != VAR_4 && VAR_7 != 133 && VAR_7 != 128) {
        FUNC_5 (VAR_6, VAR_14, VAR_7, VAR_10, VAR_0);
    }
}
