
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sample {int volume; int panning; int loop_length; int fine_tune; int rel_note; } ;
struct TYPE_8__ {int instrument; int key; int effect; int param; int volume; } ;
struct channel {int volume; int panning; int period; int sample_off; int fadeout_vol; int key_on; int offset_param; int vibrato_speed; int vibrato_depth; int tone_porta_param; int porta_period; int sample_idx; int vibrato_type; int tremolo_type; scalar_t__ av_count; scalar_t__ retrig_count; scalar_t__ tremolo_phase; scalar_t__ vibrato_phase; scalar_t__ sample_fra; TYPE_2__* replay; struct sample* sample; TYPE_4__ note; TYPE_3__* instrument; scalar_t__ pan_env_tick; scalar_t__ vol_env_tick; } ;
struct TYPE_7__ {int* key_to_sample; struct sample* samples; } ;
struct TYPE_6__ {TYPE_1__* module; } ;
struct TYPE_5__ {int num_instruments; scalar_t__ linear_periods; TYPE_3__* instruments; } ;


 int VAR_0 ;
 int FUNC_0 (struct channel*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2( struct channel *VAR_1 ) {
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7 = VAR_1->note.instrument;
 struct sample *VAR_8;
 if( VAR_7 > 0 && VAR_7 <= VAR_1->replay->module->num_instruments ) {
  VAR_1->instrument = &VAR_1->replay->module->instruments[ VAR_7 ];
  VAR_2 = VAR_1->note.key < 97 ? VAR_1->note.key : 0;
  VAR_3 = VAR_1->instrument->key_to_sample[ VAR_2 ];
  VAR_8 = &VAR_1->instrument->samples[ VAR_3 ];
  VAR_1->volume = VAR_8->volume >= 64 ? 64 : VAR_8->volume & 0x3F;
  if( VAR_8->panning > 0 ) {
   VAR_1->panning = ( VAR_8->panning - 1 ) & 0xFF;
  }
  if( VAR_1->period > 0 && VAR_8->loop_length > 1 ) {

   VAR_1->sample = VAR_8;
  }
  VAR_1->sample_off = 0;
  VAR_1->vol_env_tick = VAR_1->pan_env_tick = 0;
  VAR_1->fadeout_vol = 32768;
  VAR_1->key_on = 1;
 }
 if( VAR_1->note.effect == 0x09 || VAR_1->note.effect == 0x8F ) {

  if( VAR_1->note.param > 0 ) {
   VAR_1->offset_param = VAR_1->note.param;
  }
  VAR_1->sample_off = VAR_1->offset_param << 8;
 }
 if( VAR_1->note.volume >= 0x10 && VAR_1->note.volume < 0x60 ) {
  VAR_1->volume = VAR_1->note.volume < 0x50 ? VAR_1->note.volume - 0x10 : 64;
 }
 switch( VAR_1->note.volume & 0xF0 ) {
  case 0x80:
   VAR_1->volume -= VAR_1->note.volume & 0xF;
   if( VAR_1->volume < 0 ) {
    VAR_1->volume = 0;
   }
   break;
  case 0x90:
   VAR_1->volume += VAR_1->note.volume & 0xF;
   if( VAR_1->volume > 64 ) {
    VAR_1->volume = 64;
   }
   break;
  case 0xA0:
   if( ( VAR_1->note.volume & 0xF ) > 0 ) {
    VAR_1->vibrato_speed = VAR_1->note.volume & 0xF;
   }
   break;
  case 0xB0:
   if( ( VAR_1->note.volume & 0xF ) > 0 ) {
    VAR_1->vibrato_depth = VAR_1->note.volume & 0xF;
   }
   FUNC_0( VAR_1, 0 );
   break;
  case 0xC0:
   VAR_1->panning = ( VAR_1->note.volume & 0xF ) * 17;
   break;
  case 0xF0:
   if( ( VAR_1->note.volume & 0xF ) > 0 ) {
    VAR_1->tone_porta_param = VAR_1->note.volume & 0xF;
   }
   break;
 }
 if( VAR_1->note.key > 0 ) {
  if( VAR_1->note.key > 96 ) {
   VAR_1->key_on = 0;
  } else {
   VAR_4 = ( VAR_1->note.volume & 0xF0 ) == 0xF0 ||
    VAR_1->note.effect == 0x03 || VAR_1->note.effect == 0x05 ||
    VAR_1->note.effect == 0x87 || VAR_1->note.effect == 0x8C;
   if( !VAR_4 ) {
    VAR_7 = VAR_1->instrument->key_to_sample[ VAR_1->note.key ];
    VAR_1->sample = &VAR_1->instrument->samples[ VAR_7 ];
   }
   VAR_6 = VAR_1->sample->fine_tune;
   if( VAR_1->note.effect == 0x75 || VAR_1->note.effect == 0xF2 ) {

    VAR_6 = ( ( VAR_1->note.param & 0xF ) << 4 ) - 128;
   }
   VAR_2 = VAR_1->note.key + VAR_1->sample->rel_note;
   if( VAR_2 < 1 ) {
    VAR_2 = 1;
   }
   if( VAR_2 > 120 ) {
    VAR_2 = 120;
   }
   VAR_5 = ( VAR_2 << 6 ) + ( VAR_6 >> 1 );
   if( VAR_1->replay->module->linear_periods ) {
    VAR_1->porta_period = 7744 - VAR_5;
   } else {
    VAR_1->porta_period = 29021 * FUNC_1( ( VAR_5 << VAR_0 ) / -768 ) >> VAR_0;
   }
   if( !VAR_4 ) {
    VAR_1->period = VAR_1->porta_period;
    VAR_1->sample_idx = VAR_1->sample_off;
    VAR_1->sample_fra = 0;
    if( VAR_1->vibrato_type < 4 ) {
     VAR_1->vibrato_phase = 0;
    }
    if( VAR_1->tremolo_type < 4 ) {
     VAR_1->tremolo_phase = 0;
    }
    VAR_1->retrig_count = VAR_1->av_count = 0;
   }
  }
 }
}
