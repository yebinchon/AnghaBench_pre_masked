
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ connected; int netname; } ;
struct TYPE_6__ {TYPE_1__ pers; } ;
typedef TYPE_2__ gclient_t ;
struct TYPE_7__ {int maxclients; TYPE_2__* clients; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (char const*) ;
 TYPE_3__ VAR_1 ;

gclient_t *FUNC_4( const char *VAR_2 ) {
 gclient_t *VAR_3;
 int VAR_4;
 int VAR_5;


 if ( VAR_2[0] >= '0' && VAR_2[0] <= '9' ) {
  VAR_5 = FUNC_3( VAR_2 );
  if ( VAR_5 < 0 || VAR_5 >= VAR_1.maxclients ) {
   FUNC_0( "Bad client slot: %i\n", VAR_5 );
   return ((void*)0);
  }

  VAR_3 = &VAR_1.clients[VAR_5];
  if ( VAR_3->pers.connected == VAR_0 ) {
   FUNC_1( "Client %i is not connected\n", VAR_5 );
   return ((void*)0);
  }
  return VAR_3;
 }


 for ( VAR_4=0 ; VAR_4 < VAR_1.maxclients ; VAR_4++ ) {
  VAR_3 = &VAR_1.clients[VAR_4];
  if ( VAR_3->pers.connected == VAR_0 ) {
   continue;
  }
  if ( !FUNC_2( VAR_3->pers.netname, VAR_2 ) ) {
   return VAR_3;
  }
 }

 FUNC_1( "User %s is not on the server\n", VAR_2 );

 return ((void*)0);
}
