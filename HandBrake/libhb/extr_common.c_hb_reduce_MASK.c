
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0( int *VAR_0, int *VAR_1, int VAR_2, int VAR_3 )
{

    int VAR_4 = VAR_2, VAR_5 = VAR_3;
    while ( VAR_5 )
    {
        int VAR_6 = VAR_5;
        VAR_5 = VAR_4 % VAR_5;
        VAR_4 = VAR_6;
    }



    if ( VAR_4 )
    {
        *VAR_0 = VAR_2 / VAR_4;
        *VAR_1 = VAR_3 / VAR_4;
    }
    else
    {
        *VAR_0 = VAR_2;
        *VAR_1 = VAR_3;
    }
}
