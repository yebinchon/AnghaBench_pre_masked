
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,scalar_t__) ;
 char* FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,char*) ;

char *FUNC_9( void ) {
 char *VAR_1 = ((void*)0);
 char *VAR_2;

 if ( FUNC_5( ((void*)0) ) != 0 ) {
  HANDLE VAR_3;

  if ( ( VAR_3 = FUNC_1( VAR_0 ) ) != 0 ) {
   if ( ( VAR_2 = FUNC_2( VAR_3 ) ) != 0 ) {
    VAR_1 = FUNC_7( FUNC_3( VAR_3 ) + 1 );
    FUNC_6( VAR_1, VAR_2, FUNC_3( VAR_3 ) );
    FUNC_4( VAR_3 );

    FUNC_8( VAR_1, "\n\r\b" );
   }
  }
  FUNC_0();
 }
 return VAR_1;
}
