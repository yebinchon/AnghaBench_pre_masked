
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ role; int addr_type; int local_bda; int pairing_bda; } ;
typedef TYPE_1__ tSMP_CB ;
typedef int tBLE_ADDR_TYPE ;
typedef int UINT8 ;
typedef scalar_t__ BT_OCTET16 ;
typedef int BD_ADDR ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*,int **,int ) ;
 int FUNC_6 (TYPE_1__*,int **,int ) ;
 int FUNC_7 (int *,int const*,int) ;

void FUNC_8( tSMP_CB *VAR_3, BT_OCTET16 VAR_4)
{
    UINT8 *VAR_5 = (UINT8 *)VAR_4;
    tBLE_ADDR_TYPE VAR_6 = 0;
    BD_ADDR VAR_7;

    FUNC_2 ("smp_gen_p1_4_confirm\n");

    if (!FUNC_1(VAR_3->pairing_bda, VAR_7, &VAR_6)) {
        FUNC_3("can not generate confirm for unknown device\n");
        return;
    }

    FUNC_0( VAR_3->pairing_bda, VAR_3->local_bda, &VAR_3->addr_type);

    if (VAR_3->role == VAR_0) {

        FUNC_4(VAR_5, VAR_3->addr_type);

        FUNC_4(VAR_5, VAR_6);

        FUNC_5(VAR_3, &VAR_5, VAR_1);

        FUNC_6(VAR_3, &VAR_5, VAR_2);
    } else {

        FUNC_4(VAR_5, VAR_6);

        FUNC_4(VAR_5, VAR_3->addr_type);

        FUNC_6(VAR_3, &VAR_5, VAR_1);

        FUNC_5(VAR_3, &VAR_5, VAR_2);
    }

    FUNC_2("p1 = pres || preq || rat' || iat'\n");
    FUNC_7 ((UINT8 *)VAR_4, (const UINT8 *)"P1", 16);

}
