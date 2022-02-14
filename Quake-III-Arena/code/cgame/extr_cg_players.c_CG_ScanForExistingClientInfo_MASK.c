
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_6__ {scalar_t__ team; scalar_t__ deferred; int redTeam; int blueTeam; int headSkinName; int headModelName; int skinName; int modelName; int infoValid; } ;
typedef TYPE_1__ clientInfo_t ;
struct TYPE_7__ {int maxclients; scalar_t__ gametype; TYPE_1__* clientinfo; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static qboolean FUNC_2( clientInfo_t *VAR_4 ) {
 int VAR_5;
 clientInfo_t *VAR_6;

 for ( VAR_5 = 0 ; VAR_5 < VAR_1.maxclients ; VAR_5++ ) {
  VAR_6 = &VAR_1.clientinfo[ VAR_5 ];
  if ( !VAR_6->infoValid ) {
   continue;
  }
  if ( VAR_6->deferred ) {
   continue;
  }
  if ( !FUNC_1( VAR_4->modelName, VAR_6->modelName )
   && !FUNC_1( VAR_4->skinName, VAR_6->skinName )
   && !FUNC_1( VAR_4->headModelName, VAR_6->headModelName )
   && !FUNC_1( VAR_4->headSkinName, VAR_6->headSkinName )
   && !FUNC_1( VAR_4->blueTeam, VAR_6->blueTeam )
   && !FUNC_1( VAR_4->redTeam, VAR_6->redTeam )
   && (VAR_1.gametype < VAR_0 || VAR_4->team == VAR_6->team) ) {


   VAR_4->deferred = VAR_2;

   FUNC_0( VAR_6, VAR_4 );

   return VAR_3;
  }
 }


 return VAR_2;
}
