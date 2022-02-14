
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ freetime; int classname; scalar_t__ inuse; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_9__ {int num_entities; scalar_t__ startTime; int time; TYPE_1__* clients; int gentities; } ;
struct TYPE_7__ {int ps; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_3 (int ,int,int,int *,int) ;

gentity_t *FUNC_4( void ) {
 int VAR_5, VAR_6;
 gentity_t *VAR_7;

 VAR_7 = ((void*)0);
 VAR_5 = 0;
 for ( VAR_6 = 0 ; VAR_6 < 2 ; VAR_6++ ) {


  VAR_7 = &VAR_3[VAR_1];
  for ( VAR_5 = VAR_1 ; VAR_5<VAR_4.num_entities ; VAR_5++, VAR_7++) {
   if ( VAR_7->inuse ) {
    continue;
   }



   if ( !VAR_6 && VAR_7->freetime > VAR_4.startTime + 2000 && VAR_4.time - VAR_7->freetime < 1000 ) {
    continue;
   }


   FUNC_1( VAR_7 );
   return VAR_7;
  }
  if ( VAR_5 != VAR_2 ) {
   break;
  }
 }
 if ( VAR_5 == VAR_0 ) {
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
   FUNC_2("%4i: %s\n", VAR_5, VAR_3[VAR_5].classname);
  }
  FUNC_0( "G_Spawn: no free entities" );
 }


 VAR_4.num_entities++;


 FUNC_3( VAR_4.gentities, VAR_4.num_entities, sizeof( gentity_t ),
  &VAR_4.clients[0].ps, sizeof( VAR_4.clients[0] ) );

 FUNC_1( VAR_7 );
 return VAR_7;
}
