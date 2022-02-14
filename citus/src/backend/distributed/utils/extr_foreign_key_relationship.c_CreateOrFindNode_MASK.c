
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int visited; void* backAdjacencyList; void* adjacencyList; } ;
typedef int Oid ;
typedef int HTAB ;
typedef TYPE_1__ ForeignConstraintRelationshipNode ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int*) ;

__attribute__((used)) static ForeignConstraintRelationshipNode *
FUNC_1(HTAB *VAR_2, Oid VAR_3)
{
 bool VAR_4 = 0;
 ForeignConstraintRelationshipNode *VAR_5 =
  (ForeignConstraintRelationshipNode *) FUNC_0(VAR_2,
                &VAR_3, VAR_0,
                &VAR_4);

 if (!VAR_4)
 {
  VAR_5->adjacencyList = VAR_1;
  VAR_5->backAdjacencyList = VAR_1;
  VAR_5->visited = 0;
 }

 return VAR_5;
}
