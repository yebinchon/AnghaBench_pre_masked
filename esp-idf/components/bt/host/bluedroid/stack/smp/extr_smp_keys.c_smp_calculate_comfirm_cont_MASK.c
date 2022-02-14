
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int tSMP_STATUS ;
struct TYPE_12__ {int * param_buf; } ;
typedef TYPE_1__ tSMP_ENC ;
struct TYPE_13__ {int rand_enc_proc_state; int tk; } ;
typedef TYPE_2__ tSMP_CB ;
typedef int UINT8 ;
typedef scalar_t__ BT_OCTET16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,int ,TYPE_1__*) ;


 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,int ,int *) ;
 int FUNC_8 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_9(tSMP_CB *VAR_3, tSMP_ENC *VAR_4)
{
    BT_OCTET16 VAR_5;
    tSMP_ENC VAR_6;
    tSMP_STATUS VAR_7 = VAR_2;

    FUNC_1 ("smp_calculate_comfirm_cont \n");

    FUNC_1("Confirm step 1 p1' = e(k, r XOR p1)  Generated\n");
    FUNC_3 (VAR_4->param_buf, (const UINT8 *)"C1", 16);


    FUNC_4(VAR_3, VAR_5);


    FUNC_8(VAR_5, VAR_4->param_buf);
    FUNC_3 ((UINT8 *)VAR_5, (const UINT8 *)"p2' = C1 xor p2", 16);


    if (!FUNC_0(VAR_3->tk, VAR_0, VAR_5, VAR_0, &VAR_6)) {
        FUNC_2("smp_calculate_comfirm_cont failed\n");
        FUNC_7(VAR_3, VAR_1, &VAR_7);
    } else {
        FUNC_1("p_cb->rand_enc_proc_state=%d\n", VAR_3->rand_enc_proc_state);
        switch (VAR_3->rand_enc_proc_state) {
        case 128:
            FUNC_6(VAR_3, &VAR_6);
            break;

        case 129:
            FUNC_5(VAR_3, &VAR_6);
            break;
        }
    }
}
