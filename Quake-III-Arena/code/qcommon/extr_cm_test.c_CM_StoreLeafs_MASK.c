
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lastLeaf; scalar_t__ count; scalar_t__ maxcount; int* list; int overflowed; } ;
typedef TYPE_2__ leafList_t ;
struct TYPE_7__ {TYPE_1__* leafs; } ;
struct TYPE_5__ {int cluster; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;

void FUNC_0( leafList_t *VAR_2, int VAR_3 ) {
 int VAR_4;

 VAR_4 = -1 - VAR_3;


 if ( VAR_0.leafs[ VAR_4 ].cluster != -1 ) {
  VAR_2->lastLeaf = VAR_4;
 }

 if ( VAR_2->count >= VAR_2->maxcount) {
  VAR_2->overflowed = VAR_1;
  return;
 }
 VAR_2->list[ VAR_2->count++ ] = VAR_4;
}
