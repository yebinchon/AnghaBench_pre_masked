
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float32 ;
typedef int flag ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static float32 FUNC_3( float32 VAR_1, float32 VAR_2 )
{
    flag VAR_3, VAR_4, VAR_5, VAR_6;

    VAR_3 = FUNC_0( VAR_1 );
    VAR_4 = FUNC_1( VAR_1 );
    VAR_5 = FUNC_0( VAR_2 );
    VAR_6 = FUNC_1( VAR_2 );
    VAR_1 |= 0x00400000;
    VAR_2 |= 0x00400000;
    if ( VAR_4 | VAR_6 ) FUNC_2( VAR_0 );
    if ( VAR_3 ) {
        return ( VAR_4 & VAR_5 ) ? VAR_2 : VAR_1;
    }
    else {
        return VAR_2;
    }

}
