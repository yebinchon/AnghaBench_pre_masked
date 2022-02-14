
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double int64_t ;


 int FUNC_0 (double*,double*,double,double) ;

void FUNC_1( int64_t *VAR_0, int64_t *VAR_1, int64_t VAR_2, int64_t VAR_3, int64_t VAR_4 )
{
    FUNC_0( &VAR_2, &VAR_3, VAR_2, VAR_3 );
    if ( VAR_2 < VAR_4 && VAR_3 < VAR_4 )
    {
        *VAR_0 = VAR_2;
        *VAR_1 = VAR_3;
        return;
    }

    if ( VAR_2 > VAR_3 )
    {
        double VAR_5 = (double)VAR_4 / VAR_2;
        VAR_2 = VAR_4;
        VAR_3 *= VAR_5;
    }
    else
    {
        double VAR_6 = (double)VAR_4 / VAR_3;
        VAR_3 = VAR_4;
        VAR_2 *= VAR_6;
    }
    *VAR_0 = VAR_2;
    *VAR_1 = VAR_3;
}
