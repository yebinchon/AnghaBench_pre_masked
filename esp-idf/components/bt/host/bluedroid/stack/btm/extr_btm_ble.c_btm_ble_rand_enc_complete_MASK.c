
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* tBTM_RAND_ENC_CB ) (TYPE_1__*) ;
struct TYPE_6__ {scalar_t__ status; int param_len; scalar_t__ opcode; int * param_buf; } ;
typedef TYPE_1__ tBTM_RAND_ENC ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5 (UINT8 *VAR_4, UINT16 VAR_5, tBTM_RAND_ENC_CB *VAR_6)
{
    tBTM_RAND_ENC VAR_7;
    UINT8 *VAR_8 = VAR_7.param_buf;

    FUNC_0 ("btm_ble_rand_enc_complete");

    FUNC_3(&VAR_7, 0, sizeof(tBTM_RAND_ENC));


    if (VAR_6 && VAR_4) {

        FUNC_1(VAR_7.status, VAR_4);

        if (VAR_7.status == VAR_3) {
            VAR_7.opcode = VAR_5;

            if (VAR_5 == VAR_2) {
                VAR_7.param_len = VAR_1;
            } else {
                VAR_7.param_len = VAR_0;
            }

            FUNC_2(VAR_8, VAR_4, VAR_7.param_len);
        }
        if (VAR_6) {
            (*VAR_6)(&VAR_7);
        }
    }
}
