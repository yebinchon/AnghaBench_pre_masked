
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int hModel; } ;
struct TYPE_12__ {TYPE_2__ e; } ;
typedef TYPE_3__ trRefEntity_t ;
struct TYPE_13__ {TYPE_5__* bmodel; } ;
typedef TYPE_4__ model_t ;
struct TYPE_14__ {int numSurfaces; scalar_t__ firstSurface; int bounds; } ;
typedef TYPE_5__ bmodel_t ;
struct TYPE_15__ {TYPE_1__* currentEntity; } ;
struct TYPE_10__ {int needDlights; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_4__* FUNC_3 (int ) ;
 TYPE_6__ VAR_1 ;

void FUNC_4 ( trRefEntity_t *VAR_2 ) {
 bmodel_t *VAR_3;
 int VAR_4;
 model_t *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3( VAR_2->e.hModel );

 VAR_3 = VAR_5->bmodel;

 VAR_4 = FUNC_1( VAR_3->bounds );
 if ( VAR_4 == VAR_0 ) {
  return;
 }

 FUNC_2( VAR_3 );

 for ( VAR_6 = 0 ; VAR_6 < VAR_3->numSurfaces ; VAR_6++ ) {
  FUNC_0( VAR_3->firstSurface + VAR_6, VAR_1.currentEntity->needDlights );
 }
}
