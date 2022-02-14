
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int integer; int string; } ;
typedef TYPE_1__ cvar_t ;
struct TYPE_5__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 char* FUNC_6 (char*,int ) ;

void FUNC_7( void ) {
 cvar_t *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1( "net_ip", "localhost", VAR_0 );
 VAR_5 = FUNC_1( "net_port", FUNC_6( "%i", VAR_1 ), VAR_0 )->integer;




 for( VAR_6 = 0 ; VAR_6 < 10 ; VAR_6++ ) {
  VAR_2 = FUNC_4( VAR_4->string, VAR_5 + VAR_6 );
  if ( VAR_2 ) {
   FUNC_2( "net_port", VAR_5 + VAR_6 );
   if ( VAR_3->integer ) {
    FUNC_5( VAR_5 + VAR_6 );
   }
   FUNC_3();
   return;
  }
 }
 FUNC_0( "WARNING: Couldn't allocate IP port\n");
}
