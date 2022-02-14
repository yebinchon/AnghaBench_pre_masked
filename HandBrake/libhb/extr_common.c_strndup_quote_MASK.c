
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static char *FUNC_2(const char *VAR_0, char VAR_1, int VAR_2)
{
    if (VAR_0 == ((void*)0))
        return ((void*)0);

    char * VAR_3;
    int VAR_4 = FUNC_1( VAR_0 );
    int VAR_5 = 0, VAR_6 = 0;
    VAR_3 = FUNC_0( VAR_2 > VAR_4 ? VAR_4 + 1 : VAR_2 + 1 );
    if ( VAR_3 == ((void*)0) ) return VAR_3;

    while (VAR_0[VAR_5] != 0 && VAR_5 < VAR_2)
    {
        if (VAR_0[VAR_5] == VAR_1)
            VAR_5++;
        else
            VAR_3[VAR_6++] = VAR_0[VAR_5++];
    }
    VAR_3[VAR_6] = '\0';
    return VAR_3;
}
