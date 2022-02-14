
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * bounds; int (* storeLeafs ) (TYPE_1__*,int) ;} ;
typedef TYPE_1__ leafList_t ;
typedef int cplane_t ;
struct TYPE_7__ {int* children; int * plane; } ;
typedef TYPE_2__ cNode_t ;
struct TYPE_8__ {TYPE_2__* nodes; } ;


 int FUNC_0 (int ,int ,int *) ;
 TYPE_4__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2( leafList_t *VAR_1, int VAR_2 ) {
 cplane_t *VAR_3;
 cNode_t *VAR_4;
 int VAR_5;

 while (1) {
  if (VAR_2 < 0) {
   VAR_1->storeLeafs( VAR_1, VAR_2 );
   return;
  }

  VAR_4 = &VAR_0.nodes[VAR_2];
  VAR_3 = VAR_4->plane;
  VAR_5 = FUNC_0( VAR_1->bounds[0], VAR_1->bounds[1], VAR_3 );
  if (VAR_5 == 1) {
   VAR_2 = VAR_4->children[0];
  } else if (VAR_5 == 2) {
   VAR_2 = VAR_4->children[1];
  } else {

   FUNC_2( VAR_1, VAR_4->children[0] );
   VAR_2 = VAR_4->children[1];
  }

 }
}
