
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float32 ;
typedef int flag ;
typedef scalar_t__ bits32 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

flag FUNC_4( float32 VAR_1, float32 VAR_2 )
{
    flag VAR_3, VAR_4;

    if ( ( ( FUNC_0( VAR_1 ) == 0xFF ) && FUNC_1( VAR_1 ) )
         || ( ( FUNC_0( VAR_2 ) == 0xFF ) && FUNC_1( VAR_2 ) )
       ) {
        FUNC_3( VAR_0 );
        return 0;
    }
    VAR_3 = FUNC_2( VAR_1 );
    VAR_4 = FUNC_2( VAR_2 );
    if ( VAR_3 != VAR_4 ) return VAR_3 || ( (bits32) ( ( VAR_1 | VAR_2 )<<1 ) == 0 );
    return ( VAR_1 == VAR_2 ) || ( VAR_3 ^ ( VAR_1 < VAR_2 ) );

}
