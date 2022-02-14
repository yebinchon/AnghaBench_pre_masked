
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_8__ {scalar_t__ isMirror; } ;
struct TYPE_12__ {TYPE_2__ viewParms; TYPE_1__* currentEntity; } ;
struct TYPE_11__ {int stencilBits; } ;
struct TYPE_10__ {int numVertexes; float** xyz; int numIndexes; int* indexes; } ;
struct TYPE_9__ {int whiteImage; } ;
struct TYPE_7__ {int lightDir; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 float FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int VAR_11 ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 () ;
 int VAR_12 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (float*,int,int ,float*) ;
 int FUNC_9 (float*,float*,int ) ;
 TYPE_6__ VAR_13 ;
 int* VAR_14 ;
 TYPE_5__ VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (float,float,float) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int,int) ;
 int FUNC_15 (int ,int ,int ) ;
 TYPE_4__ VAR_17 ;
 TYPE_3__ VAR_18 ;

void FUNC_16( void ) {
 int VAR_19;
 int VAR_20;
 vec3_t VAR_21;


 if ( VAR_17.numVertexes >= VAR_12 / 2 ) {
  return;
 }

 if ( VAR_15.stencilBits < 4 ) {
  return;
 }

 FUNC_7( VAR_13.currentEntity->lightDir, VAR_21 );


 for ( VAR_19 = 0 ; VAR_19 < VAR_17.numVertexes ; VAR_19++ ) {
  FUNC_8( VAR_17.xyz[VAR_19], -512, VAR_21, VAR_17.xyz[VAR_19+VAR_17.numVertexes] );
 }


 FUNC_0( VAR_16, 0, 4 * VAR_17.numVertexes );

 VAR_20 = VAR_17.numIndexes / 3;
 for ( VAR_19 = 0 ; VAR_19 < VAR_20 ; VAR_19++ ) {
  int VAR_22, VAR_23, VAR_24;
  vec3_t VAR_25, VAR_26, VAR_27;
  float *VAR_28, *VAR_29, *VAR_30;
  float VAR_31;

  VAR_22 = VAR_17.indexes[ VAR_19*3 + 0 ];
  VAR_23 = VAR_17.indexes[ VAR_19*3 + 1 ];
  VAR_24 = VAR_17.indexes[ VAR_19*3 + 2 ];

  VAR_28 = VAR_17.xyz[ VAR_22 ];
  VAR_29 = VAR_17.xyz[ VAR_23 ];
  VAR_30 = VAR_17.xyz[ VAR_24 ];

  FUNC_9( VAR_29, VAR_28, VAR_25 );
  FUNC_9( VAR_30, VAR_28, VAR_26 );
  FUNC_1( VAR_25, VAR_26, VAR_27 );

  VAR_31 = FUNC_2( VAR_27, VAR_21 );
  if ( VAR_31 > 0 ) {
   VAR_14[ VAR_19 ] = 1;
  } else {
   VAR_14[ VAR_19 ] = 0;
  }


  FUNC_5( VAR_22, VAR_23, VAR_14[ VAR_19 ] );
  FUNC_5( VAR_23, VAR_24, VAR_14[ VAR_19 ] );
  FUNC_5( VAR_24, VAR_22, VAR_14[ VAR_19 ] );
 }



 FUNC_3( VAR_18.whiteImage );
 FUNC_13( VAR_4 );
 FUNC_4( VAR_1 | VAR_0 );
 FUNC_10( 0.2f, 0.2f, 0.2f );


 FUNC_11( VAR_6, VAR_6, VAR_6, VAR_6 );

 FUNC_13( VAR_10 );
 FUNC_14( VAR_2, 1, 255 );


 if ( VAR_13.viewParms.isMirror ) {
  FUNC_12( VAR_7 );
  FUNC_15( VAR_9, VAR_9, VAR_8 );

  FUNC_6();

  FUNC_12( VAR_3 );
  FUNC_15( VAR_9, VAR_9, VAR_5 );

  FUNC_6();
 } else {
  FUNC_12( VAR_3 );
  FUNC_15( VAR_9, VAR_9, VAR_8 );

  FUNC_6();

  FUNC_12( VAR_7 );
  FUNC_15( VAR_9, VAR_9, VAR_5 );

  FUNC_6();
 }



 FUNC_11( VAR_11, VAR_11, VAR_11, VAR_11 );
}
