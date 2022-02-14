
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__*,char*,int) ;
 scalar_t__* VAR_4 ;

char *FUNC_2( char *VAR_5 ) {
 int VAR_6;

 VAR_1++;
 VAR_3 = 0;
 VAR_4[0] = 0;

 if ( VAR_5[0] == 0 ) {
  VAR_2[0] = 0;
  return ((void*)0);
 }

 for ( VAR_6 = 0 ; VAR_6 < VAR_0 ; VAR_6++ ) {
  if ( VAR_5[VAR_6] == 0 || VAR_5[VAR_6] == '\n' ) {
   break;
  }
 }
 if ( VAR_6 == VAR_0 ) {
  FUNC_0( "MAX_LINE_LENGTH" );
  return VAR_5;
 }
 FUNC_1( VAR_2, VAR_5, VAR_6 );
 VAR_2[VAR_6] = 0;
 VAR_5 += VAR_6;
 if ( VAR_5[0] == '\n' ) {
  VAR_5++;
 }
 return VAR_5;
}
