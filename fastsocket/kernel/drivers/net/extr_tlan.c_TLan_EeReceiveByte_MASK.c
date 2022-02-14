
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4( u16 VAR_6, u8 *VAR_7, int VAR_8 )
{
 u8 VAR_9;
 u16 VAR_10;

 FUNC_3( VAR_2, VAR_6 + VAR_0 );
 VAR_10 = VAR_6 + VAR_1 + VAR_2;
 *VAR_7 = 0;


 FUNC_0( VAR_5, VAR_10 );
 for ( VAR_9 = 0x80; VAR_9; VAR_9 >>= 1 ) {
  FUNC_2( VAR_3, VAR_10 );
  if ( FUNC_1( VAR_4, VAR_10 ) )
   *VAR_7 |= VAR_9;
  FUNC_0( VAR_3, VAR_10 );
 }

 FUNC_2( VAR_5, VAR_10 );
 if ( ! VAR_8 ) {
  FUNC_0( VAR_4, VAR_10 );
  FUNC_2( VAR_3, VAR_10 );
  FUNC_0( VAR_3, VAR_10 );
 } else {
  FUNC_2( VAR_4, VAR_10 );
  FUNC_2( VAR_3, VAR_10 );
  FUNC_0( VAR_3, VAR_10 );

  FUNC_0( VAR_4, VAR_10 );
  FUNC_2( VAR_3, VAR_10 );
  FUNC_2( VAR_4, VAR_10 );
 }

}
