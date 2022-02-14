
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int * FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int ** VAR_2 ;
 int * VAR_3 ;

void FUNC_6( const char *VAR_4, const char *VAR_5 ) {
 int VAR_6, VAR_7, VAR_8;

 FUNC_2( VAR_4 );

 VAR_7 = FUNC_0();
 if ( VAR_7 > VAR_0 ) {
  VAR_7 = VAR_0;
 }

 VAR_1 = VAR_7;

 for ( VAR_6 = 0 ; VAR_6 < VAR_7 ; VAR_6++ ) {
  VAR_3[VAR_6] = FUNC_5( FUNC_1( VAR_6 ) );
 }

 for ( VAR_6 = 0 ; VAR_6 < VAR_7 ; VAR_6++ ) {
  if (VAR_2[VAR_6]) {
   FUNC_4(VAR_2[VAR_6]);
  }
  VAR_2[VAR_6] = ((void*)0);
 }
 if ( VAR_5 && *VAR_5 ) {
  FUNC_2( VAR_5 );

  VAR_8 = FUNC_0();
  if ( VAR_8 > VAR_0 ) {
   VAR_8 = VAR_0;
  }

  for ( VAR_6 = 0 ; VAR_6 < VAR_8 ; VAR_6++ ) {
   VAR_2[VAR_6] = FUNC_3( FUNC_1( VAR_6 ) );
  }
 }
}
