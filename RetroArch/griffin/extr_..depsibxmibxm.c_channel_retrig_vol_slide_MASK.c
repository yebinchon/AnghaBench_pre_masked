
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel {scalar_t__ retrig_count; scalar_t__ retrig_ticks; scalar_t__ sample_idx; scalar_t__ sample_fra; int retrig_volume; int volume; } ;



__attribute__((used)) static void FUNC_0( struct channel *VAR_0 ) {
 if( VAR_0->retrig_count >= VAR_0->retrig_ticks ) {
  VAR_0->retrig_count = VAR_0->sample_idx = VAR_0->sample_fra = 0;
  switch( VAR_0->retrig_volume ) {
   case 0x1: VAR_0->volume = VAR_0->volume - 1; break;
   case 0x2: VAR_0->volume = VAR_0->volume - 2; break;
   case 0x3: VAR_0->volume = VAR_0->volume - 4; break;
   case 0x4: VAR_0->volume = VAR_0->volume - 8; break;
   case 0x5: VAR_0->volume = VAR_0->volume - 16; break;
   case 0x6: VAR_0->volume = VAR_0->volume * 2 / 3; break;
   case 0x7: VAR_0->volume = VAR_0->volume >> 1; break;
   case 0x8: break;
   case 0x9: VAR_0->volume = VAR_0->volume + 1; break;
   case 0xA: VAR_0->volume = VAR_0->volume + 2; break;
   case 0xB: VAR_0->volume = VAR_0->volume + 4; break;
   case 0xC: VAR_0->volume = VAR_0->volume + 8; break;
   case 0xD: VAR_0->volume = VAR_0->volume + 16; break;
   case 0xE: VAR_0->volume = VAR_0->volume * 3 / 2; break;
   case 0xF: VAR_0->volume = VAR_0->volume << 1; break;
  }
  if( VAR_0->volume < 0 ) {
   VAR_0->volume = 0;
  }
  if( VAR_0->volume > 64 ) {
   VAR_0->volume = 64;
  }
 }
}
