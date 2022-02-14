
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tSMP_STATUS ;
typedef int tSMP_ENC ;
struct TYPE_6__ {int tk; } ;
typedef TYPE_1__ tSMP_CB ;
typedef int UINT8 ;
typedef scalar_t__ BT_OCTET16 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int ,int *) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;

void FUNC_9 (tSMP_CB *VAR_3, BT_OCTET16 VAR_4, BD_ADDR VAR_5)
{
    FUNC_3(VAR_5);

    BT_OCTET16 VAR_6;
    tSMP_ENC VAR_7;
    tSMP_STATUS VAR_8 = VAR_2;

    FUNC_1 ("smp_calculate_comfirm \n");

    FUNC_6(VAR_3, VAR_6);


    FUNC_8(VAR_6, VAR_4);

    FUNC_5 ((UINT8 *)VAR_6, (const UINT8 *)"P1' = r XOR p1", 16);


    if (!FUNC_0(VAR_3->tk, VAR_0, VAR_6, VAR_0, &VAR_7)) {
        FUNC_2("smp_generate_csrk failed");
        FUNC_7(VAR_3, VAR_1, &VAR_8);
    } else {
        FUNC_4(VAR_3, &VAR_7);
    }
}
