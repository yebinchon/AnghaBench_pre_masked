
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_13__ {size_t entityNum; int endpos; } ;
typedef TYPE_5__ trace_t ;
struct TYPE_12__ {int * viewaxis; int vieworg; } ;
struct TYPE_15__ {size_t crosshairClientNum; int time; int crosshairClientTime; TYPE_2__* snap; TYPE_4__ refdef; } ;
struct TYPE_11__ {int powerups; } ;
struct TYPE_14__ {TYPE_3__ currentState; } ;
struct TYPE_9__ {int clientNum; } ;
struct TYPE_10__ {TYPE_1__ ps; } ;


 int FUNC_0 (TYPE_5__*,int ,int ,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int ,int ) ;
 TYPE_7__ VAR_5 ;
 TYPE_6__* VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4( void ) {
 trace_t VAR_8;
 vec3_t VAR_9, VAR_10;
 int VAR_11;

 FUNC_1( VAR_5.refdef.vieworg, VAR_9 );
 FUNC_2( VAR_9, 131072, VAR_5.refdef.viewaxis[0], VAR_10 );

 FUNC_0( &VAR_8, VAR_9, VAR_7, VAR_7, VAR_10,
  VAR_5.snap->ps.clientNum, VAR_2|VAR_0 );
 if ( VAR_8.entityNum >= VAR_3 ) {
  return;
 }


 VAR_11 = FUNC_3( VAR_8.endpos, 0 );
 if ( VAR_11 & VAR_1 ) {
  return;
 }


 if ( VAR_6[ VAR_8.entityNum ].currentState.powerups & ( 1 << VAR_4 ) ) {
  return;
 }


 VAR_5.crosshairClientNum = VAR_8.entityNum;
 VAR_5.crosshairClientTime = VAR_5.time;
}
