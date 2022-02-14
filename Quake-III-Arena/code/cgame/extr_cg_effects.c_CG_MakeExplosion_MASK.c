
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
typedef void* qhandle_t ;
typedef scalar_t__ qboolean ;
struct TYPE_6__ {int rotation; float shaderTime; int oldorigin; int origin; void* customShader; void* hModel; int * axis; } ;
struct TYPE_7__ {int startTime; int endTime; double* color; TYPE_1__ refEntity; int leType; } ;
typedef TYPE_2__ localEntity_t ;
struct TYPE_8__ {int time; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,float) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,int ) ;
 TYPE_3__ VAR_2 ;
 int FUNC_7 () ;

localEntity_t *FUNC_8( vec3_t VAR_3, vec3_t VAR_4,
        qhandle_t VAR_5, qhandle_t VAR_6,
        int VAR_7, qboolean VAR_8 ) {
 float VAR_9;
 localEntity_t *VAR_10;
 int VAR_11;
 vec3_t VAR_12, VAR_13;

 if ( VAR_7 <= 0 ) {
  FUNC_2( "CG_MakeExplosion: msec = %i", VAR_7 );
 }


 VAR_11 = FUNC_7() & 63;

 VAR_10 = FUNC_1();
 if ( VAR_8 ) {
  VAR_10->leType = VAR_1;


  VAR_10->refEntity.rotation = FUNC_7() % 360;
  FUNC_6( VAR_4, 16, VAR_12 );
  FUNC_4( VAR_12, VAR_3, VAR_13 );
 } else {
  VAR_10->leType = VAR_0;
  FUNC_5( VAR_3, VAR_13 );


  if ( !VAR_4 ) {
   FUNC_0( VAR_10->refEntity.axis );
  } else {
   VAR_9 = FUNC_7() % 360;
   FUNC_5( VAR_4, VAR_10->refEntity.axis[0] );
   FUNC_3( VAR_10->refEntity.axis, VAR_9 );
  }
 }

 VAR_10->startTime = VAR_2.time - VAR_11;
 VAR_10->endTime = VAR_10->startTime + VAR_7;


 VAR_10->refEntity.shaderTime = VAR_10->startTime / 1000.0f;

 VAR_10->refEntity.hModel = VAR_5;
 VAR_10->refEntity.customShader = VAR_6;


 FUNC_5( VAR_13, VAR_10->refEntity.origin );
 FUNC_5( VAR_13, VAR_10->refEntity.oldorigin );

 VAR_10->color[0] = VAR_10->color[1] = VAR_10->color[2] = 1.0;

 return VAR_10;
}
