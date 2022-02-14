
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; int den; int member_1; int member_0; } ;
typedef TYPE_1__ AVRational ;


 int FUNC_0 (char const* const*) ;
 int FUNC_1 (TYPE_1__*,char const* const) ;
 int FUNC_2 (char*,char const* const,int,int,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    int VAR_0;
    static const char *const VAR_1[] = {
        "-inf",
        "inf",
        "nan",
        "123/0",
        "-123 / 0",
        "",
        "/",
        " 123  /  321",
        "foo/foo",
        "foo/1",
        "1/foo",
        "0/0",
        "/0",
        "1/",
        "1",
        "0",
        "-123/123",
        "-foo",
        "123.23",
        ".23",
        "-.23",
        "-0.234",
        "-0.0000001",
        "  21332.2324   ",
        " -21332.2324   ",
    };

    for (VAR_0 = 0; VAR_0 < FUNC_0(VAR_1); VAR_0++) {
        int VAR_2;
        AVRational VAR_3 = { 0, 0 };
        VAR_2 = FUNC_1(&VAR_3, VAR_1[VAR_0]);
        FUNC_2("'%s' -> %d/%d %s\n",
               VAR_1[VAR_0], VAR_3.num, VAR_3.den, VAR_2 ? "ERROR" : "OK");
    }
}
