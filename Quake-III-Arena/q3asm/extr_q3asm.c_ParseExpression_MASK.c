
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 char* VAR_1 ;

int FUNC_3(void) {
 int VAR_2, VAR_3;
 char VAR_4[VAR_0];
 int VAR_5;

 if ( VAR_1[0] == '-' ) {
  VAR_2 = 1;
 } else {
  VAR_2 = 0;
 }

 for ( ; VAR_2 < VAR_0 ; VAR_2++ ) {
  if ( VAR_1[VAR_2] == '+' || VAR_1[VAR_2] == '-' || VAR_1[VAR_2] == 0 ) {
   break;
  }
 }

 FUNC_2( VAR_4, VAR_1, VAR_2 );
 VAR_4[VAR_2] = 0;

 if ( ( VAR_4[0] >= '0' && VAR_4[0] <= '9' ) || VAR_4[0] == '-' ) {
  VAR_5 = FUNC_1( VAR_4 );
 } else {
  VAR_5 = FUNC_0( VAR_4 );
 }


 while ( VAR_1[VAR_2] != 0 ) {
  for ( VAR_3 = VAR_2 + 1 ; VAR_3 < VAR_0 ; VAR_3++ ) {
   if ( VAR_1[VAR_3] == '+' || VAR_1[VAR_3] == '-' || VAR_1[VAR_3] == 0 ) {
    break;
   }
  }

  FUNC_2( VAR_4, VAR_1+VAR_2+1, VAR_3-VAR_2-1 );
  VAR_4[VAR_3-VAR_2-1] = 0;

  if ( VAR_1[VAR_2] == '+' ) {
   VAR_5 += FUNC_1( VAR_4 );
  }
  if ( VAR_1[VAR_2] == '-' ) {
   VAR_5 -= FUNC_1( VAR_4 );
  }
  VAR_2 = VAR_3;
 }

 return VAR_5;
}
