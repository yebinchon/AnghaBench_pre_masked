
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int height; int * start_level; TYPE_1__* levels; int * dalloc; int * alloc; } ;
typedef TYPE_2__ rtree_t ;
typedef int rtree_node_dalloc_t ;
typedef int rtree_node_alloc_t ;
struct TYPE_4__ {unsigned int bits; unsigned int cumbits; int * subtree; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,unsigned int) ;

bool
FUNC_2(rtree_t *VAR_2, unsigned VAR_3, rtree_node_alloc_t *VAR_4,
    rtree_node_dalloc_t *VAR_5)
{
 unsigned VAR_6, VAR_7, VAR_8;

 FUNC_0(VAR_3 > 0 && VAR_3 <= (sizeof(uintptr_t) << 3));

 VAR_6 = (VAR_3 % VAR_0) == 0 ? VAR_0
     : (VAR_3 % VAR_0);
 if (VAR_3 > VAR_6) {
  VAR_7 = 1 + (VAR_3 - VAR_6) / VAR_0;
  if ((VAR_7-1) * VAR_0 + VAR_6 != VAR_3)
   VAR_7++;
 } else
  VAR_7 = 1;
 FUNC_0((VAR_7-1) * VAR_0 + VAR_6 == VAR_3);

 VAR_2->alloc = VAR_4;
 VAR_2->dalloc = VAR_5;
 VAR_2->height = VAR_7;


 VAR_2->levels[0].subtree = ((void*)0);
 VAR_2->levels[0].bits = (VAR_7 > 1) ? VAR_0 :
     VAR_6;
 VAR_2->levels[0].cumbits = VAR_2->levels[0].bits;

 for (VAR_8 = 1; VAR_8 < VAR_7-1; VAR_8++) {
  VAR_2->levels[VAR_8].subtree = ((void*)0);
  VAR_2->levels[VAR_8].bits = VAR_0;
  VAR_2->levels[VAR_8].cumbits = VAR_2->levels[VAR_8-1].cumbits +
      VAR_0;
 }

 if (VAR_7 > 1) {
  VAR_2->levels[VAR_7-1].subtree = ((void*)0);
  VAR_2->levels[VAR_7-1].bits = VAR_6;
  VAR_2->levels[VAR_7-1].cumbits = VAR_3;
 }


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_2->start_level[VAR_8] = FUNC_1(VAR_1 - 1 - VAR_8, VAR_7 -
      1);
 }

 return (0);
}
