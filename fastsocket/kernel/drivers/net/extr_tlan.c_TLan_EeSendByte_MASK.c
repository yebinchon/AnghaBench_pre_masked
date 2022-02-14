
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
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4( u16 VAR_6, u8 VAR_7, int VAR_8 )
{
 int VAR_9;
 u8 VAR_10;
 u16 VAR_11;

 FUNC_3( VAR_2, VAR_6 + VAR_0 );
 VAR_11 = VAR_6 + VAR_1 + VAR_2;


 for ( VAR_10 = 0x80; VAR_10 != 0; VAR_10 >>= 1 ) {
  if ( VAR_10 & VAR_7 )
   FUNC_2( VAR_4, VAR_11 );
  else
   FUNC_0( VAR_4, VAR_11 );
  FUNC_2( VAR_3, VAR_11 );
  FUNC_0( VAR_3, VAR_11 );
 }
 FUNC_0( VAR_5, VAR_11 );
 FUNC_2( VAR_3, VAR_11 );
 VAR_9 = FUNC_1( VAR_4, VAR_11 );
 FUNC_0( VAR_3, VAR_11 );
 FUNC_2( VAR_5, VAR_11 );

 if ( ( ! VAR_9 ) && VAR_8 ) {

  FUNC_0( VAR_4, VAR_11 );
  FUNC_2( VAR_3, VAR_11 );
  FUNC_2( VAR_4, VAR_11 );
 }

 return ( VAR_9 );

}
