
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float64 ;
typedef int flag ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static float64 FUNC_4( float64 VAR_1, float64 VAR_2 )
{
    flag VAR_3, VAR_4, VAR_5, VAR_6;

    VAR_3 = FUNC_1( VAR_1 );
    VAR_4 = FUNC_2( VAR_1 );
    VAR_5 = FUNC_1( VAR_2 );
    VAR_6 = FUNC_2( VAR_2 );
    VAR_1 |= FUNC_0( 0x0008000000000000 );
    VAR_2 |= FUNC_0( 0x0008000000000000 );
    if ( VAR_4 | VAR_6 ) FUNC_3( VAR_0 );
    if ( VAR_3 ) {
        return ( VAR_4 & VAR_5 ) ? VAR_2 : VAR_1;
    }
    else {
        return VAR_2;
    }

}
