
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int origin2; } ;
struct TYPE_13__ {scalar_t__ fly_sound_debounce_time; int noise_index; TYPE_3__* client; TYPE_1__ s; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_14__ {scalar_t__ time; } ;
struct TYPE_11__ {scalar_t__ pm_type; int velocity; scalar_t__* powerups; } ;
struct TYPE_12__ {TYPE_2__ ps; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,int ) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,int ) ;
 TYPE_5__ VAR_3 ;

void FUNC_2( gentity_t *VAR_4, gentity_t *VAR_5, gentity_t *VAR_6 ) {
 if ( !VAR_6->client ) {
  return;
 }

 if ( VAR_6->client->ps.pm_type != VAR_1 ) {
  return;
 }
 if ( VAR_6->client->ps.powerups[VAR_2] ) {
  return;
 }

 FUNC_1 (VAR_4->s.origin2, VAR_6->client->ps.velocity);


 if ( VAR_6->fly_sound_debounce_time < VAR_3.time ) {
  VAR_6->fly_sound_debounce_time = VAR_3.time + 1500;
  FUNC_0( VAR_6, VAR_0, VAR_4->noise_index );
 }
}
