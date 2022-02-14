
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int ** VAR_4 ;
 int * VAR_5 ;

void FUNC_8( const char *VAR_6, const char *VAR_7 ) {
 int VAR_8, VAR_9, VAR_10;

 FUNC_2( VAR_6 );

 VAR_9 = FUNC_0();
 if ( VAR_9 > VAR_0 ) {
  VAR_9 = VAR_0;
 }

 VAR_2 = VAR_9;

 for ( VAR_8 = 0 ; VAR_8 < VAR_9 ; VAR_8++ ) {
  VAR_5[VAR_8] = FUNC_7( FUNC_1( VAR_8 ) );
 }

 if (VAR_2) {
  FUNC_3( "Connected to a pure server.\n" );
 }
 else
 {
  if (VAR_3)
  {


   FUNC_3( "FS search reorder is required\n" );
   FUNC_5(VAR_1);
   return;
  }
 }

 for ( VAR_8 = 0 ; VAR_8 < VAR_9 ; VAR_8++ ) {
  if (VAR_4[VAR_8]) {
   FUNC_6(VAR_4[VAR_8]);
  }
  VAR_4[VAR_8] = ((void*)0);
 }
 if ( VAR_7 && *VAR_7 ) {
  FUNC_2( VAR_7 );

  VAR_10 = FUNC_0();
  if ( VAR_10 > VAR_0 ) {
   VAR_10 = VAR_0;
  }

  for ( VAR_8 = 0 ; VAR_8 < VAR_10 ; VAR_8++ ) {
   VAR_4[VAR_8] = FUNC_4( FUNC_1( VAR_8 ) );
  }
 }
}
