
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ planenum; scalar_t__ shaderInfo; } ;
typedef TYPE_1__ side_t ;
struct TYPE_5__ {scalar_t__ planenum; scalar_t__ shaderInfo; int count; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

void FUNC_1( side_t *VAR_3 ) {
 int VAR_4;

 for ( VAR_4 = 0 ; VAR_4 < VAR_1 ; VAR_4++ ) {
  if ( VAR_3->planenum == VAR_2[VAR_4].planenum
   && VAR_3->shaderInfo == VAR_2[VAR_4].shaderInfo ) {
   VAR_2[VAR_4].count++;
   return;
  }
 }

 if ( VAR_1 == VAR_0 ) {
  FUNC_0( "MAX_SIDE_REFS" );
 }

 VAR_2[VAR_4].planenum = VAR_3->planenum;
 VAR_2[VAR_4].shaderInfo = VAR_3->shaderInfo;
 VAR_2[VAR_4].count++;
 VAR_1++;
}
