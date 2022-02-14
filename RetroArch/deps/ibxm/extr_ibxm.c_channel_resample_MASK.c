
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sample {short* data; int loop_length; int loop_start; } ;
struct channel {int ampl; int pann; int sample_idx; int sample_fra; int freq; struct sample* sample; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0( struct channel *VAR_2, int *VAR_3,
  int VAR_4, int VAR_5, int VAR_6, int VAR_7 ) {
 struct sample *VAR_8 = VAR_2->sample;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 short *VAR_21 = VAR_2->sample->data;
 if( VAR_2->ampl > 0 ) {
  VAR_9 = VAR_2->ampl * ( 255 - VAR_2->pann ) >> 8;
  VAR_10 = VAR_2->ampl * VAR_2->pann >> 8;
  VAR_11 = VAR_2->sample_idx;
  VAR_12 = VAR_2->sample_fra;
  VAR_13 = ( VAR_2->freq << ( VAR_1 - 3 ) ) / ( VAR_6 >> 3 );
  VAR_14 = VAR_8->loop_length;
  VAR_15 = VAR_8->loop_start + VAR_14;
  VAR_16 = VAR_4 * 2;
  VAR_17 = ( VAR_4 + VAR_5 ) * 2;
  if( VAR_7 ) {
   while( VAR_16 < VAR_17 ) {
    if( VAR_11 >= VAR_15 ) {
     if( VAR_14 > 1 ) {
      while( VAR_11 >= VAR_15 ) {
       VAR_11 -= VAR_14;
      }
     } else {
      break;
     }
    }
    VAR_20 = VAR_21[ VAR_11 ];
    VAR_19 = VAR_21[ VAR_11 + 1 ] - VAR_20;
    VAR_18 = ( ( VAR_19 * VAR_12 ) >> VAR_1 ) + VAR_20;
    VAR_3[ VAR_16++ ] += ( VAR_18 * VAR_9 ) >> VAR_1;
    VAR_3[ VAR_16++ ] += ( VAR_18 * VAR_10 ) >> VAR_1;
    VAR_12 += VAR_13;
    VAR_11 += VAR_12 >> VAR_1;
    VAR_12 &= VAR_0;
   }
  } else {
   while( VAR_16 < VAR_17 ) {
    if( VAR_11 >= VAR_15 ) {
     if( VAR_14 > 1 ) {
      while( VAR_11 >= VAR_15 ) {
       VAR_11 -= VAR_14;
      }
     } else {
      break;
     }
    }
    VAR_18 = VAR_21[ VAR_11 ];
    VAR_3[ VAR_16++ ] += ( VAR_18 * VAR_9 ) >> VAR_1;
    VAR_3[ VAR_16++ ] += ( VAR_18 * VAR_10 ) >> VAR_1;
    VAR_12 += VAR_13;
    VAR_11 += VAR_12 >> VAR_1;
    VAR_12 &= VAR_0;
   }
  }
 }
}
