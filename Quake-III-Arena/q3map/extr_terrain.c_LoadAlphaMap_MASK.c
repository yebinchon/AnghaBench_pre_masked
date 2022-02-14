
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,int**,int *,int*,int*) ;
 int FUNC_4 (int ,int**,int*,int*) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (int ,char*) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (char*) ;
 int* FUNC_9 (int) ;
 int VAR_0 ;

byte *FUNC_10( int *VAR_1, int *VAR_2, int *VAR_3 ) {
 int *VAR_4;
 byte *VAR_5;
 const char *VAR_6;
 char VAR_7[ 128 ];
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_7( VAR_2 );
 FUNC_7( VAR_3 );
 FUNC_7( VAR_1 );

 VAR_10 = FUNC_8( FUNC_6( VAR_0, "layers" ) );
 if ( VAR_10 < 1 ) {
  FUNC_0 ("SetTerrainTextures: invalid value for 'layers' (%d)", VAR_10 );
 }

 VAR_6 = FUNC_6( VAR_0, "alphamap" );
 if ( !VAR_6[ 0 ] ) {
  FUNC_0 ("LoadAlphaMap: No alphamap specified on terrain" );
 }

 FUNC_2( VAR_6, VAR_7);
 if ( !FUNC_5( VAR_7, "tga" ) ) {
  FUNC_4( FUNC_1( VAR_6 ), &VAR_4, &VAR_8, &VAR_9 );

  VAR_11 = VAR_8 * VAR_9;
  VAR_5 = FUNC_9( VAR_11 );
  for( VAR_12 = 0; VAR_12 < VAR_11; VAR_12++ ) {
   VAR_5[ VAR_12 ] = ( ( VAR_4[ VAR_12 ] & 0xff ) * VAR_10 ) / 256;
   if ( VAR_5[ VAR_12 ] >= VAR_10 ) {
    VAR_5[ VAR_12 ] = VAR_10 - 1;
   }
  }
 } else {
  FUNC_3( FUNC_1( VAR_6 ), &VAR_5, ((void*)0), &VAR_8, &VAR_9 );
  VAR_11 = VAR_8 * VAR_9;
  for( VAR_12 = 0; VAR_12 < VAR_11; VAR_12++ ) {
   if ( VAR_5[ VAR_12 ] >= VAR_10 ) {
    VAR_5[ VAR_12 ] = VAR_10 - 1;
   }
  }
 }

 if ( ( VAR_8 < 2 ) || ( VAR_9 < 2 ) ) {
  FUNC_0 ("LoadAlphaMap: alphamap width/height must be at least 2x2." );
 }

 *VAR_1 = VAR_10;
 *VAR_2 = VAR_8;
 *VAR_3 = VAR_9;

 return VAR_5;
}
