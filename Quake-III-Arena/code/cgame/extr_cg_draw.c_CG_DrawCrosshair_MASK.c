
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int * vec4_t ;
typedef int qhandle_t ;
struct TYPE_22__ {float value; } ;
struct TYPE_21__ {float integer; } ;
struct TYPE_20__ {float integer; } ;
struct TYPE_19__ {int integer; } ;
struct TYPE_16__ {int * crosshairShader; } ;
struct TYPE_18__ {TYPE_3__ media; } ;
struct TYPE_17__ {float x; float width; float y; float height; } ;
struct TYPE_14__ {scalar_t__* persistant; } ;
struct TYPE_15__ {TYPE_1__ ps; } ;
struct TYPE_13__ {float time; float itemPickupBlendTime; TYPE_4__ refdef; scalar_t__ renderingThirdPerson; TYPE_2__* snap; } ;
struct TYPE_12__ {scalar_t__ integer; } ;


 int FUNC_0 (float*,float*,float*,float*) ;
 int FUNC_1 (int *) ;
 float VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_11__ VAR_4 ;
 TYPE_10__ VAR_5 ;
 TYPE_9__ VAR_6 ;
 TYPE_8__ VAR_7 ;
 TYPE_7__ VAR_8 ;
 TYPE_6__ VAR_9 ;
 TYPE_5__ VAR_10 ;
 int FUNC_2 (float,float,float,float,int ,int ,int,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void) {
 float VAR_11, VAR_12;
 qhandle_t VAR_13;
 float VAR_14;
 float VAR_15, VAR_16;
 int VAR_17;

 if ( !VAR_9.integer ) {
  return;
 }

 if ( VAR_4.snap->ps.persistant[VAR_2] == VAR_3) {
  return;
 }

 if ( VAR_4.renderingThirdPerson ) {
  return;
 }


 if ( VAR_5.integer ) {
  vec4_t VAR_18;

  FUNC_1( VAR_18 );
  FUNC_3( VAR_18 );
 } else {
  FUNC_3( ((void*)0) );
 }

 VAR_11 = VAR_12 = VAR_6.value;


 VAR_14 = VAR_4.time - VAR_4.itemPickupBlendTime;
 if ( VAR_14 > 0 && VAR_14 < VAR_0 ) {
  VAR_14 /= VAR_0;
  VAR_11 *= ( 1 + VAR_14 );
  VAR_12 *= ( 1 + VAR_14 );
 }

 VAR_15 = VAR_7.integer;
 VAR_16 = VAR_8.integer;
 FUNC_0( &VAR_15, &VAR_16, &VAR_11, &VAR_12 );

 VAR_17 = VAR_9.integer;
 if (VAR_17 < 0) {
  VAR_17 = 0;
 }
 VAR_13 = VAR_10.media.crosshairShader[ VAR_17 % VAR_1 ];

 FUNC_2( VAR_15 + VAR_4.refdef.x + 0.5 * (VAR_4.refdef.width - VAR_11),
  VAR_16 + VAR_4.refdef.y + 0.5 * (VAR_4.refdef.height - VAR_12),
  VAR_11, VAR_12, 0, 0, 1, 1, VAR_13 );
}
