
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* str; } ;
typedef TYPE_1__ AVBPrint ;


 int FUNC_0 (TYPE_1__*,char const,int) ;
 int FUNC_1 (TYPE_1__*,char*,char*) ;

__attribute__((used)) static const char *FUNC_2(AVBPrint *VAR_0, const char *VAR_1, const char VAR_2, void *VAR_3)
{
    const char *VAR_4;

    for (VAR_4 = VAR_1; *VAR_4; VAR_4++) {
        switch (*VAR_4) {
        case '\b': FUNC_1(VAR_0, "%s", "\\b"); break;
        case '\f': FUNC_1(VAR_0, "%s", "\\f"); break;
        case '\n': FUNC_1(VAR_0, "%s", "\\n"); break;
        case '\r': FUNC_1(VAR_0, "%s", "\\r"); break;
        case '\\': FUNC_1(VAR_0, "%s", "\\\\"); break;
        default:
            if (*VAR_4 == VAR_2)
                FUNC_0(VAR_0, '\\', 1);
            FUNC_0(VAR_0, *VAR_4, 1);
        }
    }
    return VAR_0->str;
}
