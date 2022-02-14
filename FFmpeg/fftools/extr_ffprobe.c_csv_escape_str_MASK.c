
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* str; } ;
typedef TYPE_1__ AVBPrint ;


 int FUNC_0 (TYPE_1__*,char const,int) ;
 size_t FUNC_1 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_2(AVBPrint *VAR_0, const char *VAR_1, const char VAR_2, void *VAR_3)
{
    char VAR_4[] = { VAR_2, '"', '\n', '\r', '\0' };
    int VAR_5 = !!VAR_1[FUNC_1(VAR_1, VAR_4)];

    if (VAR_5)
        FUNC_0(VAR_0, '"', 1);

    for (; *VAR_1; VAR_1++) {
        if (*VAR_1 == '"')
            FUNC_0(VAR_0, '"', 1);
        FUNC_0(VAR_0, *VAR_1, 1);
    }
    if (VAR_5)
        FUNC_0(VAR_0, '"', 1);
    return VAR_0->str;
}
