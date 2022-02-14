
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char** h_aliases; scalar_t__ h_addrtype; char** h_addr_list; int h_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 struct hostent* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 char** VAR_3 ;
 int FUNC_4 (int) ;
 size_t VAR_4 ;

void FUNC_5( void ) {
 char VAR_5[256];
 struct hostent *VAR_6;
 int VAR_7;
 char *VAR_8;
 int VAR_9;
 int VAR_10;

 if( FUNC_3( VAR_5, 256 ) == VAR_2 ) {
  VAR_7 = FUNC_1();
  return;
 }

 VAR_6 = FUNC_2( VAR_5 );
 if( !VAR_6 ) {
  VAR_7 = FUNC_1();
  return;
 }

 FUNC_0( "Hostname: %s\n", VAR_6->h_name );
 VAR_10 = 0;
 while( ( VAR_8 = VAR_6->h_aliases[VAR_10++] ) != ((void*)0) ) {
  FUNC_0( "Alias: %s\n", VAR_8 );
 }

 if ( VAR_6->h_addrtype != VAR_0 ) {
  return;
 }

 VAR_4 = 0;
 while( ( VAR_8 = VAR_6->h_addr_list[VAR_4] ) != ((void*)0) && VAR_4 < VAR_1 ) {
  VAR_9 = FUNC_4( *(int *)VAR_8 );
  VAR_3[ VAR_4 ][0] = VAR_8[0];
  VAR_3[ VAR_4 ][1] = VAR_8[1];
  VAR_3[ VAR_4 ][2] = VAR_8[2];
  VAR_3[ VAR_4 ][3] = VAR_8[3];
  FUNC_0( "IP: %i.%i.%i.%i\n", ( VAR_9 >> 24 ) & 0xff, ( VAR_9 >> 16 ) & 0xff, ( VAR_9 >> 8 ) & 0xff, VAR_9 & 0xff );
  VAR_4++;
 }
}
