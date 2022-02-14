
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_1 (int ,char*) ;

void FUNC_2( void ) {
 char VAR_4[VAR_1+1];
 int VAR_5;
 int VAR_6;

 VAR_6 = 0;
 for ( VAR_5 = 0 ; VAR_5 < VAR_2 ; VAR_5++ ) {
  if ( VAR_3[VAR_5] ) {
   VAR_6++;
   VAR_4[VAR_5] = '1';
  } else {
   VAR_4[VAR_5] = '0';
  }
 }
 VAR_4[ VAR_2 ] = 0;

 FUNC_0( "%i items registered\n", VAR_6 );
 FUNC_1(VAR_0, VAR_4);
}
