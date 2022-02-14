
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gentity_t ;
struct TYPE_4__ {scalar_t__ connected; char* netname; } ;
struct TYPE_5__ {TYPE_1__ pers; } ;
typedef TYPE_2__ gclient_t ;
struct TYPE_6__ {int maxclients; TYPE_2__* clients; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,...) ;

int FUNC_5( gentity_t *VAR_4, char *VAR_5 ) {
 gclient_t *VAR_6;
 int VAR_7;
 char VAR_8[VAR_1];
 char VAR_9[VAR_1];


 if (VAR_5[0] >= '0' && VAR_5[0] <= '9') {
  VAR_7 = FUNC_1( VAR_5 );
  if ( VAR_7 < 0 || VAR_7 >= VAR_3.maxclients ) {
   FUNC_3( VAR_4-VAR_2, FUNC_4("print \"Bad client slot: %i\n\"", VAR_7));
   return -1;
  }

  VAR_6 = &VAR_3.clients[VAR_7];
  if ( VAR_6->pers.connected != VAR_0 ) {
   FUNC_3( VAR_4-VAR_2, FUNC_4("print \"Client %i is not active\n\"", VAR_7));
   return -1;
  }
  return VAR_7;
 }


 FUNC_0( VAR_5, VAR_8 );
 for ( VAR_7=0,VAR_6=VAR_3.clients ; VAR_7 < VAR_3.maxclients ; VAR_7++,VAR_6++ ) {
  if ( VAR_6->pers.connected != VAR_0 ) {
   continue;
  }
  FUNC_0( VAR_6->pers.netname, VAR_9 );
  if ( !FUNC_2( VAR_9, VAR_8 ) ) {
   return VAR_7;
  }
 }

 FUNC_3( VAR_4-VAR_2, FUNC_4("print \"User %s is not on the server\n\"", VAR_5));
 return -1;
}
