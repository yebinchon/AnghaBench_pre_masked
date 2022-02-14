
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_11__ {double fraction; int endpos; } ;
typedef TYPE_2__ trace_t ;
struct TYPE_12__ {int* xyz; int* st; int* modulate; } ;
typedef TYPE_3__ polyVert_t ;
struct TYPE_13__ {int lerpOrigin; } ;
typedef TYPE_4__ centity_t ;
struct TYPE_15__ {int integer; } ;
struct TYPE_10__ {int wakeMarkShader; } ;
struct TYPE_14__ {TYPE_1__ media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*) ;
 TYPE_8__ VAR_4 ;
 TYPE_7__ VAR_5 ;
 int FUNC_1 (TYPE_2__*,int*,int*,int *,int *,int ,int) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int ,int,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4( centity_t *VAR_6 ) {
 vec3_t VAR_7, VAR_8;
 trace_t VAR_9;
 int VAR_10;
 polyVert_t VAR_11[4];

 if ( !VAR_4.integer ) {
  return;
 }

 FUNC_0( VAR_6->lerpOrigin, VAR_8 );
 VAR_8[2] -= 24;



 VAR_10 = FUNC_2( VAR_8, 0 );
 if ( !( VAR_10 & ( VAR_3 | VAR_1 | VAR_0 ) ) ) {
  return;
 }

 FUNC_0( VAR_6->lerpOrigin, VAR_7 );
 VAR_7[2] += 32;


 VAR_10 = FUNC_2( VAR_7, 0 );
 if ( VAR_10 & ( VAR_2 | VAR_3 | VAR_1 | VAR_0 ) ) {
  return;
 }


 FUNC_1( &VAR_9, VAR_7, VAR_8, ((void*)0), ((void*)0), 0, ( VAR_3 | VAR_1 | VAR_0 ) );

 if ( VAR_9.fraction == 1.0 ) {
  return;
 }


 FUNC_0( VAR_9.endpos, VAR_11[0].xyz );
 VAR_11[0].xyz[0] -= 32;
 VAR_11[0].xyz[1] -= 32;
 VAR_11[0].st[0] = 0;
 VAR_11[0].st[1] = 0;
 VAR_11[0].modulate[0] = 255;
 VAR_11[0].modulate[1] = 255;
 VAR_11[0].modulate[2] = 255;
 VAR_11[0].modulate[3] = 255;

 FUNC_0( VAR_9.endpos, VAR_11[1].xyz );
 VAR_11[1].xyz[0] -= 32;
 VAR_11[1].xyz[1] += 32;
 VAR_11[1].st[0] = 0;
 VAR_11[1].st[1] = 1;
 VAR_11[1].modulate[0] = 255;
 VAR_11[1].modulate[1] = 255;
 VAR_11[1].modulate[2] = 255;
 VAR_11[1].modulate[3] = 255;

 FUNC_0( VAR_9.endpos, VAR_11[2].xyz );
 VAR_11[2].xyz[0] += 32;
 VAR_11[2].xyz[1] += 32;
 VAR_11[2].st[0] = 1;
 VAR_11[2].st[1] = 1;
 VAR_11[2].modulate[0] = 255;
 VAR_11[2].modulate[1] = 255;
 VAR_11[2].modulate[2] = 255;
 VAR_11[2].modulate[3] = 255;

 FUNC_0( VAR_9.endpos, VAR_11[3].xyz );
 VAR_11[3].xyz[0] += 32;
 VAR_11[3].xyz[1] -= 32;
 VAR_11[3].st[0] = 1;
 VAR_11[3].st[1] = 0;
 VAR_11[3].modulate[0] = 255;
 VAR_11[3].modulate[1] = 255;
 VAR_11[3].modulate[2] = 255;
 VAR_11[3].modulate[3] = 255;

 FUNC_3( VAR_5.media.wakeMarkShader, 4, VAR_11 );
}
