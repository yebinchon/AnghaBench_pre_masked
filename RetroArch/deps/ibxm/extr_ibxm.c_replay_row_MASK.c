
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay {scalar_t__ next_row; int break_pos; int seq_pos; size_t row; int** play_count; scalar_t__ pl_count; int tick; int speed; int tempo; int pl_chan; struct channel* channels; struct module* module; } ;
struct pattern {size_t num_rows; } ;
struct note {int effect; int param; } ;
struct module {int sequence_len; size_t* sequence; size_t num_patterns; int num_channels; struct pattern* patterns; } ;
struct channel {int pl_row; } ;


 int FUNC_0 (struct channel*,struct note*) ;
 int FUNC_1 (struct pattern*,int,int,struct note*) ;

__attribute__((used)) static void FUNC_2( struct replay *VAR_0 ) {
 int VAR_1, VAR_2;
 struct note VAR_3;
 struct pattern *VAR_4;
 struct channel *VAR_5;
 struct module *VAR_6 = VAR_0->module;
 if( VAR_0->next_row < 0 ) {
  VAR_0->break_pos = VAR_0->seq_pos + 1;
  VAR_0->next_row = 0;
 }
 if( VAR_0->break_pos >= 0 ) {
  if( VAR_0->break_pos >= VAR_6->sequence_len ) {
   VAR_0->break_pos = VAR_0->next_row = 0;
  }
  while( VAR_6->sequence[ VAR_0->break_pos ] >= VAR_6->num_patterns ) {
   VAR_0->break_pos++;
   if( VAR_0->break_pos >= VAR_6->sequence_len ) {
    VAR_0->break_pos = VAR_0->next_row = 0;
   }
  }
  VAR_0->seq_pos = VAR_0->break_pos;
  for( VAR_1 = 0; VAR_1 < VAR_6->num_channels; VAR_1++ ) {
   VAR_0->channels[ VAR_1 ].pl_row = 0;
  }
  VAR_0->break_pos = -1;
 }
 VAR_4 = &VAR_6->patterns[ VAR_6->sequence[ VAR_0->seq_pos ] ];
 VAR_0->row = VAR_0->next_row;
 if( VAR_0->row >= VAR_4->num_rows ) {
  VAR_0->row = 0;
 }
 if( VAR_0->play_count && VAR_0->play_count[ 0 ] ) {
  VAR_2 = VAR_0->play_count[ VAR_0->seq_pos ][ VAR_0->row ];
  if( VAR_0->pl_count < 0 && VAR_2 < 127 ) {
   VAR_0->play_count[ VAR_0->seq_pos ][ VAR_0->row ] = VAR_2 + 1;
  }
 }
 VAR_0->next_row = VAR_0->row + 1;
 if( VAR_0->next_row >= VAR_4->num_rows ) {
  VAR_0->next_row = -1;
 }
 for( VAR_1 = 0; VAR_1 < VAR_6->num_channels; VAR_1++ ) {
  VAR_5 = &VAR_0->channels[ VAR_1 ];
  FUNC_1( VAR_4, VAR_0->row, VAR_1, &VAR_3 );
  if( VAR_3.effect == 0xE ) {
   VAR_3.effect = 0x70 | ( VAR_3.param >> 4 );
   VAR_3.param &= 0xF;
  }
  if( VAR_3.effect == 0x93 ) {
   VAR_3.effect = 0xF0 | ( VAR_3.param >> 4 );
   VAR_3.param &= 0xF;
  }
  if( VAR_3.effect == 0 && VAR_3.param > 0 ) {
   VAR_3.effect = 0x8A;
  }
  FUNC_0( VAR_5, &VAR_3 );
  switch( VAR_3.effect ) {
   case 0x81:
    if( VAR_3.param > 0 ) {
     VAR_0->tick = VAR_0->speed = VAR_3.param;
    }
    break;
   case 0xB: case 0x82:
    if( VAR_0->pl_count < 0 ) {
     VAR_0->break_pos = VAR_3.param;
     VAR_0->next_row = 0;
    }
    break;
   case 0xD: case 0x83:
    if( VAR_0->pl_count < 0 ) {
     if( VAR_0->break_pos < 0 ) {
      VAR_0->break_pos = VAR_0->seq_pos + 1;
     }
     VAR_0->next_row = ( VAR_3.param >> 4 ) * 10 + ( VAR_3.param & 0xF );
    }
    break;
   case 0xF:
    if( VAR_3.param > 0 ) {
     if( VAR_3.param < 32 ) {
      VAR_0->tick = VAR_0->speed = VAR_3.param;
     } else {
      VAR_0->tempo = VAR_3.param;
     }
    }
    break;
   case 0x94:
    if( VAR_3.param > 32 ) {
     VAR_0->tempo = VAR_3.param;
    }
    break;
   case 0x76: case 0xFB :
    if( VAR_3.param == 0 ) {

     VAR_5->pl_row = VAR_0->row;
    }
    if( VAR_5->pl_row < VAR_0->row && VAR_0->break_pos < 0 ) {

     if( VAR_0->pl_count < 0 ) {

      VAR_0->pl_count = VAR_3.param;
      VAR_0->pl_chan = VAR_1;
     }
     if( VAR_0->pl_chan == VAR_1 ) {

      if( VAR_0->pl_count == 0 ) {

       VAR_5->pl_row = VAR_0->row + 1;
      } else {

       VAR_0->next_row = VAR_5->pl_row;
      }
      VAR_0->pl_count--;
     }
    }
    break;
   case 0x7E: case 0xFE:
    VAR_0->tick = VAR_0->speed + VAR_0->speed * VAR_3.param;
    break;
  }
 }
}
