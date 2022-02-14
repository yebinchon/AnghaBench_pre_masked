
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char * FUNC_0( char * VAR_0, char * VAR_1, int VAR_2 )
{
    int VAR_3 = 1;
    while (VAR_0 < VAR_1)
    {
        if ( *VAR_0++ == ',' )
        {
            VAR_3++;
            if ( VAR_3 == VAR_2 )
                return VAR_0;
        }
    }
    return ((void*)0);
}
