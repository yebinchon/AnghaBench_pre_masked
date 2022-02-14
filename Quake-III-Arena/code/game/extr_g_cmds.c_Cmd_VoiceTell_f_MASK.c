
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_12__ {int svFlags; } ;
struct TYPE_13__ {TYPE_3__ r; TYPE_2__* client; int inuse; } ;
typedef TYPE_4__ gentity_t ;
typedef int arg ;
struct TYPE_14__ {int maxclients; } ;
struct TYPE_10__ {int netname; } ;
struct TYPE_11__ {TYPE_1__ pers; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,char*) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 TYPE_4__* VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void FUNC_6( gentity_t *VAR_5, qboolean VAR_6 ) {
 int VAR_7;
 gentity_t *VAR_8;
 char *VAR_9;
 char VAR_10[VAR_0];

 if ( FUNC_4 () < 2 ) {
  return;
 }

 FUNC_5( 1, VAR_10, sizeof( VAR_10 ) );
 VAR_7 = FUNC_3( VAR_10 );
 if ( VAR_7 < 0 || VAR_7 >= VAR_4.maxclients ) {
  return;
 }

 VAR_8 = &VAR_3[VAR_7];
 if ( !VAR_8 || !VAR_8->inuse || !VAR_8->client ) {
  return;
 }

 VAR_9 = FUNC_0( 2 );

 FUNC_1( "vtell: %s to %s: %s\n", VAR_5->client->pers.netname, VAR_8->client->pers.netname, VAR_9 );
 FUNC_2( VAR_5, VAR_8, VAR_1, VAR_9, VAR_6 );


 if ( VAR_5 != VAR_8 && !(VAR_5->r.svFlags & VAR_2)) {
  FUNC_2( VAR_5, VAR_5, VAR_1, VAR_9, VAR_6 );
 }
}
