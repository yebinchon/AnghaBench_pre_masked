
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int moveflags; scalar_t__ grapplevisible_time; int client; int lastreachnum; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_9__ {int traveltype; } ;
typedef TYPE_2__ aas_reachability_t ;
struct TYPE_12__ {int (* Print ) (int ,char*) ;} ;
struct TYPE_11__ {int string; } ;
struct TYPE_10__ {scalar_t__ value; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(bot_movestate_t *VAR_7)
{
 aas_reachability_t VAR_8;

 FUNC_0(VAR_7->lastreachnum, &VAR_8);

 if ((VAR_8.traveltype & VAR_2) != VAR_3)
 {
  if ((VAR_7->moveflags & VAR_0) || VAR_7->grapplevisible_time)
  {
   if (VAR_6->value)
    FUNC_1(VAR_7->client, VAR_5->string);
   VAR_7->moveflags &= ~VAR_0;
   VAR_7->grapplevisible_time = 0;



  }
 }
}
