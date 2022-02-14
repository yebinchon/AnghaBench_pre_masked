
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(char **VAR_0)
{
    int VAR_1 = 0;
    if (VAR_0 != ((void*)0))
    {
        int VAR_2 = FUNC_0(VAR_0);
        int VAR_3;
        for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        {
            if (FUNC_1(VAR_0[0], "scan") &&
                FUNC_1(VAR_0[0], "none"))
            {
                VAR_1++;
            }
        }
    }
    return VAR_1;
}
