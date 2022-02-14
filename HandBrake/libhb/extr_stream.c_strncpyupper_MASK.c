
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 char const FUNC_1 (char const) ;

__attribute__((used)) static char* FUNC_2( char *VAR_0, const char *VAR_1, int VAR_2 )
{
    int VAR_3;

    for ( VAR_3 = 0; VAR_3 < VAR_2-1 && VAR_1[VAR_3]; VAR_3++ )
    {
        VAR_0[VAR_3] = FUNC_0(VAR_1[VAR_3]) ? FUNC_1(VAR_1[VAR_3]) : VAR_1[VAR_3];
    }
    VAR_0[VAR_3] = '\0';
    return VAR_0;
}
