
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sample {int volume; int loop_start; int loop_length; int rel_note; int fine_tune; short* data; } ;
struct pattern {int num_channels; int num_rows; char* data; } ;
struct module {int sequence_len; int num_instruments; int num_patterns; int fast_vol_slides; int default_gvol; int default_speed; int default_tempo; int c2_rate; int gain; int num_channels; unsigned char* sequence; unsigned char* default_panning; struct pattern* patterns; struct instrument* instruments; int name; } ;
struct instrument {int num_samples; int name; struct sample* samples; } ;
struct data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct data*,int,int,int ) ;
 int FUNC_2 (struct data*,int,int,short*) ;
 int FUNC_3 (struct data*,int,int,short*) ;
 int FUNC_4 (struct data*,int) ;
 int FUNC_5 (struct data*,int) ;
 int FUNC_6 (struct data*,int) ;
 int FUNC_7 (struct module*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static struct module* FUNC_10( struct data *VAR_2, char *VAR_3 ) {
 int VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14[ 32 ];
 int VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 char *VAR_30;
 struct instrument *VAR_31;
 struct sample *VAR_32;
 struct module *VAR_33 = (struct module*)FUNC_0( 1, sizeof( struct module ) );
 if( VAR_33 ) {
  FUNC_1( VAR_2, 0, 28, VAR_33->name );
  VAR_33->sequence_len = FUNC_4( VAR_2, 32 );
  VAR_33->num_instruments = FUNC_4( VAR_2, 34 );
  VAR_33->num_patterns = FUNC_4( VAR_2, 36 );
  VAR_7 = FUNC_4( VAR_2, 38 );
  VAR_8 = FUNC_4( VAR_2, 40 );
  VAR_33->fast_vol_slides = ( ( VAR_7 & 0x40 ) == 0x40 ) || VAR_8 == 0x1300;
  VAR_11 = FUNC_4( VAR_2, 42 ) == 1;
  if( FUNC_5( VAR_2, 44 ) != 0x4d524353 ) {
   FUNC_9( VAR_3, "Not an S3M file!" );
   FUNC_7( VAR_33 );
   return ((void*)0);
  }
  VAR_33->default_gvol = FUNC_6( VAR_2, 48 );
  VAR_33->default_speed = FUNC_6( VAR_2, 49 );
  VAR_33->default_tempo = FUNC_6( VAR_2, 50 );
  VAR_33->c2_rate = 8363;
  VAR_33->gain = FUNC_6( VAR_2, 51 ) & 0x7F;
  VAR_12 = ( FUNC_6( VAR_2, 51 ) & 0x80 ) == 0x80;
  VAR_13 = FUNC_6( VAR_2, 53 ) == 0xFC;
  for( VAR_4 = 0; VAR_4 < 32; VAR_4++ ) {
   VAR_14[ VAR_4 ] = -1;
   if( FUNC_6( VAR_2, 64 + VAR_4 ) < 16 ) {
    VAR_14[ VAR_4 ] = VAR_33->num_channels++;
   }
  }
  VAR_33->sequence = (unsigned char*)FUNC_0( VAR_33->sequence_len, sizeof( unsigned char ) );
  if( !VAR_33->sequence ){
   FUNC_7( VAR_33 );
   return ((void*)0);
  }
  for( VAR_4 = 0; VAR_4 < VAR_33->sequence_len; VAR_4++ ) {
   VAR_33->sequence[ VAR_4 ] = FUNC_6( VAR_2, 96 + VAR_4 );
  }
  VAR_5 = 96 + VAR_33->sequence_len;
  VAR_33->instruments = (struct instrument*)FUNC_0( VAR_33->num_instruments + 1, sizeof( struct instrument ) );
  if( !VAR_33->instruments ) {
   FUNC_7( VAR_33 );
   return ((void*)0);
  }
  VAR_31 = &VAR_33->instruments[ 0 ];
  VAR_31->num_samples = 1;
  VAR_31->samples = (struct sample*)FUNC_0( 1, sizeof( struct sample ) );
  if( !VAR_31->samples ) {
   FUNC_7( VAR_33 );
   return ((void*)0);
  }
  for( VAR_25 = 1; VAR_25 <= VAR_33->num_instruments; VAR_25++ ) {
   VAR_31 = &VAR_33->instruments[ VAR_25 ];
   VAR_31->num_samples = 1;
   VAR_31->samples = (struct sample*)FUNC_0( 1, sizeof( struct sample ) );
   if( !VAR_31->samples ) {
    FUNC_7( VAR_33 );
    return ((void*)0);
   }
   VAR_32 = &VAR_31->samples[ 0 ];
   VAR_6 = FUNC_4( VAR_2, VAR_5 ) << 4;
   VAR_5 += 2;
   FUNC_1( VAR_2, VAR_6 + 48, 28, VAR_31->name );
   if( FUNC_6( VAR_2, VAR_6 ) == 1 && FUNC_4( VAR_2, VAR_6 + 76 ) == 0x4353 ) {
    VAR_15 = ( FUNC_6( VAR_2, VAR_6 + 13 ) << 20 )
     + ( FUNC_4( VAR_2, VAR_6 + 14 ) << 4 );
    VAR_16 = FUNC_5( VAR_2, VAR_6 + 16 );
    VAR_17 = FUNC_5( VAR_2, VAR_6 + 20 );
    VAR_18 = FUNC_5( VAR_2, VAR_6 + 24 ) - VAR_17;
    VAR_32->volume = FUNC_6( VAR_2, VAR_6 + 28 );
    if( FUNC_6( VAR_2, VAR_6 + 30 ) != 0 ) {
     FUNC_9( VAR_3, "Packed samples not supported!" );
     FUNC_7( VAR_33 );
     return ((void*)0);
    }
    if( VAR_17 + VAR_18 > VAR_16 ) {
     VAR_18 = VAR_16 - VAR_17;
    }
    if( VAR_18 < 1 || !( FUNC_6( VAR_2, VAR_6 + 31 ) & 0x1 ) ) {
     VAR_17 = VAR_16;
     VAR_18 = 0;
    }
    VAR_32->loop_start = VAR_17;
    VAR_32->loop_length = VAR_18;

    VAR_9 = FUNC_6( VAR_2, VAR_6 + 31 ) & 0x4;
    VAR_10 = ( FUNC_8( FUNC_5( VAR_2, VAR_6 + 32 ) ) - FUNC_8( VAR_33->c2_rate ) ) * 12;
    VAR_32->rel_note = VAR_10 >> VAR_1;
    VAR_32->fine_tune = ( VAR_10 & VAR_0 ) >> ( VAR_1 - 7 );
    VAR_32->data = (short*)FUNC_0( VAR_16 + 1, sizeof( short ) );
    if( VAR_32->data ) {
     if( VAR_9 ) {
      FUNC_2( VAR_2, VAR_15, VAR_16, VAR_32->data );
     } else {
      FUNC_3( VAR_2, VAR_15, VAR_16, VAR_32->data );
     }
     if( !VAR_11 ) {
      for( VAR_4 = 0; VAR_4 < VAR_16; VAR_4++ ) {
       VAR_32->data[ VAR_4 ] = ( VAR_32->data[ VAR_4 ] & 0xFFFF ) - 32768;
      }
     }
     VAR_32->data[ VAR_17 + VAR_18 ] = VAR_32->data[ VAR_17 ];
    } else {
     FUNC_7( VAR_33 );
     return ((void*)0);
    }
   }
  }
  VAR_33->patterns = (struct pattern*)FUNC_0( VAR_33->num_patterns, sizeof( struct pattern ) );
  if( !VAR_33->patterns ) {
   FUNC_7( VAR_33 );
   return ((void*)0);
  }
  for( VAR_4 = 0; VAR_4 < VAR_33->num_patterns; VAR_4++ ) {
   VAR_33->patterns[ VAR_4 ].num_channels = VAR_33->num_channels;
   VAR_33->patterns[ VAR_4 ].num_rows = 64;
   VAR_30 = (char*)FUNC_0( VAR_33->num_channels * 64, 5 );
   if( !VAR_30 ) {
    FUNC_7( VAR_33 );
    return ((void*)0);
   }
   VAR_33->patterns[ VAR_4 ].data = VAR_30;
   VAR_19 = ( FUNC_4( VAR_2, VAR_5 ) << 4 ) + 2;
   VAR_21 = 0;
   while( VAR_21 < 64 ) {
    VAR_23 = FUNC_6( VAR_2, VAR_19++ );
    if( VAR_23 ) {
     VAR_24 = VAR_25 = 0;
     if( ( VAR_23 & 0x20 ) == 0x20 ) {

      VAR_24 = FUNC_6( VAR_2, VAR_19++ );
      VAR_25 = FUNC_6( VAR_2, VAR_19++ );
      if( VAR_24 < 0xFE ) {
       VAR_24 = ( VAR_24 >> 4 ) * 12 + ( VAR_24 & 0xF ) + 1;
      } else if( VAR_24 == 0xFF ) {
       VAR_24 = 0;
      }
     }
     VAR_26 = 0;
     if( ( VAR_23 & 0x40 ) == 0x40 ) {

      VAR_26 = ( FUNC_6( VAR_2, VAR_19++ ) & 0x7F ) + 0x10;
      if( VAR_26 > 0x50 ) {
       VAR_26 = 0;
      }
     }
     VAR_27 = VAR_28 = 0;
     if( ( VAR_23 & 0x80 ) == 0x80 ) {

      VAR_27 = FUNC_6( VAR_2, VAR_19++ );
      VAR_28 = FUNC_6( VAR_2, VAR_19++ );
      if( VAR_27 < 1 || VAR_27 >= 0x40 ) {
       VAR_27 = VAR_28 = 0;
      } else if( VAR_27 > 0 ) {
       VAR_27 += 0x80;
      }
     }
     VAR_22 = VAR_14[ VAR_23 & 0x1F ];
     if( VAR_22 >= 0 ) {
      VAR_20 = ( VAR_21 * VAR_33->num_channels + VAR_22 ) * 5;
      VAR_30[ VAR_20 ] = VAR_24;
      VAR_30[ VAR_20 + 1 ] = VAR_25;
      VAR_30[ VAR_20 + 2 ] = VAR_26;
      VAR_30[ VAR_20 + 3 ] = VAR_27;
      VAR_30[ VAR_20 + 4 ] = VAR_28;
     }
    } else {
     VAR_21++;
    }
   }
   VAR_5 += 2;
  }
  VAR_33->default_panning = (unsigned char*)FUNC_0( VAR_33->num_channels, sizeof( unsigned char ) );
  if( VAR_33->default_panning ) {
   for( VAR_22 = 0; VAR_22 < 32; VAR_22++ ) {
    if( VAR_14[ VAR_22 ] >= 0 ) {
     VAR_29 = 7;
     if( VAR_12 ) {
      VAR_29 = 12;
      if( FUNC_6( VAR_2, 64 + VAR_22 ) < 8 ) {
       VAR_29 = 3;
      }
     }
     if( VAR_13 ) {
      VAR_7 = FUNC_6( VAR_2, VAR_5 + VAR_22 );
      if( ( VAR_7 & 0x20 ) == 0x20 ) {
       VAR_29 = VAR_7 & 0xF;
      }
     }
     VAR_33->default_panning[ VAR_14[ VAR_22 ] ] = VAR_29 * 17;
    }
   }
  } else {
   FUNC_7( VAR_33 );
   return ((void*)0);
  }
 }
 return VAR_33;
}
