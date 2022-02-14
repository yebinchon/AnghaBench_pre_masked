
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ role; int local_bda; int pairing_bda; } ;
typedef TYPE_1__ tSMP_CB ;
typedef int tBLE_ADDR_TYPE ;
typedef int UINT8 ;
typedef scalar_t__ BT_OCTET16 ;
typedef int BD_ADDR ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (scalar_t__,int const*,int) ;

void FUNC_6( tSMP_CB *VAR_1, BT_OCTET16 VAR_2)
{
    UINT8 *VAR_3 = (UINT8 *)VAR_2;
    BD_ADDR VAR_4;
    tBLE_ADDR_TYPE VAR_5 = 0;
    FUNC_2 ("smp_gen_p2_4_confirm\n");
    if (!FUNC_1(VAR_1->pairing_bda, VAR_4, &VAR_5)) {
        FUNC_3("can not generate confirm p2 for unknown device\n");
        return;
    }

    FUNC_2 ("smp_gen_p2_4_confirm\n");

    FUNC_4(VAR_3, 0, sizeof(BT_OCTET16));

    if (VAR_1->role == VAR_0) {

        FUNC_0(VAR_3, VAR_4);

        FUNC_0(VAR_3, VAR_1->local_bda);
    } else {

        FUNC_0(VAR_3, VAR_1->local_bda);

        FUNC_0(VAR_3, VAR_4);
    }

    FUNC_2("p2 = padding || ia || ra");
    FUNC_5(VAR_2, (const UINT8 *)"p2", 16);

}
