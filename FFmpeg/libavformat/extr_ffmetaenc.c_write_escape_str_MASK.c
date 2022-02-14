
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *,char const) ;

__attribute__((used)) static void FUNC_1(AVIOContext *VAR_0, const uint8_t *VAR_1)
{
    const uint8_t *VAR_2 = VAR_1;

    while (*VAR_2) {
        if (*VAR_2 == '#' || *VAR_2 == ';' || *VAR_2 == '=' || *VAR_2 == '\\' || *VAR_2 == '\n')
            FUNC_0(VAR_0, '\\');
        FUNC_0(VAR_0, *VAR_2);
        VAR_2++;
    }
}
