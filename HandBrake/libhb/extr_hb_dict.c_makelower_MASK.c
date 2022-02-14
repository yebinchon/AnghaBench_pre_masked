
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 char FUNC_2 (char const) ;

__attribute__((used)) static char * FUNC_3(const char *VAR_0)
{
    int VAR_1, VAR_2 = FUNC_1(VAR_0);
    char * VAR_3 = FUNC_0(VAR_2 + 1);

    for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
    {
        VAR_3[VAR_1] = FUNC_2(VAR_0[VAR_1]);
    }
    VAR_3[VAR_1] = '\0';
    return VAR_3;
}
