
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ won; int level; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char const*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_5( void* VAR_3, int VAR_4 ) {
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 const char *VAR_9;

 if (VAR_4 != VAR_1) {
  return;
 }
 FUNC_3();


 if( VAR_2.won == 0 ) {
  VAR_7 = 0;
 }
 else {
  VAR_7 = VAR_2.level + 1;
 }
 VAR_6 = VAR_7 / VAR_0;

 VAR_8 = FUNC_1();
 if( VAR_8 == -1 ) {
  VAR_8 = VAR_2.level;
 }
 VAR_5 = VAR_8 / VAR_0;

 if( VAR_6 > VAR_5 || VAR_6 == FUNC_2() ) {
  VAR_7 = VAR_8;
 }

 VAR_9 = FUNC_0( VAR_7 );
 if ( !VAR_9 ) {
  return;
 }

 FUNC_4( VAR_9 );
}
