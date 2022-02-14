
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* str; } ;
typedef TYPE_1__ AVBPrint ;


 int FUNC_0 (TYPE_1__*,char const,int) ;
 int FUNC_1 (TYPE_1__*,char*,char*) ;

__attribute__((used)) static const char *FUNC_2(AVBPrint *VAR_0, const char *VAR_1)
{
    const char *VAR_2;

    for (VAR_2 = VAR_1; *VAR_2; VAR_2++) {
        switch (*VAR_2) {
        case '\n': FUNC_1(VAR_0, "%s", "\\n"); break;
        case '\r': FUNC_1(VAR_0, "%s", "\\r"); break;
        case '\\': FUNC_1(VAR_0, "%s", "\\\\"); break;
        case '"': FUNC_1(VAR_0, "%s", "\\\""); break;
        case '`': FUNC_1(VAR_0, "%s", "\\`"); break;
        case '$': FUNC_1(VAR_0, "%s", "\\$"); break;
        default: FUNC_0(VAR_0, *VAR_2, 1); break;
        }
    }
    return VAR_0->str;
}
