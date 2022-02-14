
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec_t ;
struct TYPE_9__ {size_t planenum; } ;
typedef TYPE_1__ side_t ;
struct TYPE_10__ {int* normal; int dist; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_11__ {int numsides; TYPE_1__* sides; struct TYPE_11__* next; } ;
typedef TYPE_3__ bspbrush_t ;
struct TYPE_12__ {TYPE_3__* brushes; } ;


 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (int*,int ) ;
 int FUNC_3 (char*,TYPE_3__*) ;
 TYPE_5__* VAR_0 ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_2__* VAR_1 ;

void FUNC_5( void ) {
 side_t *VAR_2;
 int VAR_3, VAR_4;
 bspbrush_t *VAR_5, *VAR_6, *VAR_7;
 vec_t VAR_8;
 plane_t *VAR_9;

 VAR_6 = ((void*)0);

 for ( VAR_5 = VAR_0[0].brushes ; VAR_5 ; VAR_5 = VAR_5->next ) {
  VAR_7 = FUNC_0( VAR_5 );
  VAR_7->next = VAR_6;
  VAR_6 = VAR_7;


  for ( VAR_3=0 ; VAR_3<VAR_5->numsides ; VAR_3++ ) {
   VAR_2 = VAR_5->sides + VAR_3;
   VAR_9 = &VAR_1[VAR_2->planenum];
   VAR_8 = VAR_9->dist;
   for (VAR_4=0 ; VAR_4<3 ; VAR_4++) {
    VAR_8 += FUNC_4( 16 * VAR_9->normal[VAR_4] );
   }
   VAR_2->planenum = FUNC_2( VAR_9->normal, VAR_8 );
  }

 }

 FUNC_3 ( "expanded.map", VAR_0[0].brushes );

 FUNC_1 ("can't proceed after expanding brushes");
}
