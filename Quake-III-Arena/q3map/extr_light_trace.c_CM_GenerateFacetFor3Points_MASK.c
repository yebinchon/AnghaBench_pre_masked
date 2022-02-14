
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_11__ {int xyz; } ;
typedef TYPE_1__ drawVert_t ;
struct TYPE_12__ {int numBoundaries; int * points; int surface; int * boundaries; } ;
typedef TYPE_2__ cFacet_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_4( cFacet_t *VAR_2, drawVert_t *VAR_3, drawVert_t *VAR_4, drawVert_t *VAR_5 ) {

 if ( !FUNC_1( VAR_2->surface, VAR_3->xyz, VAR_4->xyz, VAR_5->xyz ) ) {
  VAR_2->numBoundaries = 0;
  return VAR_0;
 }


 VAR_2->numBoundaries = 3;

 FUNC_0( VAR_2->boundaries[0], VAR_2->surface, VAR_3->xyz, VAR_4->xyz );
 FUNC_0( VAR_2->boundaries[1], VAR_2->surface, VAR_4->xyz, VAR_5->xyz );
 FUNC_0( VAR_2->boundaries[2], VAR_2->surface, VAR_5->xyz, VAR_3->xyz );

 FUNC_3( VAR_3->xyz, VAR_2->points[0] );
 FUNC_3( VAR_4->xyz, VAR_2->points[1] );
 FUNC_3( VAR_5->xyz, VAR_2->points[2] );

 FUNC_2( VAR_2, VAR_3, VAR_4, VAR_5 );

 return VAR_1;
}
