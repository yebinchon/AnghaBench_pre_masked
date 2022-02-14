
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float64 ;
typedef int flag ;
typedef scalar_t__ bits64 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;

flag FUNC_3( float64 VAR_0, float64 VAR_1 )
{
    flag VAR_2, VAR_3;


    if ( ( ( FUNC_0( VAR_0 ) == 0x7FF ) && FUNC_1( VAR_0 ) )
         || ( ( FUNC_0( VAR_1 ) == 0x7FF ) && FUNC_1( VAR_1 ) )
       ) {

        return 0;
    }
    VAR_2 = FUNC_2( VAR_0 );
    VAR_3 = FUNC_2( VAR_1 );
    if ( VAR_2 != VAR_3 ) return VAR_2 || ( (bits64) ( ( VAR_0 | VAR_1 )<<1 ) == 0 );
    return ( VAR_0 == VAR_1 ) || ( VAR_2 ^ ( VAR_0 < VAR_1 ) );

}
