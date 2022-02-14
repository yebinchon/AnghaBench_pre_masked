
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int*,char const*,int ,void*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const char *VAR_1)
{
    uint8_t VAR_2[4];
    int VAR_3 = 0;
    while (VAR_1[VAR_3] == '#')
        VAR_3++;
    VAR_1 += FUNC_0(0, VAR_3 - 1);
    if (FUNC_1(VAR_2, VAR_1, FUNC_2(VAR_1, "\" >"), VAR_0) < 0)
        return -1;
    return VAR_2[0] | VAR_2[1] << 8 | VAR_2[2] << 16;
}
