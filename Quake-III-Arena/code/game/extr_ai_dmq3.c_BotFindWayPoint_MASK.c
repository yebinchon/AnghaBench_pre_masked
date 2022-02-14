
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; struct TYPE_4__* next; } ;
typedef TYPE_1__ bot_waypoint_t ;


 int FUNC_0 (int ,char*) ;

bot_waypoint_t *FUNC_1(bot_waypoint_t *VAR_0, char *VAR_1) {
 bot_waypoint_t *VAR_2;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
  if (!FUNC_0(VAR_2->name, VAR_1)) return VAR_2;
 }
 return ((void*)0);
}
