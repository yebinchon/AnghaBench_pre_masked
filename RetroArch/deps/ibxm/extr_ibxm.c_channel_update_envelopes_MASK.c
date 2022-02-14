
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct channel {scalar_t__ fadeout_vol; int key_on; void* pan_env_tick; TYPE_1__* instrument; void* vol_env_tick; } ;
struct TYPE_4__ {scalar_t__ enabled; } ;
struct TYPE_3__ {scalar_t__ vol_fadeout; TYPE_2__ pan_env; TYPE_2__ vol_env; } ;


 void* FUNC_0 (TYPE_2__*,void*,int ) ;

__attribute__((used)) static void FUNC_1( struct channel *VAR_0 ) {
 if( VAR_0->instrument->vol_env.enabled ) {
  if( !VAR_0->key_on ) {
   VAR_0->fadeout_vol -= VAR_0->instrument->vol_fadeout;
   if( VAR_0->fadeout_vol < 0 ) {
    VAR_0->fadeout_vol = 0;
   }
  }
  VAR_0->vol_env_tick = FUNC_0( &VAR_0->instrument->vol_env,
   VAR_0->vol_env_tick, VAR_0->key_on );
 }
 if( VAR_0->instrument->pan_env.enabled ) {
  VAR_0->pan_env_tick = FUNC_0( &VAR_0->instrument->pan_env,
   VAR_0->pan_env_tick, VAR_0->key_on );
 }
}
