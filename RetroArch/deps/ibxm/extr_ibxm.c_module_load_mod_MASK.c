
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sample {int fine_tune; int volume; int loop_start; int loop_length; short* data; } ;
struct pattern {int num_channels; int num_rows; char* data; } ;
struct module {int sequence_len; int restart_pos; unsigned char* sequence; int num_patterns; int num_channels; int c2_rate; int gain; int default_gvol; int default_speed; int default_tempo; unsigned char* default_panning; int num_instruments; struct instrument* instruments; struct pattern* patterns; int name; } ;
struct instrument {int num_samples; int name; struct sample* samples; } ;
struct data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct data*,int,int,int ) ;
 int FUNC_2 (struct data*,int,int,short*) ;
 int FUNC_3 (struct data*,int) ;
 int FUNC_4 (struct data*,int) ;
 int FUNC_5 (struct module*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static struct module* FUNC_8( struct data *VAR_2, char *VAR_3 ) {
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;
 char *VAR_18;
 struct instrument *VAR_19;
 struct sample *VAR_20;
 struct module *VAR_21 = (struct module*)FUNC_0( 1, sizeof( struct module ) );
 if( VAR_21 ) {
  FUNC_1( VAR_2, 0, 20, VAR_21->name );
  VAR_21->sequence_len = FUNC_4( VAR_2, 950 ) & 0x7F;
  VAR_21->restart_pos = FUNC_4( VAR_2, 951 ) & 0x7F;
  if( VAR_21->restart_pos >= VAR_21->sequence_len ) {
   VAR_21->restart_pos = 0;
  }
  VAR_21->sequence = (unsigned char*)FUNC_0( 128, sizeof( unsigned char ) );
  if( !VAR_21->sequence ){
   FUNC_5( VAR_21 );
   return ((void*)0);
  }
  for( VAR_4 = 0; VAR_4 < 128; VAR_4++ ) {
   VAR_5 = FUNC_4( VAR_2, 952 + VAR_4 ) & 0x7F;
   VAR_21->sequence[ VAR_4 ] = VAR_5;
   if( VAR_5 >= VAR_21->num_patterns ) {
    VAR_21->num_patterns = VAR_5 + 1;
   }
  }
  switch( FUNC_3( VAR_2, 1082 ) ) {
   case 0x4b2e:
   case 0x4b21:
   case 0x5434:
    VAR_21->num_channels = 4;
    VAR_21->c2_rate = 8287;
    VAR_21->gain = 64;
    break;
   case 0x484e:
    VAR_21->num_channels = FUNC_4( VAR_2, 1080 ) - 48;
    VAR_21->c2_rate = 8363;
    VAR_21->gain = 32;
    break;
   case 0x4348:
    VAR_21->num_channels = ( FUNC_4( VAR_2, 1080 ) - 48 ) * 10;
    VAR_21->num_channels += FUNC_4( VAR_2, 1081 ) - 48;
    VAR_21->c2_rate = 8363;
    VAR_21->gain = 32;
    break;
   default:
    FUNC_7( VAR_3, "MOD Format not recognised!" );
    FUNC_5( VAR_21 );
    return ((void*)0);
  }
  VAR_21->default_gvol = 64;
  VAR_21->default_speed = 6;
  VAR_21->default_tempo = 125;
  VAR_21->default_panning = (unsigned char*)FUNC_0( VAR_21->num_channels, sizeof( unsigned char ) );
  if( !VAR_21->default_panning ) {
   FUNC_5( VAR_21 );
   return ((void*)0);
  }
  for( VAR_4 = 0; VAR_4 < VAR_21->num_channels; VAR_4++ ) {
   VAR_21->default_panning[ VAR_4 ] = 51;
   if( ( VAR_4 & 3 ) == 1 || ( VAR_4 & 3 ) == 2 ) {
    VAR_21->default_panning[ VAR_4 ] = 204;
   }
  }
  VAR_6 = 1084;
  VAR_21->patterns = (struct pattern*)FUNC_0( VAR_21->num_patterns, sizeof( struct pattern ) );
  if( !VAR_21->patterns ) {
   FUNC_5( VAR_21 );
   return ((void*)0);
  }
  VAR_7 = VAR_21->num_channels * 64 * 5;
  for( VAR_5 = 0; VAR_5 < VAR_21->num_patterns; VAR_5++ ) {
   VAR_21->patterns[ VAR_5 ].num_channels = VAR_21->num_channels;
   VAR_21->patterns[ VAR_5 ].num_rows = 64;
   VAR_18 = (char*)FUNC_0( 1, VAR_7 );
   if( !VAR_18 ) {
    FUNC_5( VAR_21 );
    return ((void*)0);
   }
   VAR_21->patterns[ VAR_5 ].data = VAR_18;
   for( VAR_8 = 0; VAR_8 < VAR_7; VAR_8 += 5 ) {
    VAR_9 = ( FUNC_4( VAR_2, VAR_6 ) & 0xF ) << 8;
    VAR_9 = ( VAR_9 | FUNC_4( VAR_2, VAR_6 + 1 ) ) * 4;
    if( VAR_9 >= 112 && VAR_9 <= 6848 ) {
     VAR_10 = -12 * FUNC_6( ( VAR_9 << VAR_1 ) / 29021 );
     VAR_10 = ( VAR_10 + ( VAR_10 & ( VAR_0 >> 1 ) ) ) >> VAR_1;
     VAR_18[ VAR_8 ] = VAR_10;
    }
    VAR_11 = ( FUNC_4( VAR_2, VAR_6 + 2 ) & 0xF0 ) >> 4;
    VAR_11 = VAR_11 | ( FUNC_4( VAR_2, VAR_6 ) & 0x10 );
    VAR_18[ VAR_8 + 1 ] = VAR_11;
    VAR_12 = FUNC_4( VAR_2, VAR_6 + 2 ) & 0x0F;
    VAR_13 = FUNC_4( VAR_2, VAR_6 + 3 );
    if( VAR_13 == 0 && ( VAR_12 < 3 || VAR_12 == 0xA ) ) {
     VAR_12 = 0;
    }
    if( VAR_13 == 0 && ( VAR_12 == 5 || VAR_12 == 6 ) ) {
     VAR_12 -= 2;
    }
    if( VAR_12 == 8 && VAR_21->num_channels == 4 ) {
     VAR_12 = VAR_13 = 0;
    }
    VAR_18[ VAR_8 + 3 ] = VAR_12;
    VAR_18[ VAR_8 + 4 ] = VAR_13;
    VAR_6 += 4;
   }
  }
  VAR_21->num_instruments = 31;
  VAR_21->instruments = (struct instrument*)FUNC_0( VAR_21->num_instruments + 1, sizeof( struct instrument ) );
  if( !VAR_21->instruments ) {
   FUNC_5( VAR_21 );
   return ((void*)0);
  }
  VAR_19 = &VAR_21->instruments[ 0 ];
  VAR_19->num_samples = 1;
  VAR_19->samples = (struct sample*)FUNC_0( 1, sizeof( struct sample ) );
  if( !VAR_19->samples ) {
   FUNC_5( VAR_21 );
   return ((void*)0);
  }
  for( VAR_11 = 1; VAR_11 <= VAR_21->num_instruments; VAR_11++ ) {
   VAR_19 = &VAR_21->instruments[ VAR_11 ];
   VAR_19->num_samples = 1;
   VAR_19->samples = (struct sample*)FUNC_0( 1, sizeof( struct sample ) );
   if( !VAR_19->samples ) {
    FUNC_5( VAR_21 );
    return ((void*)0);
   }
   VAR_20 = &VAR_19->samples[ 0 ];
   FUNC_1( VAR_2, VAR_11 * 30 - 10, 22, VAR_19->name );
   VAR_15 = FUNC_3( VAR_2, VAR_11 * 30 + 12 ) * 2;
   VAR_14 = ( FUNC_4( VAR_2, VAR_11 * 30 + 14 ) & 0xF ) << 4;
   VAR_20->fine_tune = ( VAR_14 & 0x7F ) - ( VAR_14 & 0x80 );
   VAR_20->volume = FUNC_4( VAR_2, VAR_11 * 30 + 15 ) & 0x7F;
   if( VAR_20->volume > 64 ) {
    VAR_20->volume = 64;
   }
   VAR_16 = FUNC_3( VAR_2, VAR_11 * 30 + 16 ) * 2;
   VAR_17 = FUNC_3( VAR_2, VAR_11 * 30 + 18 ) * 2;
   if( VAR_16 + VAR_17 > VAR_15 ) {
    VAR_17 = VAR_15 - VAR_16;
   }
   if( VAR_17 < 4 ) {
    VAR_16 = VAR_15;
    VAR_17 = 0;
   }
   VAR_20->loop_start = VAR_16;
   VAR_20->loop_length = VAR_17;
   VAR_20->data = (short*)FUNC_0( VAR_15 + 1, sizeof( short ) );
   if( VAR_20->data ) {
    FUNC_2( VAR_2, VAR_6, VAR_15, VAR_20->data );
    VAR_20->data[ VAR_16 + VAR_17 ] = VAR_20->data[ VAR_16 ];
   } else {
    FUNC_5( VAR_21 );
    return ((void*)0);
   }
   VAR_6 += VAR_15;
  }
 }
 return VAR_21;
}
