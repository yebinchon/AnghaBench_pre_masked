
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int node_t ;
struct TYPE_3__ {int ** freelist; int blocPtrs; int ** nodePtrs; } ;
typedef TYPE_1__ huff_t ;



__attribute__((used)) static node_t **FUNC_0(huff_t* VAR_0) {
 node_t **VAR_1;
 if (!VAR_0->freelist) {
  return &(VAR_0->nodePtrs[VAR_0->blocPtrs++]);
 } else {
  VAR_1 = VAR_0->freelist;
  VAR_0->freelist = (node_t **)*VAR_1;
  return VAR_1;
 }
}
