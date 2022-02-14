
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int client_t ;
struct TYPE_6__ {scalar_t__ integer; } ;
struct TYPE_5__ {int integer; } ;
struct TYPE_4__ {int numSnapshotEntities; scalar_t__ initialized; int clients; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_3__* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__ VAR_5 ;

void FUNC_4( void ) {
 if ( VAR_5.initialized ) {
  FUNC_0( VAR_0, "SV_Startup: svs.initialized" );
 }
 FUNC_2( 1 );

 VAR_5.clients = FUNC_3 (sizeof(client_t) * VAR_4->integer );
 if ( VAR_2->integer ) {
  VAR_5.numSnapshotEntities = VAR_4->integer * VAR_1 * 64;
 } else {

  VAR_5.numSnapshotEntities = VAR_4->integer * 4 * 64;
 }
 VAR_5.initialized = VAR_3;

 FUNC_1( "sv_running", "1" );
}
