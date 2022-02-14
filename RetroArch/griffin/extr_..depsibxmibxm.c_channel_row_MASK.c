
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct note {int effect; scalar_t__ param; } ;
struct channel {int porta_up_param; int porta_down_param; int tone_porta_param; int vibrato_speed; int vibrato_depth; int vol_slide_param; int tremolo_speed; int tremolo_depth; int panning; int volume; int gvol_slide_param; int vol_env_tick; int pan_env_tick; int pan_slide_param; int retrig_volume; int retrig_ticks; int tremor_on_ticks; int tremor_off_ticks; int xfine_porta_param; int fine_porta_up_param; int fine_porta_down_param; int vibrato_type; int tremolo_type; int fine_vslide_up_param; int fine_vslide_down_param; int arpeggio_param; struct note note; int key_on; TYPE_1__* replay; scalar_t__ fx_count; scalar_t__ arpeggio_add; scalar_t__ tremolo_add; scalar_t__ vibrato_add; int retrig_count; } ;
struct TYPE_2__ {int global_vol; } ;


 int FUNC_0 (struct channel*) ;
 int FUNC_1 (struct channel*) ;
 int FUNC_2 (struct channel*) ;
 int FUNC_3 (struct channel*,int) ;
 int FUNC_4 (struct channel*,int) ;
 int FUNC_5 (struct channel*) ;
 int FUNC_6 (struct channel*) ;
 int FUNC_7 (struct channel*) ;
 int FUNC_8 (struct channel*) ;
 int FUNC_9 (struct channel*) ;
 int FUNC_10 (struct channel*,int) ;
 int FUNC_11 (struct channel*) ;

__attribute__((used)) static void FUNC_12( struct channel *VAR_0, struct note *VAR_1 ) {
 VAR_0->note = *VAR_1;
 VAR_0->retrig_count++;
 VAR_0->vibrato_add = VAR_0->tremolo_add = VAR_0->arpeggio_add = VAR_0->fx_count = 0;
 if( !( ( VAR_1->effect == 0x7D || VAR_1->effect == 0xFD ) && VAR_1->param > 0 ) ) {

  FUNC_8( VAR_0 );
 }
 switch( VAR_0->note.effect ) {
  case 0x01: case 0x86:
   if( VAR_0->note.param > 0 ) {
    VAR_0->porta_up_param = VAR_0->note.param;
   }
   FUNC_4( VAR_0, VAR_0->porta_up_param );
   break;
  case 0x02: case 0x85:
   if( VAR_0->note.param > 0 ) {
    VAR_0->porta_down_param = VAR_0->note.param;
   }
   FUNC_3( VAR_0, VAR_0->porta_down_param );
   break;
  case 0x03: case 0x87:
   if( VAR_0->note.param > 0 ) {
    VAR_0->tone_porta_param = VAR_0->note.param;
   }
   break;
  case 0x04: case 0x88:
   if( ( VAR_0->note.param >> 4 ) > 0 ) {
    VAR_0->vibrato_speed = VAR_0->note.param >> 4;
   }
   if( ( VAR_0->note.param & 0xF ) > 0 ) {
    VAR_0->vibrato_depth = VAR_0->note.param & 0xF;
   }
   FUNC_10( VAR_0, 0 );
   break;
  case 0x05: case 0x8C:
   if( VAR_0->note.param > 0 ) {
    VAR_0->vol_slide_param = VAR_0->note.param;
   }
   FUNC_11( VAR_0 );
   break;
  case 0x06: case 0x8B:
   if( VAR_0->note.param > 0 ) {
    VAR_0->vol_slide_param = VAR_0->note.param;
   }
   FUNC_10( VAR_0, 0 );
   FUNC_11( VAR_0 );
   break;
  case 0x07: case 0x92:
   if( ( VAR_0->note.param >> 4 ) > 0 ) {
    VAR_0->tremolo_speed = VAR_0->note.param >> 4;
   }
   if( ( VAR_0->note.param & 0xF ) > 0 ) {
    VAR_0->tremolo_depth = VAR_0->note.param & 0xF;
   }
   FUNC_6( VAR_0 );
   break;
  case 0x08:
   VAR_0->panning = ( VAR_0->note.param < 128 ) ? ( VAR_0->note.param << 1 ) : 255;
   break;
  case 0x0A: case 0x84:
   if( VAR_0->note.param > 0 ) {
    VAR_0->vol_slide_param = VAR_0->note.param;
   }
   FUNC_11( VAR_0 );
   break;
  case 0x0C:
   VAR_0->volume = VAR_0->note.param >= 64 ? 64 : VAR_0->note.param & 0x3F;
   break;
  case 0x10: case 0x96:
   VAR_0->replay->global_vol = VAR_0->note.param >= 64 ? 64 : VAR_0->note.param & 0x3F;
   break;
  case 0x11:
   if( VAR_0->note.param > 0 ) {
    VAR_0->gvol_slide_param = VAR_0->note.param;
   }
   break;
  case 0x14:
   VAR_0->key_on = 0;
   break;
  case 0x15:
   VAR_0->vol_env_tick = VAR_0->pan_env_tick = VAR_0->note.param & 0xFF;
   break;
  case 0x19:
   if( VAR_0->note.param > 0 ) {
    VAR_0->pan_slide_param = VAR_0->note.param;
   }
   break;
  case 0x1B: case 0x91:
   if( ( VAR_0->note.param >> 4 ) > 0 ) {
    VAR_0->retrig_volume = VAR_0->note.param >> 4;
   }
   if( ( VAR_0->note.param & 0xF ) > 0 ) {
    VAR_0->retrig_ticks = VAR_0->note.param & 0xF;
   }
   FUNC_5( VAR_0 );
   break;
  case 0x1D: case 0x89:
   if( ( VAR_0->note.param >> 4 ) > 0 ) {
    VAR_0->tremor_on_ticks = VAR_0->note.param >> 4;
   }
   if( ( VAR_0->note.param & 0xF ) > 0 ) {
    VAR_0->tremor_off_ticks = VAR_0->note.param & 0xF;
   }
   FUNC_7( VAR_0 );
   break;
  case 0x21:
   if( VAR_0->note.param > 0 ) {
    VAR_0->xfine_porta_param = VAR_0->note.param;
   }
   switch( VAR_0->xfine_porta_param & 0xF0 ) {
    case 0x10:
     FUNC_4( VAR_0, 0xE0 | ( VAR_0->xfine_porta_param & 0xF ) );
     break;
    case 0x20:
     FUNC_3( VAR_0, 0xE0 | ( VAR_0->xfine_porta_param & 0xF ) );
     break;
   }
   break;
  case 0x71:
   if( VAR_0->note.param > 0 ) {
    VAR_0->fine_porta_up_param = VAR_0->note.param;
   }
   FUNC_4( VAR_0, 0xF0 | ( VAR_0->fine_porta_up_param & 0xF ) );
   break;
  case 0x72:
   if( VAR_0->note.param > 0 ) {
    VAR_0->fine_porta_down_param = VAR_0->note.param;
   }
   FUNC_3( VAR_0, 0xF0 | ( VAR_0->fine_porta_down_param & 0xF ) );
   break;
  case 0x74: case 0xF3:
   if( VAR_0->note.param < 8 ) {
    VAR_0->vibrato_type = VAR_0->note.param;
   }
   break;
  case 0x77: case 0xF4:
   if( VAR_0->note.param < 8 ) {
    VAR_0->tremolo_type = VAR_0->note.param;
   }
   break;
  case 0x7A:
   if( VAR_0->note.param > 0 ) {
    VAR_0->fine_vslide_up_param = VAR_0->note.param;
   }
   VAR_0->volume += VAR_0->fine_vslide_up_param;
   if( VAR_0->volume > 64 ) {
    VAR_0->volume = 64;
   }
   break;
  case 0x7B:
   if( VAR_0->note.param > 0 ) {
    VAR_0->fine_vslide_down_param = VAR_0->note.param;
   }
   VAR_0->volume -= VAR_0->fine_vslide_down_param;
   if( VAR_0->volume < 0 ) {
    VAR_0->volume = 0;
   }
   break;
  case 0x7C: case 0xFC:
   if( VAR_0->note.param <= 0 ) {
    VAR_0->volume = 0;
   }
   break;
  case 0x8A:
   if( VAR_0->note.param > 0 ) {
    VAR_0->arpeggio_param = VAR_0->note.param;
   }
   break;
  case 0x95:
   if( ( VAR_0->note.param >> 4 ) > 0 ) {
    VAR_0->vibrato_speed = VAR_0->note.param >> 4;
   }
   if( ( VAR_0->note.param & 0xF ) > 0 ) {
    VAR_0->vibrato_depth = VAR_0->note.param & 0xF;
   }
   FUNC_10( VAR_0, 1 );
   break;
  case 0xF8:
   VAR_0->panning = VAR_0->note.param * 17;
   break;
 }
 FUNC_0( VAR_0 );
 FUNC_2( VAR_0 );
 FUNC_1( VAR_0 );
 FUNC_9( VAR_0 );
}
