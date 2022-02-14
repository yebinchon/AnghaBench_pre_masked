
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int trace_t ;
struct TYPE_9__ {scalar_t__ moverState; scalar_t__ nextthink; TYPE_2__* client; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_10__ {scalar_t__ time; } ;
struct TYPE_7__ {scalar_t__* stats; } ;
struct TYPE_8__ {TYPE_1__ ps; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_4__ VAR_2 ;

void FUNC_0( gentity_t *VAR_3, gentity_t *VAR_4, trace_t *VAR_5 ) {
 if ( !VAR_4->client || VAR_4->client->ps.stats[VAR_1] <= 0 ) {
  return;
 }


 if ( VAR_3->moverState == VAR_0 ) {
  VAR_3->nextthink = VAR_2.time + 1000;
 }
}
