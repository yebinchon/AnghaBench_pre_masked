
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int userinfo; } ;
typedef TYPE_1__ client_t ;
struct TYPE_5__ {int integer; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 () ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_4( void ) {
 client_t *VAR_1;


 if ( !VAR_0->integer ) {
  FUNC_1( "Server is not running.\n" );
  return;
 }

 if ( FUNC_0() != 2 ) {
  FUNC_1 ("Usage: info <userid>\n");
  return;
 }

 VAR_1 = FUNC_3();
 if ( !VAR_1 ) {
  return;
 }

 FUNC_1( "userinfo\n" );
 FUNC_1( "--------\n" );
 FUNC_2( VAR_1->userinfo );
}
