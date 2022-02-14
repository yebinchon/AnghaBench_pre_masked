
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 float FUNC_0 () ;
 unsigned char* VAR_2 ;
 float* VAR_3 ;
 int FUNC_1 (int) ;

void FUNC_2( void )
{
 int VAR_4;

 FUNC_1( 1001 );

 for ( VAR_4 = 0; VAR_4 < VAR_0; VAR_4++ )
 {
  VAR_3[VAR_4] = ( float ) ( ( ( FUNC_0() / ( float ) VAR_1 ) * 2.0 - 1.0 ) );
  VAR_2[VAR_4] = ( unsigned char ) ( FUNC_0() / ( float ) VAR_1 * 255 );
 }
}
