
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int effect; scalar_t__ param; int volume; } ;
struct channel {scalar_t__ fx_count; int volume; int panning; int gvol_slide_param; int pan_slide_param; int arpeggio_add; int arpeggio_param; int vibrato_speed; int vibrato_phase; TYPE_2__ note; int sample_fra; int sample_idx; TYPE_1__* replay; int tremolo_speed; int tremolo_phase; int porta_down_param; int porta_up_param; int retrig_count; scalar_t__ vibrato_add; } ;
struct TYPE_3__ {int global_vol; } ;


 int FUNC_0 (struct channel*) ;
 int FUNC_1 (struct channel*) ;
 int FUNC_2 (struct channel*) ;
 int FUNC_3 (struct channel*,int ) ;
 int FUNC_4 (struct channel*,int ) ;
 int FUNC_5 (struct channel*) ;
 int FUNC_6 (struct channel*) ;
 int FUNC_7 (struct channel*) ;
 int FUNC_8 (struct channel*) ;
 int FUNC_9 (struct channel*) ;
 int FUNC_10 (struct channel*) ;
 int FUNC_11 (struct channel*,int) ;
 int FUNC_12 (struct channel*) ;

__attribute__((used)) static void FUNC_13( struct channel *VAR_0 ) {
 VAR_0->vibrato_add = 0;
 VAR_0->fx_count++;
 VAR_0->retrig_count++;
 if( !( VAR_0->note.effect == 0x7D && VAR_0->fx_count <= VAR_0->note.param ) ) {
  switch( VAR_0->note.volume & 0xF0 ) {
   case 0x60:
    VAR_0->volume -= VAR_0->note.volume & 0xF;
    if( VAR_0->volume < 0 ) {
     VAR_0->volume = 0;
    }
    break;
   case 0x70:
    VAR_0->volume += VAR_0->note.volume & 0xF;
    if( VAR_0->volume > 64 ) {
     VAR_0->volume = 64;
    }
    break;
   case 0xB0:
    VAR_0->vibrato_phase += VAR_0->vibrato_speed;
    FUNC_11( VAR_0, 0 );
    break;
   case 0xD0:
    VAR_0->panning -= VAR_0->note.volume & 0xF;
    if( VAR_0->panning < 0 ) {
     VAR_0->panning = 0;
    }
    break;
   case 0xE0:
    VAR_0->panning += VAR_0->note.volume & 0xF;
    if( VAR_0->panning > 255 ) {
     VAR_0->panning = 255;
    }
    break;
   case 0xF0:
    FUNC_6( VAR_0 );
    break;
  }
 }
 switch( VAR_0->note.effect ) {
  case 0x01: case 0x86:
   FUNC_4( VAR_0, VAR_0->porta_up_param );
   break;
  case 0x02: case 0x85:
   FUNC_3( VAR_0, VAR_0->porta_down_param );
   break;
  case 0x03: case 0x87:
   FUNC_6( VAR_0 );
   break;
  case 0x04: case 0x88:
   VAR_0->vibrato_phase += VAR_0->vibrato_speed;
   FUNC_11( VAR_0, 0 );
   break;
  case 0x05: case 0x8C:
   FUNC_6( VAR_0 );
   FUNC_12( VAR_0 );
   break;
  case 0x06: case 0x8B:
   VAR_0->vibrato_phase += VAR_0->vibrato_speed;
   FUNC_11( VAR_0, 0 );
   FUNC_12( VAR_0 );
   break;
  case 0x07: case 0x92:
   VAR_0->tremolo_phase += VAR_0->tremolo_speed;
   FUNC_7( VAR_0 );
   break;
  case 0x0A: case 0x84:
   FUNC_12( VAR_0 );
   break;
  case 0x11:
   VAR_0->replay->global_vol = VAR_0->replay->global_vol
    + ( VAR_0->gvol_slide_param >> 4 )
    - ( VAR_0->gvol_slide_param & 0xF );
   if( VAR_0->replay->global_vol < 0 ) {
    VAR_0->replay->global_vol = 0;
   }
   if( VAR_0->replay->global_vol > 64 ) {
    VAR_0->replay->global_vol = 64;
   }
   break;
  case 0x19:
   VAR_0->panning = VAR_0->panning
    + ( VAR_0->pan_slide_param >> 4 )
    - ( VAR_0->pan_slide_param & 0xF );
   if( VAR_0->panning < 0 ) {
    VAR_0->panning = 0;
   }
   if( VAR_0->panning > 255 ) {
    VAR_0->panning = 255;
   }
   break;
  case 0x1B: case 0x91:
   FUNC_5( VAR_0 );
   break;
  case 0x1D: case 0x89:
   FUNC_8( VAR_0 );
   break;
  case 0x79:
   if( VAR_0->fx_count >= VAR_0->note.param ) {
    VAR_0->fx_count = 0;
    VAR_0->sample_idx = VAR_0->sample_fra = 0;
   }
   break;
  case 0x7C: case 0xFC:
   if( VAR_0->note.param == VAR_0->fx_count ) {
    VAR_0->volume = 0;
   }
   break;
  case 0x7D: case 0xFD:
   if( VAR_0->note.param == VAR_0->fx_count ) {
    FUNC_9( VAR_0 );
   }
   break;
  case 0x8A:
   if( VAR_0->fx_count == 1 ) {
    VAR_0->arpeggio_add = VAR_0->arpeggio_param >> 4;
   } else if( VAR_0->fx_count == 2 ) {
    VAR_0->arpeggio_add = VAR_0->arpeggio_param & 0xF;
   } else {
    VAR_0->arpeggio_add = VAR_0->fx_count = 0;
   }
   break;
  case 0x95:
   VAR_0->vibrato_phase += VAR_0->vibrato_speed;
   FUNC_11( VAR_0, 1 );
   break;
 }
 FUNC_0( VAR_0 );
 FUNC_2( VAR_0 );
 FUNC_1( VAR_0 );
 FUNC_10( VAR_0 );
}
