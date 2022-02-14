
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int end; int start; } ;
typedef TYPE_1__ traceWork_t ;
struct TYPE_7__ {int numFacets; scalar_t__ facets; int shader; int radius; int origin; } ;
typedef TYPE_2__ surfaceTest_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2( traceWork_t *VAR_4, surfaceTest_t *VAR_5 ) {
 int VAR_6;


 if ( FUNC_0( VAR_4->start, VAR_4->end, VAR_5->origin, VAR_5->radius ) ) {
  if ( VAR_3 == 1 ) {
   VAR_0++;
  }
  return;
 }

 if ( VAR_3 == 1 ) {
  VAR_2++;
  VAR_1 += VAR_5->numFacets;
 }
 for ( VAR_6 = 0 ; VAR_6 < VAR_5->numFacets ; VAR_6++ ) {
  FUNC_1( VAR_4, VAR_5->shader, VAR_5->facets + VAR_6 );
 }
}
