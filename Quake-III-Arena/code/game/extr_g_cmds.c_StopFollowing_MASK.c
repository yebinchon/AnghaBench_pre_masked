
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int svFlags; } ;
struct TYPE_11__ {TYPE_4__* client; TYPE_1__ r; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_8__ {TYPE_5__* clientNum; int pm_flags; void** persistant; } ;
struct TYPE_9__ {int spectatorState; void* sessionTeam; } ;
struct TYPE_10__ {TYPE_2__ ps; TYPE_3__ sess; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;

void FUNC_0( gentity_t *VAR_6 ) {
 VAR_6->client->ps.persistant[ VAR_0 ] = VAR_4;
 VAR_6->client->sess.sessionTeam = VAR_4;
 VAR_6->client->sess.spectatorState = VAR_2;
 VAR_6->client->ps.pm_flags &= ~VAR_1;
 VAR_6->r.svFlags &= ~VAR_3;
 VAR_6->client->ps.clientNum = VAR_6 - VAR_5;
}
