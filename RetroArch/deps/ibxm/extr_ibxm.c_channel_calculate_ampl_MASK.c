
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct channel {int volume; int tremolo_add; int fadeout_vol; int ampl; int panning; int pann; int pan_env_tick; TYPE_3__* instrument; TYPE_2__* replay; int vol_env_tick; scalar_t__ key_on; } ;
struct TYPE_8__ {scalar_t__ enabled; } ;
struct TYPE_7__ {TYPE_4__ pan_env; TYPE_4__ vol_env; } ;
struct TYPE_6__ {int global_vol; TYPE_1__* module; } ;
struct TYPE_5__ {int gain; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_1( struct channel *VAR_1 ) {
 int VAR_2, VAR_3, VAR_4 = 32, VAR_5 = VAR_1->key_on ? 64 : 0;
 if( VAR_1->instrument->vol_env.enabled ) {
  VAR_5 = FUNC_0( &VAR_1->instrument->vol_env, VAR_1->vol_env_tick );
 }
 VAR_2 = VAR_1->volume + VAR_1->tremolo_add;
 if( VAR_2 > 64 ) {
  VAR_2 = 64;
 }
 if( VAR_2 < 0 ) {
  VAR_2 = 0;
 }
 VAR_2 = ( VAR_2 * VAR_1->replay->module->gain * VAR_0 ) >> 13;
 VAR_2 = ( VAR_2 * VAR_1->fadeout_vol ) >> 15;
 VAR_1->ampl = ( VAR_2 * VAR_1->replay->global_vol * VAR_5 ) >> 12;
 if( VAR_1->instrument->pan_env.enabled ) {
  VAR_4 = FUNC_0( &VAR_1->instrument->pan_env, VAR_1->pan_env_tick );
 }
 VAR_3 = ( VAR_1->panning < 128 ) ? VAR_1->panning : ( 255 - VAR_1->panning );
 VAR_1->pann = VAR_1->panning + ( VAR_3 * ( VAR_4 - 32 ) >> 5 );
}
