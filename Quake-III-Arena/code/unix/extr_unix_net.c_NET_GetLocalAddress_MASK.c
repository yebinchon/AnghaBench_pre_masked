
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char** h_aliases; scalar_t__ h_addrtype; char** h_addr_list; int h_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 size_t VAR_1 ;
 struct hostent* FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 char** VAR_2 ;
 int FUNC_3 (int) ;
 size_t VAR_3 ;

void FUNC_4( void ) {
 char VAR_4[256];
 struct hostent *VAR_5;

 char *VAR_6;
 int VAR_7;
 int VAR_8;

 if ( FUNC_2( VAR_4, 256 ) == -1 ) {
  return;
 }

 VAR_5 = FUNC_1( VAR_4 );
 if ( !VAR_5 ) {
  return;
 }

 FUNC_0( "Hostname: %s\n", VAR_5->h_name );
 VAR_8 = 0;
 while( ( VAR_6 = VAR_5->h_aliases[VAR_8++] ) != ((void*)0) ) {
  FUNC_0( "Alias: %s\n", VAR_6 );
 }

 if ( VAR_5->h_addrtype != VAR_0 ) {
  return;
 }

 VAR_3 = 0;
 while( ( VAR_6 = VAR_5->h_addr_list[VAR_3++] ) != ((void*)0) && VAR_3 < VAR_1 ) {
  VAR_7 = FUNC_3( *(int *)VAR_6 );
  VAR_2[ VAR_3 ][0] = VAR_6[0];
  VAR_2[ VAR_3 ][1] = VAR_6[1];
  VAR_2[ VAR_3 ][2] = VAR_6[2];
  VAR_2[ VAR_3 ][3] = VAR_6[3];
  FUNC_0( "IP: %i.%i.%i.%i\n", ( VAR_7 >> 24 ) & 0xff, ( VAR_7 >> 16 ) & 0xff, ( VAR_7 >> 8 ) & 0xff, VAR_7 & 0xff );
 }
}
