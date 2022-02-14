
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int headnode; } ;
typedef TYPE_2__ tree_t ;
struct TYPE_12__ {TYPE_4__* brushes; } ;
typedef TYPE_3__ entity_t ;
struct TYPE_13__ {int numsides; TYPE_1__* sides; int detail; struct TYPE_13__* next; } ;
typedef TYPE_4__ bspbrush_t ;
struct TYPE_10__ {int visible; scalar_t__ winding; } ;


 TYPE_4__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;

void FUNC_3( entity_t *VAR_1, tree_t *VAR_2 ) {
 bspbrush_t *VAR_3, *VAR_4;
 int VAR_5;
 int VAR_6, VAR_7;
 int VAR_8;

 FUNC_2( "----- FilterDetailBrushesIntoTree -----\n");

 VAR_6 = 0;
 VAR_7 = 0;
 for ( VAR_3 = VAR_1->brushes ; VAR_3 ; VAR_3 = VAR_3->next ) {
  if ( !VAR_3->detail ) {
   continue;
  }
  VAR_6++;
  VAR_4 = FUNC_0( VAR_3 );
  VAR_5 = FUNC_1( VAR_4, VAR_2->headnode );
  VAR_7 += VAR_5;


  if ( VAR_5 ) {
   for ( VAR_8 = 0 ; VAR_8 < VAR_3->numsides ; VAR_8++ ) {
    if ( VAR_3->sides[VAR_8].winding ) {
     VAR_3->sides[VAR_8].visible = VAR_0;
    }
   }
  }
 }

 FUNC_2( "%5i detail brushes\n", VAR_6 );
 FUNC_2( "%5i cluster references\n", VAR_7 );
}
