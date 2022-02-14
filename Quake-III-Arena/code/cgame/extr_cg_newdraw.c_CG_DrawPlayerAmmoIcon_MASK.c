
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int* vec3_t ;
struct TYPE_18__ {int h; int w; int y; int x; } ;
typedef TYPE_4__ rectDef_t ;
typedef scalar_t__ qhandle_t ;
typedef scalar_t__ qboolean ;
struct TYPE_19__ {size_t clientNum; } ;
typedef TYPE_5__ playerState_t ;
struct TYPE_17__ {size_t weapon; } ;
struct TYPE_20__ {TYPE_3__ currentState; } ;
typedef TYPE_6__ centity_t ;
struct TYPE_22__ {scalar_t__ integer; } ;
struct TYPE_21__ {scalar_t__ ammoModel; scalar_t__ ammoIcon; } ;
struct TYPE_16__ {size_t weapon; } ;
struct TYPE_15__ {TYPE_5__ ps; } ;
struct TYPE_14__ {double time; TYPE_2__ predictedPlayerState; TYPE_1__* snap; } ;
struct TYPE_13__ {scalar_t__ integer; } ;


 int FUNC_0 (int ,int ,int ,int ,scalar_t__,int ,int*,int*) ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int*) ;
 size_t VAR_0 ;
 TYPE_11__ VAR_1 ;
 TYPE_10__ VAR_2 ;
 TYPE_9__ VAR_3 ;
 TYPE_6__* VAR_4 ;
 TYPE_7__* VAR_5 ;
 int FUNC_3 (double) ;

__attribute__((used)) static void FUNC_4( rectDef_t *VAR_6, qboolean VAR_7 ) {
 centity_t *VAR_8;
 playerState_t *VAR_9;
 vec3_t VAR_10;
 vec3_t VAR_11;

 VAR_8 = &VAR_4[VAR_1.snap->ps.clientNum];
 VAR_9 = &VAR_1.snap->ps;

 if ( VAR_7 || (!VAR_2.integer && VAR_3.integer) ) {
   qhandle_t VAR_12;
    VAR_12 = VAR_5[ VAR_1.predictedPlayerState.weapon ].ammoIcon;
  if ( VAR_12 ) {
    FUNC_1( VAR_6->x, VAR_6->y, VAR_6->w, VAR_6->h, VAR_12 );
  }
  } else if (VAR_2.integer) {
   if ( VAR_8->currentState.weapon && VAR_5[ VAR_8->currentState.weapon ].ammoModel ) {
     FUNC_2( VAR_10 );
    VAR_11[0] = 70;
    VAR_11[1] = 0;
    VAR_11[2] = 0;
    VAR_10[VAR_0] = 90 + 20 * FUNC_3( VAR_1.time / 1000.0 );
    FUNC_0( VAR_6->x, VAR_6->y, VAR_6->w, VAR_6->h, VAR_5[ VAR_8->currentState.weapon ].ammoModel, 0, VAR_11, VAR_10 );
   }
  }
}
