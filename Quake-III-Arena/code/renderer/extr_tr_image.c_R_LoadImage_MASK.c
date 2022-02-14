
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int FUNC_0 (char const*,int **,int*,int*) ;
 int FUNC_1 (char const*,int **,int*,int*) ;
 int FUNC_2 (char const*,int **,int*,int*) ;
 int FUNC_3 (char const*,int **,int*,int*) ;
 int VAR_0 ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*) ;

void FUNC_7( const char *VAR_1, byte **VAR_2, int *VAR_3, int *VAR_4 ) {
 int VAR_5;

 *VAR_2 = ((void*)0);
 *VAR_3 = 0;
 *VAR_4 = 0;

 VAR_5 = FUNC_6(VAR_1);
 if (VAR_5<5) {
  return;
 }

 if ( !FUNC_4( VAR_1+VAR_5-4, ".tga" ) ) {
   FUNC_3( VAR_1, VAR_2, VAR_3, VAR_4 );
    if (!*VAR_2) {
    char VAR_6[VAR_0];
      FUNC_5( VAR_6, VAR_1 );
      VAR_5 = FUNC_6( VAR_6 );
      VAR_6[VAR_5-3] = 'j';
      VAR_6[VAR_5-2] = 'p';
      VAR_6[VAR_5-1] = 'g';
   FUNC_1( VAR_6, VAR_2, VAR_3, VAR_4 );
  }
  } else if ( !FUNC_4(VAR_1+VAR_5-4, ".pcx") ) {
    FUNC_2( VAR_1, VAR_2, VAR_3, VAR_4 );
 } else if ( !FUNC_4( VAR_1+VAR_5-4, ".bmp" ) ) {
  FUNC_0( VAR_1, VAR_2, VAR_3, VAR_4 );
 } else if ( !FUNC_4( VAR_1+VAR_5-4, ".jpg" ) ) {
  FUNC_1( VAR_1, VAR_2, VAR_3, VAR_4 );
 }
}
