
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int member_0; int member_1; int member_2; } ;
typedef TYPE_2__ vec3_t ;
struct TYPE_8__ {int areanum; int maxs; int mins; int origin; } ;
struct TYPE_10__ {int * prev; struct TYPE_10__* next; TYPE_1__ goal; int name; } ;
typedef TYPE_3__ bot_waypoint_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_2__,int ) ;
 TYPE_3__* VAR_1 ;

bot_waypoint_t *FUNC_3(char *VAR_2, vec3_t VAR_3, int VAR_4) {
 bot_waypoint_t *VAR_5;
 vec3_t VAR_6 = {-8, -8, -8}, VAR_7 = {8, 8, 8};

 VAR_5 = VAR_1;
 if ( !VAR_5 ) {
  FUNC_0( VAR_0, "BotCreateWayPoint: Out of waypoints\n" );
  return ((void*)0);
 }
 VAR_1 = VAR_1->next;

 FUNC_1( VAR_5->name, VAR_2, sizeof(VAR_5->name) );
 FUNC_2(VAR_3, VAR_5->goal.origin);
 FUNC_2(VAR_6, VAR_5->goal.mins);
 FUNC_2(VAR_7, VAR_5->goal.maxs);
 VAR_5->goal.areanum = VAR_4;
 VAR_5->next = ((void*)0);
 VAR_5->prev = ((void*)0);
 return VAR_5;
}
