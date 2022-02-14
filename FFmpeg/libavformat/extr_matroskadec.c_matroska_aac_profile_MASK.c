
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const*) ;
 scalar_t__ FUNC_1 (char*,char const* const) ;

__attribute__((used)) static int FUNC_2(char *VAR_0)
{
    static const char *const VAR_1[] = { "MAIN", "LC", "SSR" };
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
        if (FUNC_1(VAR_0, VAR_1[VAR_2]))
            break;
    return VAR_2 + 1;
}
