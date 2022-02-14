
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0( int *VAR_0, const int VAR_1 )
{
    int VAR_2;
    for( VAR_2 = 1; VAR_2 < VAR_1; ++VAR_2 )
    {
        int VAR_3 = VAR_2;
        const int VAR_4 = VAR_0[VAR_3];
        while( VAR_3 > 0 && VAR_0[VAR_3-1] > VAR_4 )
        {
            VAR_0[VAR_3] = VAR_0[VAR_3-1];
            --VAR_3;
        }
        VAR_0[VAR_3] = VAR_4;
    }
}
