
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_8__ {int normal; } ;
struct TYPE_9__ {int surfaceFlags; size_t entityNum; TYPE_2__ plane; int endpos; } ;
typedef TYPE_3__ trace_t ;
struct TYPE_7__ {scalar_t__ eType; } ;
struct TYPE_10__ {TYPE_1__ currentState; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,size_t) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int *,int *,int ,int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_5__* VAR_8 ;
 int FUNC_4 (TYPE_3__*,int ,int ,int *,int *,int ,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6( vec3_t VAR_9, vec3_t VAR_10, int VAR_11 ) {
 trace_t VAR_12;
 int VAR_13, VAR_14;

 FUNC_3( &VAR_12, VAR_9, ((void*)0), ((void*)0), VAR_10, VAR_11, VAR_4 );

 VAR_13 = FUNC_5( VAR_9, 0 );
 VAR_14 = FUNC_5( VAR_12.endpos, 0 );


 if ( VAR_13 == VAR_14 ) {
  if ( VAR_13 & VAR_0 ) {
   FUNC_0( VAR_9, VAR_12.endpos, 32 );
  }
 } else if ( VAR_13 & VAR_0 ) {
  trace_t VAR_15;

  FUNC_4( &VAR_15, VAR_10, VAR_9, ((void*)0), ((void*)0), 0, VAR_0 );
  FUNC_0( VAR_9, VAR_15.endpos, 32 );
 } else if ( VAR_14 & VAR_0 ) {
  trace_t VAR_16;

  FUNC_4( &VAR_16, VAR_9, VAR_10, ((void*)0), ((void*)0), 0, VAR_0 );
  FUNC_0( VAR_12.endpos, VAR_16.endpos, 32 );
 }

 if ( VAR_12.surfaceFlags & VAR_6 ) {
  return;
 }

 if ( VAR_8[VAR_12.entityNum].currentState.eType == VAR_1 ) {
  FUNC_1( VAR_7, VAR_12.endpos, VAR_12.plane.normal, VAR_12.entityNum );
 } else {
  if ( VAR_12.surfaceFlags & VAR_6 ) {

   return;
  }
  if ( VAR_12.surfaceFlags & VAR_5 ) {
   FUNC_2( VAR_7, 0, VAR_12.endpos, VAR_12.plane.normal, VAR_3 );
  } else {
   FUNC_2( VAR_7, 0, VAR_12.endpos, VAR_12.plane.normal, VAR_2 );
  }
 }
}
