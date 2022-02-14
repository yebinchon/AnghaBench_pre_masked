
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int referencingRelationOID; int referencedRelationOID; } ;
typedef TYPE_1__ ForeignConstraintRelationshipEdge ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const
            void *VAR_1)
{
 const ForeignConstraintRelationshipEdge *VAR_2 = *((const
                 ForeignConstraintRelationshipEdge
                 **) VAR_0);
 const ForeignConstraintRelationshipEdge *VAR_3 = *((const
               ForeignConstraintRelationshipEdge
               **) VAR_1);

 int VAR_4 = VAR_2->referencingRelationOID -
        VAR_3->referencingRelationOID;
 int VAR_5 = VAR_2->referencedRelationOID -
       VAR_3->referencedRelationOID;

 if (VAR_4 != 0)
 {
  return VAR_4;
 }

 return VAR_5;
}
