
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;
typedef int cmd ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char*,int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void FUNC_2( int VAR_3, char *VAR_4 ) {
 int VAR_5;
 char VAR_6[1024], *VAR_7;
 char VAR_8[1024];
 qboolean VAR_9;

 if ( !VAR_4 ) {
  return;
 }
 VAR_9 = VAR_0;
 VAR_7 = VAR_6;
 for ( VAR_5 = 0; ; VAR_5++ ) {
  if ( VAR_4[VAR_5] == ';' || !VAR_4[VAR_5] ) {
   *VAR_7 = '\0';
   if ( VAR_6[0] == '+') {


    FUNC_1 (VAR_8, sizeof(VAR_8), "-%s %i %i\n", VAR_6+1, VAR_3, VAR_2);
    FUNC_0 (VAR_8);
    VAR_9 = VAR_1;
   } else {
    if (VAR_9) {

     FUNC_0 (VAR_6);
     FUNC_0 ("\n");
    }
   }
   VAR_7 = VAR_6;
   while ( (VAR_4[VAR_5] <= ' ' || VAR_4[VAR_5] == ';') && VAR_4[VAR_5] != 0 ) {
    VAR_5++;
   }
  }
  *VAR_7++ = VAR_4[VAR_5];
  if ( !VAR_4[VAR_5] ) {
   break;
  }
 }
}
