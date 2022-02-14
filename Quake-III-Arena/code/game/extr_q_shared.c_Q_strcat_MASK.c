
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*) ;

void FUNC_3( char *VAR_1, int VAR_2, const char *VAR_3 ) {
 int VAR_4;

 VAR_4 = FUNC_2( VAR_1 );
 if ( VAR_4 >= VAR_2 ) {
  FUNC_0( VAR_0, "Q_strcat: already overflowed" );
 }
 FUNC_1( VAR_1 + VAR_4, VAR_3, VAR_2 - VAR_4 );
}
