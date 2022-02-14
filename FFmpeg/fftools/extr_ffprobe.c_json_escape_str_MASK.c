
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* str; } ;
typedef TYPE_1__ AVBPrint ;


 int FUNC_0 (TYPE_1__*,char const,int) ;
 int FUNC_1 (TYPE_1__*,char*,char const) ;
 char* FUNC_2 (char const*,char const) ;

__attribute__((used)) static const char *FUNC_3(AVBPrint *VAR_0, const char *VAR_1, void *VAR_2)
{
    static const char VAR_3[] = {'"', '\\', '\b', '\f', '\n', '\r', '\t', 0};
    static const char VAR_4[] = {'"', '\\', 'b', 'f', 'n', 'r', 't', 0};
    const char *VAR_5;

    for (VAR_5 = VAR_1; *VAR_5; VAR_5++) {
        char *VAR_6 = FUNC_2(VAR_3, *VAR_5);
        if (VAR_6) {
            FUNC_0(VAR_0, '\\', 1);
            FUNC_0(VAR_0, VAR_4[VAR_6 - VAR_3], 1);
        } else if ((unsigned char)*VAR_5 < 32) {
            FUNC_1(VAR_0, "\\u00%02x", *VAR_5 & 0xff);
        } else {
            FUNC_0(VAR_0, *VAR_5, 1);
        }
    }
    return VAR_0->str;
}
