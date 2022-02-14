
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int planeNum; int* children; int dist; int normal; int type; } ;
typedef TYPE_1__ tnode_t ;
struct TYPE_8__ {int dist; int normal; } ;
typedef TYPE_2__ dplane_t ;
struct TYPE_9__ {int planeNum; int* children; } ;
typedef TYPE_3__ dnode_t ;
struct TYPE_10__ {int cluster; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_6__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_2 (int VAR_5)
{
 tnode_t *VAR_6;
 dplane_t *VAR_7;
 int VAR_8;
 dnode_t *VAR_9;
 int VAR_10;

 VAR_6 = VAR_3++;

 VAR_9 = VAR_1 + VAR_5;
 VAR_7 = VAR_2 + VAR_9->planeNum;

 VAR_6->planeNum = VAR_9->planeNum;
 VAR_6->type = FUNC_0( VAR_7->normal );
 FUNC_1 (VAR_7->normal, VAR_6->normal);
 VAR_6->dist = VAR_7->dist;

 for (VAR_8=0 ; VAR_8<2 ; VAR_8++)
 {
  if (VAR_9->children[VAR_8] < 0) {
   VAR_10 = -VAR_9->children[VAR_8] - 1;
   if ( VAR_0[VAR_10].cluster == -1 ) {

    VAR_6->children[VAR_8] = VAR_10 | ( 1 << 31 ) | ( 1 << 30 );
   } else {
    VAR_6->children[VAR_8] = VAR_10 | ( 1 << 31 );
   }
  } else {
   VAR_6->children[VAR_8] = VAR_3 - VAR_4;
   FUNC_2 (VAR_9->children[VAR_8]);
  }
 }

}
