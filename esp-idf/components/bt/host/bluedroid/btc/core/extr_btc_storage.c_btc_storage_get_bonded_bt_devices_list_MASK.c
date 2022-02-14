
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int btc_config_section_iter_t ;
typedef int bt_status_t ;
typedef int bt_bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 () ;
 int * FUNC_2 () ;
 int const* FUNC_3 () ;
 char* FUNC_4 (int const*) ;
 int * FUNC_5 (int const*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int *,int) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (char const*,int *) ;

bt_status_t FUNC_10(bt_bdaddr_t *VAR_4, int VAR_5)
{
    bt_bdaddr_t VAR_6;

    FUNC_1();
    for (const btc_config_section_iter_t *VAR_7 = FUNC_2(); VAR_7 != FUNC_3();
            VAR_7 = FUNC_5(VAR_7)) {

        if (VAR_5-- <= 0) {
            break;
        }

        const char *VAR_8 = FUNC_4(VAR_7);

        if (FUNC_8(VAR_8) &&
            FUNC_0(VAR_8, VAR_1) &&
            FUNC_0(VAR_8, VAR_2) &&
            FUNC_0(VAR_8, VAR_0)) {
            FUNC_9(VAR_8, &VAR_6);
            FUNC_7(VAR_4, &VAR_6, sizeof(bt_bdaddr_t));
            VAR_4++;
        }
    }
    FUNC_6();

    return VAR_3;
}
