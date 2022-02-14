
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char**,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char const*,int ) ;
 int VAR_1 ;
 char* VAR_2 ;
 char*** VAR_3 ;

__attribute__((used)) static char *FUNC_4( const char *VAR_4 ) {

 char *VAR_5, *VAR_6;

 int VAR_7, VAR_8;

 VAR_8 = FUNC_3(VAR_4, VAR_0);

 for (VAR_7 = 0; VAR_3[VAR_8][VAR_7]; VAR_7++) {
  VAR_6 = VAR_3[VAR_8][VAR_7];
  VAR_5 = FUNC_0(&VAR_6, VAR_1);
  if ( !FUNC_1( VAR_5, VAR_4 ) ) {
   return VAR_6;
  }
 }

 VAR_6 = VAR_2;

 if ( !VAR_6 ) {
  return ((void*)0);
 }


 while ( 1 ) {
  VAR_5 = FUNC_0( &VAR_6, VAR_1 );
  if ( VAR_5[0] == 0 ) {
   break;
  }

  if ( !FUNC_1( VAR_5, VAR_4 ) ) {
   return VAR_6;
  }
  else {

   FUNC_2( &VAR_6 );
  }
 }

 return ((void*)0);
}
