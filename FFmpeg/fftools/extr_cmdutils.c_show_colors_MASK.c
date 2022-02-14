
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 char* FUNC_0 (int,int const**) ;
 int FUNC_1 (char*,char const*,...) ;

int FUNC_2(void *VAR_0, const char *VAR_1, const char *VAR_2)
{
    const char *VAR_3;
    const uint8_t *VAR_4;
    int VAR_5;

    FUNC_1("%-32s #RRGGBB\n", "name");

    for (VAR_5 = 0; (VAR_3 = FUNC_0(VAR_5, &VAR_4)); VAR_5++)
        FUNC_1("%-32s #%02x%02x%02x\n", VAR_3, VAR_4[0], VAR_4[1], VAR_4[2]);

    return 0;
}
