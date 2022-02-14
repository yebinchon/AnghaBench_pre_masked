
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xmlNodePtr ;


 char* FUNC_0 (scalar_t__,char const*) ;

__attribute__((used)) static char *FUNC_1(xmlNodePtr *VAR_0, const int VAR_1, const char *VAR_2)
{
    int VAR_3;
    char *VAR_4;

    for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
        if (VAR_0[VAR_3]) {
            VAR_4 = FUNC_0(VAR_0[VAR_3], VAR_2);
            if (VAR_4)
                return VAR_4;
        }
    }

    return ((void*)0);
}
