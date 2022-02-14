
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,char*,int const,int const,int const,int const,int const,int const) ;

char *
FUNC_1(const void *VAR_0)
{
    static char VAR_1[6 * 2 + 5 + 1];
    const uint8_t *VAR_2;

    VAR_2 = VAR_0;
    FUNC_0(VAR_1, "%02x:%02x:%02x:%02x:%02x:%02x",
            VAR_2[5], VAR_2[4], VAR_2[3], VAR_2[2], VAR_2[1], VAR_2[0]);

    return VAR_1;
}
