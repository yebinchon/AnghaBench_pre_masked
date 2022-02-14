
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adpcm_state {int sample; int index; } ;


 scalar_t__* VAR_0 ;
 int* VAR_1 ;

void FUNC_0( short VAR_2[], char VAR_3[], int VAR_4, struct adpcm_state *VAR_5 ) {
    short *VAR_6;
    signed char *VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15;
    int VAR_16;
    int VAR_17;

    VAR_7 = (signed char *)VAR_3;
    VAR_6 = VAR_2;

    VAR_13 = VAR_5->sample;
    VAR_15 = VAR_5->index;
    VAR_12 = VAR_1[VAR_15];

 VAR_16 = 0;
    VAR_17 = 1;

    for ( ; VAR_4 > 0 ; VAR_4-- ) {
  VAR_8 = *VAR_6++;


  VAR_11 = VAR_8 - VAR_13;
  VAR_9 = (VAR_11 < 0) ? 8 : 0;
  if ( VAR_9 ) VAR_11 = (-VAR_11);
  VAR_10 = 0;
  VAR_14 = (VAR_12 >> 3);

  if ( VAR_11 >= VAR_12 ) {
   VAR_10 = 4;
   VAR_11 -= VAR_12;
   VAR_14 += VAR_12;
  }
  VAR_12 >>= 1;
  if ( VAR_11 >= VAR_12 ) {
   VAR_10 |= 2;
   VAR_11 -= VAR_12;
   VAR_14 += VAR_12;
  }
  VAR_12 >>= 1;
  if ( VAR_11 >= VAR_12 ) {
   VAR_10 |= 1;
   VAR_14 += VAR_12;
  }


  if ( VAR_9 )
    VAR_13 -= VAR_14;
  else
    VAR_13 += VAR_14;


  if ( VAR_13 > 32767 )
    VAR_13 = 32767;
  else if ( VAR_13 < -32768 )
    VAR_13 = -32768;


  VAR_10 |= VAR_9;

  VAR_15 += VAR_0[VAR_10];
  if ( VAR_15 < 0 ) VAR_15 = 0;
  if ( VAR_15 > 88 ) VAR_15 = 88;
  VAR_12 = VAR_1[VAR_15];


  if ( VAR_17 ) {
   VAR_16 = (VAR_10 << 4) & 0xf0;
  } else {
   *VAR_7++ = (VAR_10 & 0x0f) | VAR_16;
  }
  VAR_17 = !VAR_17;
    }


    if ( !VAR_17 )
      *VAR_7++ = VAR_16;

    VAR_5->sample = VAR_13;
    VAR_5->index = VAR_15;
}
