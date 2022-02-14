
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (scalar_t__*,int,int,int *) ;
 scalar_t__* FUNC_4 (int) ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__* VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static void FUNC_6( const char *VAR_3 ) {
 FILE *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2( VAR_3, "r" );
 if ( !VAR_4 ) {
  FUNC_5( ";couldn't open %s\n", VAR_3 );
  VAR_0 = ((void*)0);
  return;
 }
 VAR_5 = FUNC_1( VAR_4 );
 VAR_0 = FUNC_4( VAR_5 + 1 );
 if ( VAR_0 ) {
  FUNC_3( VAR_0, VAR_5, 1, VAR_4 );
  VAR_0[VAR_5] = 0;
 }

 FUNC_0( VAR_4 );
 VAR_1 = 1;
 VAR_2 = VAR_0;
}
