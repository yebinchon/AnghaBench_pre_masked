
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* str; } ;
typedef TYPE_1__ AVBPrint ;


 int FUNC_0 (TYPE_1__*,char const,int) ;
 int FUNC_1 (TYPE_1__*,char*,char*) ;

__attribute__((used)) static const char *FUNC_2(AVBPrint *VAR_0, const char *VAR_1, void *VAR_2)
{
    const char *VAR_3;

    for (VAR_3 = VAR_1; *VAR_3; VAR_3++) {
        switch (*VAR_3) {
        case '&' : FUNC_1(VAR_0, "%s", "&amp;"); break;
        case '<' : FUNC_1(VAR_0, "%s", "&lt;"); break;
        case '>' : FUNC_1(VAR_0, "%s", "&gt;"); break;
        case '"' : FUNC_1(VAR_0, "%s", "&quot;"); break;
        case '\'': FUNC_1(VAR_0, "%s", "&apos;"); break;
        default: FUNC_0(VAR_0, *VAR_3, 1);
        }
    }

    return VAR_0->str;
}
