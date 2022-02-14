
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {TYPE_5__* client; } ;
typedef TYPE_6__ gentity_t ;
struct TYPE_16__ {int time; } ;
struct TYPE_12__ {int lasthurtcarrier; } ;
struct TYPE_13__ {TYPE_3__ teamState; } ;
struct TYPE_11__ {scalar_t__ sessionTeam; } ;
struct TYPE_10__ {scalar_t__ generic1; scalar_t__* powerups; } ;
struct TYPE_14__ {TYPE_4__ pers; TYPE_2__ sess; TYPE_1__ ps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_7__ VAR_3 ;

void FUNC_0(gentity_t *VAR_4, gentity_t *VAR_5)
{
 int VAR_6;

 if (!VAR_4->client || !VAR_5->client)
  return;

 if (VAR_4->client->sess.sessionTeam == VAR_2)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_1;


 if (VAR_4->client->ps.powerups[VAR_6] &&
  VAR_4->client->sess.sessionTeam != VAR_5->client->sess.sessionTeam)
  VAR_5->client->pers.teamState.lasthurtcarrier = VAR_3.time;


 if (VAR_4->client->ps.generic1 &&
  VAR_4->client->sess.sessionTeam != VAR_5->client->sess.sessionTeam)
  VAR_5->client->pers.teamState.lasthurtcarrier = VAR_3.time;
}
