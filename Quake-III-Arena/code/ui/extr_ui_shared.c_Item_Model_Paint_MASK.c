
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef double* vec3_t ;
struct TYPE_15__ {float x; float y; float width; float height; float fov_x; float fov_y; scalar_t__ time; double* origin; double* lightingOrigin; int renderfx; double* oldorigin; int hModel; int axis; int viewaxis; int rdflags; } ;
typedef TYPE_3__ refdef_t ;
typedef int refdef ;
typedef TYPE_3__ refEntity_t ;
struct TYPE_16__ {float fov_x; float fov_y; scalar_t__ rotationSpeed; int angle; } ;
typedef TYPE_5__ modelDef_t ;
struct TYPE_13__ {int x; int y; int w; int h; } ;
struct TYPE_14__ {scalar_t__ nextTime; TYPE_1__ rect; } ;
struct TYPE_17__ {double textscale; int asset; TYPE_2__ window; scalar_t__ typeData; } ;
typedef TYPE_6__ itemDef_t ;
typedef int ent ;
struct TYPE_12__ {scalar_t__ realTime; int (* renderScene ) (TYPE_3__*) ;int (* addRefEntityToScene ) (TYPE_3__*) ;int (* clearScene ) () ;int (* modelBounds ) (int ,double*,double*) ;} ;


 int FUNC_0 (float*,float*,float*,float*) ;
 int FUNC_1 (double*,int ) ;
 int FUNC_2 (int ) ;
 TYPE_11__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (double*,double*) ;
 int FUNC_4 (double*,int ,int,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ,double*,double*) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;

void FUNC_10(itemDef_t *VAR_5) {
 float VAR_6, VAR_7, VAR_8, VAR_9;
 refdef_t VAR_10;
 refEntity_t VAR_11;
 vec3_t VAR_12, VAR_13, VAR_14;
 vec3_t VAR_15;
 modelDef_t *VAR_16 = (modelDef_t*)VAR_5->typeData;

 if (VAR_16 == ((void*)0)) {
  return;
 }


 FUNC_5( &VAR_10, 0, sizeof( VAR_10 ) );
 VAR_10.rdflags = VAR_1;
 FUNC_2( VAR_10.viewaxis );
 VAR_6 = VAR_5->window.rect.x+1;
 VAR_7 = VAR_5->window.rect.y+1;
 VAR_8 = VAR_5->window.rect.w-2;
 VAR_9 = VAR_5->window.rect.h-2;

 FUNC_0( &VAR_6, &VAR_7, &VAR_8, &VAR_9 );

 VAR_10.x = VAR_6;
 VAR_10.y = VAR_7;
 VAR_10.width = VAR_8;
 VAR_10.height = VAR_9;

 VAR_0->modelBounds( VAR_5->asset, VAR_12, VAR_13 );

 VAR_14[2] = -0.5 * ( VAR_12[2] + VAR_13[2] );
 VAR_14[1] = 0.5 * ( VAR_12[1] + VAR_13[1] );


 if (VAR_4) {
  float VAR_17 = 0.5 * ( VAR_13[2] - VAR_12[2] );
  VAR_14[0] = VAR_17 / 0.268;

 } else {
  VAR_14[0] = VAR_5->textscale;
 }
 VAR_10.fov_x = (VAR_16->fov_x) ? VAR_16->fov_x : VAR_8;
 VAR_10.fov_y = (VAR_16->fov_y) ? VAR_16->fov_y : VAR_9;






 VAR_0->clearScene();

 VAR_10.time = VAR_0->realTime;



 FUNC_5( &VAR_11, 0, sizeof(VAR_11) );






 if (VAR_16->rotationSpeed) {
  if (VAR_0->realTime > VAR_5->window.nextTime) {
   VAR_5->window.nextTime = VAR_0->realTime + VAR_16->rotationSpeed;
   VAR_16->angle = (int)(VAR_16->angle + 1) % 360;
  }
 }
 FUNC_4( VAR_15, 0, VAR_16->angle, 0 );
 FUNC_1( VAR_15, VAR_11.axis );

 VAR_11.hModel = VAR_5->asset;
 FUNC_3( VAR_14, VAR_11.origin );
 FUNC_3( VAR_14, VAR_11.lightingOrigin );
 VAR_11.renderfx = VAR_2 | VAR_3;
 FUNC_3( VAR_11.origin, VAR_11.oldorigin );

 VAR_0->addRefEntityToScene( &VAR_11 );
 VAR_0->renderScene( &VAR_10 );

}
