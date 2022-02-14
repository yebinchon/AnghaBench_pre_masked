
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adpcm_state {int sample; int index; } ;


 scalar_t__* VAR_0 ;
 int* VAR_1 ;

void FUNC_0( const char VAR_2[], short *VAR_3, int VAR_4, struct adpcm_state *VAR_5 ) {
    signed char *VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15;

    VAR_7 = 0;
    VAR_6 = (signed char *)VAR_2;

    VAR_11 = VAR_5->sample;
    VAR_13 = VAR_5->index;
    VAR_10 = VAR_1[VAR_13];

    VAR_15 = 0;
    VAR_14 = 0;
    for ( ; VAR_4 > 0 ; VAR_4-- ) {


  if ( VAR_15 ) {
   VAR_9 = VAR_14 & 0xf;
  } else {
   VAR_14 = *VAR_6++;
   VAR_9 = (VAR_14 >> 4) & 0xf;
  }
  VAR_15 = !VAR_15;


  VAR_13 += VAR_0[VAR_9];
  if ( VAR_13 < 0 ) VAR_13 = 0;
  if ( VAR_13 > 88 ) VAR_13 = 88;


  VAR_8 = VAR_9 & 8;
  VAR_9 = VAR_9 & 7;






  VAR_12 = VAR_10 >> 3;
  if ( VAR_9 & 4 ) VAR_12 += VAR_10;
  if ( VAR_9 & 2 ) VAR_12 += VAR_10>>1;
  if ( VAR_9 & 1 ) VAR_12 += VAR_10>>2;

  if ( VAR_8 )
    VAR_11 -= VAR_12;
  else
    VAR_11 += VAR_12;


  if ( VAR_11 > 32767 )
    VAR_11 = 32767;
  else if ( VAR_11 < -32768 )
    VAR_11 = -32768;


  VAR_10 = VAR_1[VAR_13];


  VAR_3[VAR_7] = VAR_11;
  VAR_7++;
    }

    VAR_5->sample = VAR_11;
    VAR_5->index = VAR_13;
}
