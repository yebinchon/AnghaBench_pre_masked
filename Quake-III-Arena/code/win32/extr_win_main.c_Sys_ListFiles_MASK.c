
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _finddata_t {int attrib; int name; } ;
typedef int search ;
typedef scalar_t__ qboolean ;


 int FUNC_0 (char*,int,char*,char const*,char const*) ;
 char* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*,char*,char*,char**,int*) ;
 char** FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,struct _finddata_t*) ;
 int FUNC_6 (int,struct _finddata_t*) ;
 scalar_t__ FUNC_7 (char*,char*) ;

char **FUNC_8( const char *VAR_3, const char *VAR_4, char *VAR_5, int *VAR_6, qboolean VAR_7 ) {
 char VAR_8[VAR_1];
 int VAR_9;
 char **VAR_10;
 char *VAR_11[VAR_0];
 struct _finddata_t VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 if (VAR_5) {

  VAR_9 = 0;
  FUNC_2( VAR_3, "", VAR_5, VAR_11, &VAR_9 );

  VAR_11[ VAR_9 ] = 0;
  *VAR_6 = VAR_9;

  if (!VAR_9)
   return ((void*)0);

  VAR_10 = FUNC_3( ( VAR_9 + 1 ) * sizeof( *VAR_10 ) );
  for ( VAR_15 = 0 ; VAR_15 < VAR_9 ; VAR_15++ ) {
   VAR_10[VAR_15] = VAR_11[VAR_15];
  }
  VAR_10[VAR_15] = ((void*)0);

  return VAR_10;
 }

 if ( !VAR_4) {
  VAR_4 = "";
 }


 if ( VAR_4[0] == '/' && VAR_4[1] == 0 ) {
  VAR_4 = "";
  VAR_14 = 0;
 } else {
  VAR_14 = VAR_2;
 }

 FUNC_0( VAR_8, sizeof(VAR_8), "%s\\*%s", VAR_3, VAR_4 );


 VAR_9 = 0;

 VAR_13 = FUNC_5 (VAR_8, &VAR_12);
 if (VAR_13 == -1) {
  *VAR_6 = 0;
  return ((void*)0);
 }

 do {
  if ( (!VAR_7 && VAR_14 ^ ( VAR_12.attrib & VAR_2 )) || (VAR_7 && VAR_12.attrib & VAR_2) ) {
   if ( VAR_9 == VAR_0 - 1 ) {
    break;
   }
   VAR_11[ VAR_9 ] = FUNC_1( VAR_12.name );
   VAR_9++;
  }
 } while ( FUNC_6 (VAR_13, &VAR_12) != -1 );

 VAR_11[ VAR_9 ] = 0;

 FUNC_4 (VAR_13);


 *VAR_6 = VAR_9;

 if ( !VAR_9 ) {
  return ((void*)0);
 }

 VAR_10 = FUNC_3( ( VAR_9 + 1 ) * sizeof( *VAR_10 ) );
 for ( VAR_15 = 0 ; VAR_15 < VAR_9 ; VAR_15++ ) {
  VAR_10[VAR_15] = VAR_11[VAR_15];
 }
 VAR_10[VAR_15] = ((void*)0);

 do {
  VAR_14 = 0;
  for(VAR_15=1; VAR_15<VAR_9; VAR_15++) {
   if (FUNC_7(VAR_10[VAR_15-1], VAR_10[VAR_15])) {
    char *VAR_16 = VAR_10[VAR_15];
    VAR_10[VAR_15] = VAR_10[VAR_15-1];
    VAR_10[VAR_15-1] = VAR_16;
    VAR_14 = 1;
   }
  }
 } while(VAR_14);

 return VAR_10;
}
