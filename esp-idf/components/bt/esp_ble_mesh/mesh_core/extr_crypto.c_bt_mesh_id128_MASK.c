
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;


 int FUNC_0 (int const*,int,int *,char const*,int *) ;
 int FUNC_1 (char const*,int *) ;

int FUNC_2(const u8_t VAR_0[16], const char *VAR_1, u8_t VAR_2[16])
{
    const char *VAR_3 = "id128\x01";
    u8_t VAR_4[16];
    int VAR_5;

    VAR_5 = FUNC_1(VAR_1, VAR_4);
    if (VAR_5) {
        return VAR_5;
    }

    return FUNC_0(VAR_0, 16, VAR_4, VAR_3, VAR_2);
}
