
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_13__ {int h; int w; scalar_t__ y; int x; } ;
typedef TYPE_3__ rectDef_t ;
typedef scalar_t__ qboolean ;
struct TYPE_14__ {size_t clientNum; } ;
typedef TYPE_4__ playerState_t ;
typedef int centity_t ;
struct TYPE_19__ {int time; TYPE_1__* snap; } ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_17__ {scalar_t__ integer; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_12__ {int armorModel; int armorIcon; } ;
struct TYPE_15__ {TYPE_2__ media; } ;
struct TYPE_11__ {TYPE_4__ ps; } ;


 int FUNC_0 (int ,scalar_t__,int ,int,int ,int ,int*,int*) ;
 int FUNC_1 (int ,scalar_t__,int ,int,int ) ;
 int FUNC_2 (int*) ;
 size_t VAR_0 ;
 TYPE_9__ VAR_1 ;
 TYPE_8__ VAR_2 ;
 TYPE_7__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 int * VAR_5 ;
 TYPE_5__ VAR_6 ;

__attribute__((used)) static void FUNC_3( rectDef_t *VAR_7, qboolean VAR_8 ) {
 centity_t *VAR_9;
 playerState_t *VAR_10;
 vec3_t VAR_11;
 vec3_t VAR_12;

  if ( VAR_4.integer == 0 ) {
  return;
 }

 VAR_9 = &VAR_5[VAR_1.snap->ps.clientNum];
 VAR_10 = &VAR_1.snap->ps;

 if ( VAR_8 || ( !VAR_2.integer && VAR_3.integer) ) {
  FUNC_1( VAR_7->x, VAR_7->y + VAR_7->h/2 + 1, VAR_7->w, VAR_7->h, VAR_6.media.armorIcon );
  } else if (VAR_2.integer) {
   FUNC_2( VAR_11 );
    VAR_12[0] = 90;
   VAR_12[1] = 0;
   VAR_12[2] = -10;
   VAR_11[VAR_0] = ( VAR_1.time & 2047 ) * 360 / 2048.0;

    FUNC_0( VAR_7->x, VAR_7->y, VAR_7->w, VAR_7->h, VAR_6.media.armorModel, 0, VAR_12, VAR_11 );
  }

}
