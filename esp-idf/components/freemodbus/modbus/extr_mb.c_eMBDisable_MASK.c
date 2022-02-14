
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int eMBErrorCode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;

eMBErrorCode
FUNC_1( void )
{
    eMBErrorCode VAR_5;

    if( VAR_4 == VAR_3 )
    {
        FUNC_0( );
        VAR_4 = VAR_2;
        VAR_5 = VAR_1;
    }
    else if( VAR_4 == VAR_2 )
    {
        VAR_5 = VAR_1;
    }
    else
    {
        VAR_5 = VAR_0;
    }
    return VAR_5;
}
