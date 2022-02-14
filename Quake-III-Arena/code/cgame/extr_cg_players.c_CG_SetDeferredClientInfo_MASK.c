
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ team; void* deferred; int infoValid; int skinName; int modelName; } ;
typedef TYPE_1__ clientInfo_t ;
struct TYPE_8__ {int maxclients; scalar_t__ gametype; TYPE_1__* clientinfo; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_2__ VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static void FUNC_4( clientInfo_t *VAR_3 ) {
 int VAR_4;
 clientInfo_t *VAR_5;



 for ( VAR_4 = 0 ; VAR_4 < VAR_1.maxclients ; VAR_4++ ) {
  VAR_5 = &VAR_1.clientinfo[ VAR_4 ];
  if ( !VAR_5->infoValid || VAR_5->deferred ) {
   continue;
  }
  if ( FUNC_3( VAR_3->skinName, VAR_5->skinName ) ||
    FUNC_3( VAR_3->modelName, VAR_5->modelName ) ||


    (VAR_1.gametype >= VAR_0 && VAR_3->team != VAR_5->team) ) {
   continue;
  }

  FUNC_1( VAR_3 );
  return;
 }


 if ( VAR_1.gametype >= VAR_0 ) {
  for ( VAR_4 = 0 ; VAR_4 < VAR_1.maxclients ; VAR_4++ ) {
   VAR_5 = &VAR_1.clientinfo[ VAR_4 ];
   if ( !VAR_5->infoValid || VAR_5->deferred ) {
    continue;
   }
   if ( FUNC_3( VAR_3->skinName, VAR_5->skinName ) ||
    (VAR_1.gametype >= VAR_0 && VAR_3->team != VAR_5->team) ) {
    continue;
   }
   VAR_3->deferred = VAR_2;
   FUNC_0( VAR_5, VAR_3 );
   return;
  }




  FUNC_1( VAR_3 );
  return;
 }


 for ( VAR_4 = 0 ; VAR_4 < VAR_1.maxclients ; VAR_4++ ) {
  VAR_5 = &VAR_1.clientinfo[ VAR_4 ];
  if ( !VAR_5->infoValid ) {
   continue;
  }

  VAR_3->deferred = VAR_2;
  FUNC_0( VAR_5, VAR_3 );
  return;
 }


 FUNC_2( "CG_SetDeferredClientInfo: no valid clients!\n" );

 FUNC_1( VAR_3 );
}
