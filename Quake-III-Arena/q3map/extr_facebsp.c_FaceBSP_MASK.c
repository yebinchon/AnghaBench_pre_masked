
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_6__* headnode; int maxs; int mins; } ;
typedef TYPE_2__ tree_t ;
struct TYPE_12__ {TYPE_1__* w; struct TYPE_12__* next; } ;
typedef TYPE_3__ bspface_t ;
struct TYPE_13__ {int maxs; int mins; } ;
struct TYPE_10__ {int numpoints; int * p; } ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_6__* FUNC_1 () ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_6__*,TYPE_3__*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (char*,...) ;

tree_t *FUNC_6( bspface_t *VAR_1 ) {
 tree_t *VAR_2;
 bspface_t *VAR_3;
 int VAR_4;
 int VAR_5;

 FUNC_5( "--- FaceBSP ---\n" );

 VAR_2 = FUNC_2 ();

 VAR_5 = 0;
 for ( VAR_3 = VAR_1 ; VAR_3 ; VAR_3 = VAR_3->next ) {
  VAR_5++;
  for ( VAR_4 = 0 ; VAR_4 < VAR_3->w->numpoints ; VAR_4++ ) {
   FUNC_0( VAR_3->w->p[VAR_4], VAR_2->mins, VAR_2->maxs);
  }
 }
 FUNC_5( "%5i faces\n", VAR_5 );

 VAR_2->headnode = FUNC_1();
 FUNC_4( VAR_2->mins, VAR_2->headnode->mins );
 FUNC_4( VAR_2->maxs, VAR_2->headnode->maxs );
 VAR_0 = 0;

 FUNC_3 ( VAR_2->headnode, VAR_1 );

 FUNC_5( "%5i leafs\n", VAR_0 );

 return VAR_2;
}
