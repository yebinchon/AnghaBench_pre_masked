
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sample {scalar_t__ loop_start; int loop_length; } ;
struct channel {int freq; int sample_fra; scalar_t__ sample_idx; struct sample* sample; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0( struct channel *VAR_2, int VAR_3, int VAR_4 ) {
 struct sample *VAR_5 = VAR_2->sample;
 int VAR_6 = ( VAR_2->freq << ( VAR_1 - 3 ) ) / ( VAR_4 >> 3 );
 VAR_2->sample_fra += VAR_6 * VAR_3;
 VAR_2->sample_idx += VAR_2->sample_fra >> VAR_1;
 if( VAR_2->sample_idx > VAR_5->loop_start ) {
  if( VAR_5->loop_length > 1 ) {
   VAR_2->sample_idx = VAR_5->loop_start
    + ( VAR_2->sample_idx - VAR_5->loop_start ) % VAR_5->loop_length;
  } else {
   VAR_2->sample_idx = VAR_5->loop_start;
  }
 }
 VAR_2->sample_fra &= VAR_0;
}
