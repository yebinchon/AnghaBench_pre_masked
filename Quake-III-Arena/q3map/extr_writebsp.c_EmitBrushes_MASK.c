
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


struct TYPE_13__ {void* shaderNum; int planeNum; } ;
typedef TYPE_4__ dbrushside_t ;
struct TYPE_14__ {size_t firstSide; scalar_t__ numSides; void* shaderNum; } ;
typedef TYPE_5__ dbrush_t ;
struct TYPE_15__ {size_t outputNumber; int numsides; TYPE_3__* sides; TYPE_1__* contentShader; struct TYPE_15__* next; } ;
typedef TYPE_6__ bspbrush_t ;
struct TYPE_12__ {TYPE_2__* shaderInfo; int planenum; scalar_t__ backSide; } ;
struct TYPE_11__ {int shader; } ;
struct TYPE_10__ {int shader; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_5__* VAR_2 ;
 TYPE_4__* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

void FUNC_2 ( bspbrush_t *VAR_6 ) {
 int VAR_7;
 dbrush_t *VAR_8;
 bspbrush_t *VAR_9;
 dbrushside_t *VAR_10;

 for ( VAR_9 = VAR_6 ; VAR_9 ; VAR_9 = VAR_9->next ) {
  if ( VAR_4 == VAR_0 ) {
   FUNC_1( "MAX_MAP_BRUSHES" );
  }
  VAR_9->outputNumber = VAR_4;
  VAR_8 = &VAR_2[VAR_4];
  VAR_4++;

  VAR_8->shaderNum = FUNC_0( VAR_9->contentShader->shader );
  VAR_8->firstSide = VAR_5;


  VAR_8->numSides = 0;
  for ( VAR_7=0 ; VAR_7<VAR_9->numsides ; VAR_7++ ) {
   if ( VAR_9->sides[VAR_7].backSide ) {
    continue;
   }
   if ( VAR_5 == VAR_1 ) {
    FUNC_1( "MAX_MAP_BRUSHSIDES ");
   }
   VAR_10 = &VAR_3[VAR_5];
   VAR_8->numSides++;
   VAR_5++;
   VAR_10->planeNum = VAR_9->sides[VAR_7].planenum;
   VAR_10->shaderNum = FUNC_0( VAR_9->sides[VAR_7].shaderInfo->shader );
  }
 }

}
