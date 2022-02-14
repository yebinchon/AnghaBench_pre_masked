
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int item_next; int menu; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_9( void ) {
 int VAR_8;
 int VAR_9;
 const char *VAR_10;

 VAR_7 = -1;
 VAR_10 = FUNC_5( "training" );
 if( VAR_10 ) {
  VAR_6 = VAR_7;
  VAR_9 = FUNC_8( FUNC_0( VAR_10, "num" ) );
 }
 else {
  VAR_6 = 0;
  VAR_9 = -2;
 }

 VAR_3 = FUNC_4();
 VAR_10 = FUNC_5( "final" );
 if( VAR_10 ) {
  VAR_5 = VAR_3;
 }
 else {
  VAR_5 = VAR_3 - 1;
  if( VAR_5 < VAR_6 ) {
   VAR_5 = VAR_6;
  }
 }

 VAR_8 = FUNC_2();
 if ( VAR_8 == -1 ) {
  VAR_8 = FUNC_3() - 1;
  if( VAR_5 == VAR_3 ) {
   VAR_8++;
  }
 }

 if( VAR_8 == VAR_9 ) {
  VAR_2 = -1;
  VAR_1 = 0;
 }
 else {
  VAR_2 = VAR_8 / VAR_0;
  VAR_1 = VAR_8 % VAR_0;
 }

 FUNC_7();
 FUNC_6( &VAR_4.menu );
 FUNC_1( &VAR_4.menu, &VAR_4.item_next );
}
