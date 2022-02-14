
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vec4_t ;
typedef int* vec3_t ;
struct TYPE_13__ {int x; int w; scalar_t__ y; scalar_t__ h; } ;
typedef TYPE_4__ rectDef_t ;
typedef int qhandle_t ;
typedef int qboolean ;
typedef int num ;
struct TYPE_17__ {int time; TYPE_2__* snap; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_12__ {int blueCubeIcon; int redCubeIcon; int blueCubeModel; int redCubeModel; } ;
struct TYPE_14__ {scalar_t__ gametype; TYPE_3__ media; } ;
struct TYPE_10__ {int generic1; scalar_t__* persistant; } ;
struct TYPE_11__ {TYPE_1__ ps; } ;


 int FUNC_0 (int,scalar_t__,int,int,int ,int ,int*,int*) ;
 int FUNC_1 (int,scalar_t__,int,int,int ) ;
 int FUNC_2 (int,scalar_t__,float,int ,char*,int ,int ,int) ;
 int FUNC_3 (char*,float,int ) ;
 int FUNC_4 (char*,int,char*,int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int*) ;
 size_t VAR_3 ;
 TYPE_8__ VAR_4 ;
 TYPE_7__ VAR_5 ;
 TYPE_6__ VAR_6 ;
 TYPE_5__ VAR_7 ;

__attribute__((used)) static void FUNC_6(rectDef_t *VAR_8, float VAR_9, vec4_t VAR_10, qboolean VAR_11, int VAR_12 ) {
 char VAR_13[16];
 vec3_t VAR_14, VAR_15;
 qhandle_t VAR_16;
 int VAR_17 = VAR_4.snap->ps.generic1;

 if (VAR_7.gametype != VAR_0) {
  return;
 }

 if( VAR_17 > 99 ) {
  VAR_17 = 99;
 }

 FUNC_4 (VAR_13, sizeof(VAR_13), "%i", VAR_17);
 VAR_17 = FUNC_3(VAR_13, VAR_9, 0);
 FUNC_2(VAR_8->x + (VAR_8->w - VAR_17), VAR_8->y + VAR_8->h, VAR_9, VAR_10, VAR_13, 0, 0, VAR_12);

 if (VAR_6.integer) {
  if (!VAR_11 && VAR_5.integer) {
   FUNC_5(VAR_15);
   VAR_14[0] = 90;
   VAR_14[1] = 0;
   VAR_14[2] = -10;
   VAR_15[VAR_3] = ( VAR_4.time & 2047 ) * 360 / 2048.0;
   if( VAR_4.snap->ps.persistant[VAR_1] == VAR_2 ) {
    VAR_16 = VAR_7.media.redCubeModel;
   } else {
    VAR_16 = VAR_7.media.blueCubeModel;
   }
   FUNC_0( VAR_8->x, VAR_8->y, 35, 35, VAR_16, 0, VAR_14, VAR_15 );
  } else {
   if( VAR_4.snap->ps.persistant[VAR_1] == VAR_2 ) {
    VAR_16 = VAR_7.media.redCubeIcon;
   } else {
    VAR_16 = VAR_7.media.blueCubeIcon;
   }
   FUNC_1( VAR_8->x + 3, VAR_8->y + 16, 20, 20, VAR_16 );
  }
 }
}
