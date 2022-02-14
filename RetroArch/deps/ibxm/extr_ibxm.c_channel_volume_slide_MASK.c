
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct channel {int vol_slide_param; scalar_t__ fx_count; int volume; TYPE_2__* replay; } ;
struct TYPE_4__ {TYPE_1__* module; } ;
struct TYPE_3__ {scalar_t__ fast_vol_slides; } ;



__attribute__((used)) static void FUNC_0( struct channel *VAR_0 ) {
 int VAR_1 = VAR_0->vol_slide_param >> 4;
 int VAR_2 = VAR_0->vol_slide_param & 0xF;
 if( VAR_2 == 0xF && VAR_1 > 0 ) {

  if( VAR_0->fx_count == 0 ) {
   VAR_0->volume += VAR_1;
  }
 } else if( VAR_1 == 0xF && VAR_2 > 0 ) {

  if( VAR_0->fx_count == 0 ) {
   VAR_0->volume -= VAR_2;
  }
 } else if( VAR_0->fx_count > 0 || VAR_0->replay->module->fast_vol_slides ) {

  VAR_0->volume += VAR_1 - VAR_2;
 }
 if( VAR_0->volume > 64 ) {
  VAR_0->volume = 64;
 }
 if( VAR_0->volume < 0 ) {
  VAR_0->volume = 0;
 }
}
