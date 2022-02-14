
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_9__ {int* shaderRGBA; double radius; int origin; } ;
typedef TYPE_2__ refEntity_t ;
struct TYPE_10__ {scalar_t__ fadeInTime; scalar_t__ startTime; float endTime; float lifeRate; int* color; int leFlags; double radius; int pos; TYPE_2__ refEntity; } ;
typedef TYPE_3__ localEntity_t ;
struct TYPE_8__ {int vieworg; } ;
struct TYPE_11__ {scalar_t__ time; TYPE_1__ refdef; } ;


 int FUNC_0 (int *,float,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 float FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_5__ VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5( localEntity_t *VAR_2 ) {
 refEntity_t *VAR_3;
 float VAR_4;
 vec3_t VAR_5;
 float VAR_6;

 VAR_3 = &VAR_2->refEntity;

 if ( VAR_2->fadeInTime > VAR_2->startTime && VAR_1.time < VAR_2->fadeInTime ) {

  VAR_4 = 1.0 - (float) ( VAR_2->fadeInTime - VAR_1.time ) / ( VAR_2->fadeInTime - VAR_2->startTime );
 }
 else {

  VAR_4 = ( VAR_2->endTime - VAR_1.time ) * VAR_2->lifeRate;
 }

 VAR_3->shaderRGBA[3] = 0xff * VAR_4 * VAR_2->color[3];

 if ( !( VAR_2->leFlags & VAR_0 ) ) {
  VAR_3->radius = VAR_2->radius * ( 1.0 - VAR_4 ) + 8;
 }

 FUNC_0( &VAR_2->pos, VAR_1.time, VAR_3->origin );



 FUNC_3( VAR_3->origin, VAR_1.refdef.vieworg, VAR_5 );
 VAR_6 = FUNC_2( VAR_5 );
 if ( VAR_6 < VAR_2->radius ) {
  FUNC_1( VAR_2 );
  return;
 }

 FUNC_4( VAR_3 );
}
