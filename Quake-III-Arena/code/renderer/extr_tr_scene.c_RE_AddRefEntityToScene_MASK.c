
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ reType; } ;
typedef TYPE_2__ refEntity_t ;
struct TYPE_11__ {TYPE_1__* entities; } ;
struct TYPE_10__ {int (* Error ) (int ,char*,scalar_t__) ;} ;
struct TYPE_9__ {size_t smpFrame; int registered; } ;
struct TYPE_7__ {int lightingCalculated; TYPE_2__ e; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__** VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 TYPE_3__ VAR_7 ;

void FUNC_1( const refEntity_t *VAR_8 ) {
 if ( !VAR_7.registered ) {
  return;
 }

 if ( VAR_5 >= VAR_0 ) {
  return;
 }
 if ( VAR_8->reType < 0 || VAR_8->reType >= VAR_2 ) {
  VAR_6.Error( VAR_1, "RE_AddRefEntityToScene: bad reType %i", VAR_8->reType );
 }

 VAR_3[VAR_7.smpFrame]->entities[VAR_5].e = *VAR_8;
 VAR_3[VAR_7.smpFrame]->entities[VAR_5].lightingCalculated = VAR_4;

 VAR_5++;
}
