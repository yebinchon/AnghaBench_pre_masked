
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_12__ {int rotation; float radius; int shaderTime; int* shaderRGBA; int reType; int customShader; int origin; } ;
typedef TYPE_4__ refEntity_t ;
typedef int qhandle_t ;
struct TYPE_9__ {int trTime; int trBase; int trDelta; int trType; } ;
struct TYPE_13__ {int leFlags; float radius; int startTime; int fadeInTime; int endTime; double lifeRate; float* color; TYPE_1__ pos; int leType; TYPE_4__ refEntity; } ;
typedef TYPE_5__ localEntity_t ;
struct TYPE_11__ {int smokePuffRageProShader; } ;
struct TYPE_10__ {scalar_t__ hardwareType; } ;
struct TYPE_14__ {TYPE_3__ media; TYPE_2__ glconfig; } ;


 TYPE_5__* FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int const,int ) ;
 TYPE_6__ VAR_4 ;

localEntity_t *FUNC_3( const vec3_t VAR_5, const vec3_t VAR_6,
       float VAR_7,
       float VAR_8, float VAR_9, float VAR_10, float VAR_11,
       float VAR_12,
       int VAR_13,
       int VAR_14,
       int VAR_15,
       qhandle_t VAR_16 ) {
 static int VAR_17 = 0x92;
 localEntity_t *VAR_18;
 refEntity_t *VAR_19;


 VAR_18 = FUNC_0();
 VAR_18->leFlags = VAR_15;
 VAR_18->radius = VAR_7;

 VAR_19 = &VAR_18->refEntity;
 VAR_19->rotation = FUNC_1( &VAR_17 ) * 360;
 VAR_19->radius = VAR_7;
 VAR_19->shaderTime = VAR_13 / 1000.0f;

 VAR_18->leType = VAR_1;
 VAR_18->startTime = VAR_13;
 VAR_18->fadeInTime = VAR_14;
 VAR_18->endTime = VAR_13 + VAR_12;
 if ( VAR_14 > VAR_13 ) {
  VAR_18->lifeRate = 1.0 / ( VAR_18->endTime - VAR_18->fadeInTime );
 }
 else {
  VAR_18->lifeRate = 1.0 / ( VAR_18->endTime - VAR_18->startTime );
 }
 VAR_18->color[0] = VAR_8;
 VAR_18->color[1] = VAR_9;
 VAR_18->color[2] = VAR_10;
 VAR_18->color[3] = VAR_11;


 VAR_18->pos.trType = VAR_3;
 VAR_18->pos.trTime = VAR_13;
 FUNC_2( VAR_6, VAR_18->pos.trDelta );
 FUNC_2( VAR_5, VAR_18->pos.trBase );

 FUNC_2( VAR_5, VAR_19->origin );
 VAR_19->customShader = VAR_16;


 if ( VAR_4.glconfig.hardwareType == VAR_0 ) {
  VAR_19->customShader = VAR_4.media.smokePuffRageProShader;
  VAR_19->shaderRGBA[0] = 0xff;
  VAR_19->shaderRGBA[1] = 0xff;
  VAR_19->shaderRGBA[2] = 0xff;
  VAR_19->shaderRGBA[3] = 0xff;
 } else {
  VAR_19->shaderRGBA[0] = VAR_18->color[0] * 0xff;
  VAR_19->shaderRGBA[1] = VAR_18->color[1] * 0xff;
  VAR_19->shaderRGBA[2] = VAR_18->color[2] * 0xff;
  VAR_19->shaderRGBA[3] = 0xff;
 }

 VAR_19->reType = VAR_2;
 VAR_19->radius = VAR_18->radius;

 return VAR_18;
}
