
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_7__ {int h; int w; int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
struct TYPE_9__ {double time; } ;
struct TYPE_8__ {int maxclients; TYPE_1__* clientinfo; } ;
struct TYPE_6__ {scalar_t__ team; int powerups; scalar_t__ infoValid; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int*) ;
 size_t VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_2 (double) ;

__attribute__((used)) static void FUNC_3(rectDef_t *VAR_5) {
  int VAR_6;
  for ( VAR_6 = 0 ; VAR_6 < VAR_4.maxclients ; VAR_6++ ) {
   if ( VAR_4.clientinfo[VAR_6].infoValid && VAR_4.clientinfo[VAR_6].team == VAR_1 && VAR_4.clientinfo[VAR_6].powerups & ( 1<< VAR_0 )) {
      vec3_t VAR_7;
      FUNC_1( VAR_7 );
     VAR_7[VAR_2] = 180 + 20 * FUNC_2( VAR_3.time / 650.0 );;
      FUNC_0( VAR_5->x, VAR_5->y, VAR_5->w, VAR_5->h, 0,VAR_7 );
      return;
    }
  }
}
