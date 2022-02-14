
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int FUNC_0 (int *,char const) ;
 size_t FUNC_1 (char const*,char*) ;

__attribute__((used)) static void FUNC_2(AVIOContext *VAR_0, const char *VAR_1)
{
    int VAR_2 = !!VAR_1[FUNC_1(VAR_1, "\",\n\r")];

    if (VAR_2)
        FUNC_0(VAR_0, '"');

    for (; *VAR_1; VAR_1++) {
        if (*VAR_1 == '"')
            FUNC_0(VAR_0, '"');
        FUNC_0(VAR_0, *VAR_1);
    }
    if (VAR_2)
        FUNC_0(VAR_0, '"');
}
