
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int origin; } ;
typedef TYPE_1__ refEntity_t ;
struct TYPE_7__ {float light; float startTime; float endTime; int * lightColor; TYPE_1__ refEntity; } ;
typedef TYPE_2__ localEntity_t ;
struct TYPE_8__ {float time; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (int ,float,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2( localEntity_t *VAR_1 ) {
 refEntity_t *VAR_2;

 VAR_2 = &VAR_1->refEntity;


 FUNC_1(VAR_2);


 if ( VAR_1->light ) {
  float VAR_3;

  VAR_3 = (float)( VAR_0.time - VAR_1->startTime ) / ( VAR_1->endTime - VAR_1->startTime );
  if ( VAR_3 < 0.5 ) {
   VAR_3 = 1.0;
  } else {
   VAR_3 = 1.0 - ( VAR_3 - 0.5 ) * 2;
  }
  VAR_3 = VAR_1->light * VAR_3;
  FUNC_0(VAR_2->origin, VAR_3, VAR_1->lightColor[0], VAR_1->lightColor[1], VAR_1->lightColor[2] );
 }
}
