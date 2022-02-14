
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int allocatedSize; int edgeCount; int * edges; } ;
typedef TYPE_1__ WaitGraph ;
typedef int WaitEdge ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static WaitEdge *
FUNC_1(WaitGraph *VAR_0)
{

 if (VAR_0->allocatedSize == VAR_0->edgeCount)
 {
  VAR_0->allocatedSize *= 2;
  VAR_0->edges = (WaitEdge *)
         FUNC_0(VAR_0->edges, sizeof(WaitEdge) *
         VAR_0->allocatedSize);
 }

 return &VAR_0->edges[VAR_0->edgeCount++];
}
