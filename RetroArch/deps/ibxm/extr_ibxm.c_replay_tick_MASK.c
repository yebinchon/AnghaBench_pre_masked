
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct replay {scalar_t__ tick; scalar_t__ speed; int** play_count; size_t seq_pos; size_t row; int * channels; TYPE_1__* module; } ;
struct TYPE_2__ {int num_channels; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct replay*) ;

__attribute__((used)) static int FUNC_2( struct replay *VAR_0 ) {
 int VAR_1, VAR_2, VAR_3 = 1;
 if( --VAR_0->tick <= 0 ) {
  VAR_0->tick = VAR_0->speed;
  FUNC_1( VAR_0 );
 } else {
  VAR_2 = VAR_0->module->num_channels;
  for( VAR_1 = 0; VAR_1 < VAR_2; VAR_1++ ) {
   FUNC_0( &VAR_0->channels[ VAR_1 ] );
  }
 }
 if( VAR_0->play_count && VAR_0->play_count[ 0 ] ) {
  VAR_3 = VAR_0->play_count[ VAR_0->seq_pos ][ VAR_0->row ] - 1;
 }
 return VAR_3;
}
