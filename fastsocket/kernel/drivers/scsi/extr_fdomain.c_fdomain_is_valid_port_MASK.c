
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_3( int VAR_9 )
{
   if (FUNC_0( VAR_9 + VAR_3 ) != 0xe9) {
      if (FUNC_0( VAR_9 + VAR_3 ) != 0x27) return 0;
      if (FUNC_0( VAR_9 + VAR_4 ) != 0x61) return 0;
      VAR_5 = VAR_6;
   } else {
      if (FUNC_0( VAR_9 + VAR_4 ) != 0x60) return 0;
      VAR_5 = VAR_8;






      FUNC_1( 0x80, VAR_9 + VAR_2 );
      if ((FUNC_0( VAR_9 + VAR_0 ) & 0x80) == 0x80) {
  FUNC_1( 0x00, VAR_9 + VAR_2 );
  if ((FUNC_0( VAR_9 + VAR_0 ) & 0x80) == 0x00) {
     VAR_5 = VAR_7;
     VAR_1 = 0x800;
  }
      }

   }

   return 1;
}
