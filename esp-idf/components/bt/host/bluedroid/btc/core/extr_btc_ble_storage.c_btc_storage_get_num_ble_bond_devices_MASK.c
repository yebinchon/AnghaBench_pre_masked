
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int btc_config_section_iter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,int*) ;
 int FUNC_1 () ;
 int * FUNC_2 () ;
 int const* FUNC_3 () ;
 char* FUNC_4 (int const*) ;
 int * FUNC_5 (int const*) ;
 int FUNC_6 () ;
 int FUNC_7 (char const*) ;

int FUNC_8(void)
{
    int VAR_2 = 0;
    uint32_t VAR_3 = 0;

    FUNC_1();
    for (const btc_config_section_iter_t *VAR_4 = FUNC_2(); VAR_4 != FUNC_3();
            VAR_4 = FUNC_5(VAR_4)) {
        const char *VAR_5 = FUNC_4(VAR_4);
        if (!FUNC_7(VAR_5) ||
                !FUNC_0(VAR_5, VAR_0, (int *)&VAR_3) ||
                !(VAR_3 & VAR_1)) {
            continue;
        }

        VAR_2++;
    }
    FUNC_6();

    return VAR_2;
}
