
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec4_t ;
typedef int qboolean ;
typedef int gitem_t ;
struct TYPE_10__ {TYPE_2__* snap; } ;
struct TYPE_8__ {int selectShader; int * flagShader; int * redFlagShader; int * blueFlagShader; } ;
struct TYPE_9__ {int scores1; int scores2; scalar_t__ gametype; int blueflag; int redflag; int flagStatus; int capturelimit; int fraglimit; TYPE_3__ media; } ;
struct TYPE_6__ {int* persistant; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,float,char const*,float) ;
 int FUNC_2 (int,float,int,int,int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int,float,int,int,float*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_5__ VAR_14 ;
 TYPE_4__ VAR_15 ;
 char* FUNC_5 (char*,int) ;

__attribute__((used)) static float FUNC_6( float VAR_16 ) {
 const char *VAR_17;
 int VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22;
 int VAR_23;
 vec4_t VAR_24;
 float VAR_25;
 gitem_t *VAR_26;

 VAR_18 = VAR_15.scores1;
 VAR_19 = VAR_15.scores2;

 VAR_16 -= VAR_0 + 8;

 VAR_25 = VAR_16;


 if ( VAR_15.gametype >= VAR_4 ) {
  VAR_21 = 640;
  VAR_24[0] = 0.0f;
  VAR_24[1] = 0.0f;
  VAR_24[2] = 1.0f;
  VAR_24[3] = 0.33f;
  VAR_17 = FUNC_5( "%2i", VAR_19 );
  VAR_22 = FUNC_3( VAR_17 ) * VAR_1 + 8;
  VAR_21 -= VAR_22;
  FUNC_4( VAR_21, VAR_16-4, VAR_22, VAR_0+8, VAR_24 );
  if ( VAR_14.snap->ps.persistant[VAR_6] == VAR_11 ) {
   FUNC_2( VAR_21, VAR_16-4, VAR_22, VAR_0+8, VAR_15.media.selectShader );
  }
  FUNC_1( VAR_21 + 4, VAR_16, VAR_17, 1.0F);

  if ( VAR_15.gametype == VAR_3 ) {

   VAR_26 = FUNC_0( VAR_7 );

   if (VAR_26) {
    VAR_25 = VAR_16 - VAR_0 - 8;
    if( VAR_15.blueflag >= 0 && VAR_15.blueflag <= 2 ) {
     FUNC_2( VAR_21, VAR_25-4, VAR_22, VAR_0+8, VAR_15.media.blueFlagShader[VAR_15.blueflag] );
    }
   }
  }
  VAR_24[0] = 1.0f;
  VAR_24[1] = 0.0f;
  VAR_24[2] = 0.0f;
  VAR_24[3] = 0.33f;
  VAR_17 = FUNC_5( "%2i", VAR_18 );
  VAR_22 = FUNC_3( VAR_17 ) * VAR_1 + 8;
  VAR_21 -= VAR_22;
  FUNC_4( VAR_21, VAR_16-4, VAR_22, VAR_0+8, VAR_24 );
  if ( VAR_14.snap->ps.persistant[VAR_6] == VAR_12 ) {
   FUNC_2( VAR_21, VAR_16-4, VAR_22, VAR_0+8, VAR_15.media.selectShader );
  }
  FUNC_1( VAR_21 + 4, VAR_16, VAR_17, 1.0F);

  if ( VAR_15.gametype == VAR_3 ) {

   VAR_26 = FUNC_0( VAR_9 );

   if (VAR_26) {
    VAR_25 = VAR_16 - VAR_0 - 8;
    if( VAR_15.redflag >= 0 && VAR_15.redflag <= 2 ) {
     FUNC_2( VAR_21, VAR_25-4, VAR_22, VAR_0+8, VAR_15.media.redFlagShader[VAR_15.redflag] );
    }
   }
  }
  if ( VAR_15.gametype >= VAR_3 ) {
   VAR_23 = VAR_15.capturelimit;
  } else {
   VAR_23 = VAR_15.fraglimit;
  }
  if ( VAR_23 ) {
   VAR_17 = FUNC_5( "%2i", VAR_23 );
   VAR_22 = FUNC_3( VAR_17 ) * VAR_1 + 8;
   VAR_21 -= VAR_22;
   FUNC_1( VAR_21 + 4, VAR_16, VAR_17, 1.0F);
  }

 } else {
  qboolean VAR_27;

  VAR_21 = 640;
  VAR_20 = VAR_14.snap->ps.persistant[VAR_5];
  VAR_27 = ( VAR_14.snap->ps.persistant[VAR_6] == VAR_13 );


  if ( VAR_18 != VAR_20 ) {
   VAR_19 = VAR_20;
  }
  if ( VAR_19 != VAR_10 ) {
   VAR_17 = FUNC_5( "%2i", VAR_19 );
   VAR_22 = FUNC_3( VAR_17 ) * VAR_1 + 8;
   VAR_21 -= VAR_22;
   if ( !VAR_27 && VAR_20 == VAR_19 && VAR_20 != VAR_18 ) {
    VAR_24[0] = 1.0f;
    VAR_24[1] = 0.0f;
    VAR_24[2] = 0.0f;
    VAR_24[3] = 0.33f;
    FUNC_4( VAR_21, VAR_16-4, VAR_22, VAR_0+8, VAR_24 );
    FUNC_2( VAR_21, VAR_16-4, VAR_22, VAR_0+8, VAR_15.media.selectShader );
   } else {
    VAR_24[0] = 0.5f;
    VAR_24[1] = 0.5f;
    VAR_24[2] = 0.5f;
    VAR_24[3] = 0.33f;
    FUNC_4( VAR_21, VAR_16-4, VAR_22, VAR_0+8, VAR_24 );
   }
   FUNC_1( VAR_21 + 4, VAR_16, VAR_17, 1.0F);
  }


  if ( VAR_18 != VAR_10 ) {
   VAR_17 = FUNC_5( "%2i", VAR_18 );
   VAR_22 = FUNC_3( VAR_17 ) * VAR_1 + 8;
   VAR_21 -= VAR_22;
   if ( !VAR_27 && VAR_20 == VAR_18 ) {
    VAR_24[0] = 0.0f;
    VAR_24[1] = 0.0f;
    VAR_24[2] = 1.0f;
    VAR_24[3] = 0.33f;
    FUNC_4( VAR_21, VAR_16-4, VAR_22, VAR_0+8, VAR_24 );
    FUNC_2( VAR_21, VAR_16-4, VAR_22, VAR_0+8, VAR_15.media.selectShader );
   } else {
    VAR_24[0] = 0.5f;
    VAR_24[1] = 0.5f;
    VAR_24[2] = 0.5f;
    VAR_24[3] = 0.33f;
    FUNC_4( VAR_21, VAR_16-4, VAR_22, VAR_0+8, VAR_24 );
   }
   FUNC_1( VAR_21 + 4, VAR_16, VAR_17, 1.0F);
  }

  if ( VAR_15.fraglimit ) {
   VAR_17 = FUNC_5( "%2i", VAR_15.fraglimit );
   VAR_22 = FUNC_3( VAR_17 ) * VAR_1 + 8;
   VAR_21 -= VAR_22;
   FUNC_1( VAR_21 + 4, VAR_16, VAR_17, 1.0F);
  }

 }

 return VAR_25 - 8;
}
