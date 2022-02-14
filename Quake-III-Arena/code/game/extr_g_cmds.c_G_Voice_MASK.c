
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_14__ {TYPE_2__* client; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_17__ {scalar_t__ integer; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_15__ {int maxclients; } ;
struct TYPE_12__ {int netname; } ;
struct TYPE_13__ {TYPE_1__ pers; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,char const*) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int,char const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;

void FUNC_2( gentity_t *VAR_7, gentity_t *VAR_8, int VAR_9, const char *VAR_10, qboolean VAR_11 ) {
 int VAR_12;
 gentity_t *VAR_13;

 if ( VAR_5.integer < VAR_0 && VAR_9 == VAR_2 ) {
  VAR_9 = VAR_1;
 }

 if ( VAR_8 ) {
  FUNC_1( VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 );
  return;
 }


 if ( VAR_3.integer ) {
  FUNC_0( "voice: %s %s\n", VAR_7->client->pers.netname, VAR_10);
 }


 for (VAR_12 = 0; VAR_12 < VAR_6.maxclients; VAR_12++) {
  VAR_13 = &VAR_4[VAR_12];
  FUNC_1( VAR_7, VAR_13, VAR_9, VAR_10, VAR_11 );
 }
}
