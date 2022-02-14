
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_7__ {int planenum; int surfaceFlags; int * visibleHull; } ;
typedef TYPE_1__ side_t ;
struct TYPE_8__ {int planenum; int hint; struct TYPE_8__* next; int w; } ;
typedef TYPE_2__ bspface_t ;
struct TYPE_9__ {int numsides; TYPE_1__* sides; scalar_t__ detail; struct TYPE_9__* next; } ;
typedef TYPE_3__ bspbrush_t ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

bspface_t *FUNC_2( bspbrush_t *VAR_2 ) {
 bspbrush_t *VAR_3;
 int VAR_4;
 side_t *VAR_5;
 winding_t *VAR_6;
 bspface_t *VAR_7, *VAR_8;

 VAR_8 = ((void*)0);
 for ( VAR_3 = VAR_2 ; VAR_3 ; VAR_3 = VAR_3->next ) {
  if ( VAR_3->detail ) {
   continue;
  }
  for ( VAR_4 = 0 ; VAR_4 < VAR_3->numsides ; VAR_4++ ) {
   VAR_5 = &VAR_3->sides[VAR_4];
   VAR_6 = VAR_5->visibleHull;
   if ( !VAR_6 ) {
    continue;
   }
   VAR_7 = FUNC_0();
   VAR_7->w = FUNC_1( VAR_6 );
   VAR_7->planenum = VAR_5->planenum & ~1;
   VAR_7->next = VAR_8;
   if (VAR_5->surfaceFlags & VAR_0) {

    VAR_7->hint = VAR_1;
   }
   VAR_8 = VAR_7;
  }
 }

 return VAR_8;
}
