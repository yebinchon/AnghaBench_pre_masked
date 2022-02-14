
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef float* vec4_t ;
struct TYPE_9__ {float x; float y; double w; float h; } ;
typedef TYPE_2__ rectDef_t ;
struct TYPE_10__ {scalar_t__* stats; int* powerups; } ;
typedef TYPE_3__ playerState_t ;
typedef int num ;
struct TYPE_11__ {int icon; } ;
typedef TYPE_4__ gitem_t ;
struct TYPE_12__ {int time; TYPE_1__* snap; } ;
struct TYPE_8__ {TYPE_3__ ps; } ;


 TYPE_4__* FUNC_0 (int) ;
 int FUNC_1 (float,float,double,float,int ) ;
 int FUNC_2 (float,float,float,float*,char*,int ,int ,int ) ;
 int FUNC_3 (char*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (float*) ;

__attribute__((used)) static void FUNC_6(rectDef_t *VAR_6, int VAR_7, float VAR_8, float VAR_9, vec4_t VAR_10) {
 char VAR_11[16];
 int VAR_12[VAR_1];
 int VAR_13[VAR_1];
 int VAR_14, VAR_15, VAR_16;
 int VAR_17;
 playerState_t *VAR_18;
 int VAR_19;
 gitem_t *VAR_20;
 float VAR_21;
 rectDef_t VAR_22;
 float *VAR_23;
 VAR_22 = VAR_6->x;
 VAR_22 = VAR_6->y;
 VAR_22 = VAR_6->w;
 VAR_22 = VAR_6->h;

 VAR_23 = (VAR_7 == VAR_0) ? &VAR_22 : &VAR_22;

 VAR_18 = &VAR_5.snap->ps;

 if ( VAR_18->stats[VAR_4] <= 0 ) {
  return;
 }


 VAR_17 = 0;
 for ( VAR_14 = 0 ; VAR_14 < VAR_1 ; VAR_14++ ) {
  if ( !VAR_18->powerups[ VAR_14 ] ) {
   continue;
  }
  VAR_19 = VAR_18->powerups[ VAR_14 ] - VAR_5.time;


  if ( VAR_19 <= 0 || VAR_19 >= 999000) {
   continue;
  }


  for ( VAR_15 = 0 ; VAR_15 < VAR_17 ; VAR_15++ ) {
   if ( VAR_13[VAR_15] >= VAR_19 ) {
    for ( VAR_16 = VAR_17 - 1 ; VAR_16 >= VAR_15 ; VAR_16-- ) {
     VAR_12[VAR_16+1] = VAR_12[VAR_16];
     VAR_13[VAR_16+1] = VAR_13[VAR_16];
    }
    break;
   }
  }
  VAR_12[VAR_15] = VAR_14;
  VAR_13[VAR_15] = VAR_19;
  VAR_17++;
 }


 for ( VAR_14 = 0 ; VAR_14 < VAR_17 ; VAR_14++ ) {
  VAR_20 = FUNC_0( VAR_12[VAR_14] );

  if (VAR_20) {
   VAR_19 = VAR_18->powerups[ VAR_12[VAR_14] ];
   if ( VAR_19 - VAR_5.time >= VAR_2 * VAR_3 ) {
    FUNC_5( ((void*)0) );
   } else {
    vec4_t VAR_24;

    VAR_21 = (float)( VAR_19 - VAR_5.time ) / VAR_3;
    VAR_21 -= (int)VAR_21;
    VAR_24[0] = VAR_24[1] = VAR_24[2] = VAR_24[3] = VAR_21;
    FUNC_5( VAR_24 );
   }

   FUNC_1( VAR_22, VAR_22, VAR_22 * .75, VAR_22, FUNC_4( VAR_20->icon ) );

   FUNC_3 (VAR_11, sizeof(VAR_11), "%i", VAR_13[VAR_14] / 1000);
   FUNC_2(VAR_22 + (VAR_22 * .75) + 3 , VAR_22 + VAR_22, VAR_9, VAR_10, VAR_11, 0, 0, 0);
   *VAR_23 += VAR_22 + VAR_8;
  }

 }
 FUNC_5( ((void*)0) );

}
