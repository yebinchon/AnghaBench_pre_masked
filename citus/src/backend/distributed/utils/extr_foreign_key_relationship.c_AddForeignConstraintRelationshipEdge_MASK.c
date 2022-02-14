
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nodeMap; } ;
struct TYPE_5__ {void* backAdjacencyList; void* adjacencyList; } ;
typedef int Oid ;
typedef TYPE_1__ ForeignConstraintRelationshipNode ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 TYPE_3__* VAR_0 ;
 void* FUNC_1 (void*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(Oid VAR_1, Oid VAR_2)
{
 ForeignConstraintRelationshipNode *VAR_3 = FUNC_0(
  VAR_0->nodeMap, VAR_1);
 ForeignConstraintRelationshipNode *VAR_4 = FUNC_0(
  VAR_0->nodeMap, VAR_2);

 VAR_3->adjacencyList = FUNC_1(VAR_3->adjacencyList,
            VAR_4);
 VAR_4->backAdjacencyList = FUNC_1(VAR_4->backAdjacencyList,
            VAR_3);
}
