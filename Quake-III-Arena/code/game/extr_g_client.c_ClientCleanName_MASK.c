
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 char VAR_0 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2( const char *VAR_1, char *VAR_2, int VAR_3 ) {
 int VAR_4, VAR_5;
 char VAR_6;
 char *VAR_7;
 int VAR_8;


 VAR_3--;

 VAR_4 = 0;
 VAR_5 = 0;
 VAR_7 = VAR_2;
 *VAR_7 = 0;
 VAR_8 = 0;

 while( 1 ) {
  VAR_6 = *VAR_1++;
  if( !VAR_6 ) {
   break;
  }


  if( !*VAR_7 && VAR_6 == ' ' ) {
   continue;
  }


  if( VAR_6 == VAR_0 ) {

   if( !*VAR_1 ) {
    break;
   }


   if( FUNC_0(*VAR_1) == 0 ) {
    VAR_1++;
    continue;
   }


   if( VAR_4 > VAR_3 - 2 ) {
    break;
   }

   *VAR_2++ = VAR_6;
   *VAR_2++ = *VAR_1++;
   VAR_4 += 2;
   continue;
  }


  if( VAR_6 == ' ' ) {
   VAR_8++;
   if( VAR_8 > 3 ) {
    continue;
   }
  }
  else {
   VAR_8 = 0;
  }

  if( VAR_4 > VAR_3 - 1 ) {
   break;
  }

  *VAR_2++ = VAR_6;
  VAR_5++;
  VAR_4++;
 }
 *VAR_2 = 0;


 if( *VAR_7 == 0 || VAR_5 == 0 ) {
  FUNC_1( VAR_7, "UnnamedPlayer", VAR_3 );
 }
}
