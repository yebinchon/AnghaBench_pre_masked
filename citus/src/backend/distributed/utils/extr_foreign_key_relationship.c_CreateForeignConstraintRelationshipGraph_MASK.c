
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
typedef int info ;
struct TYPE_7__ {int isValid; int nodeMap; } ;
struct TYPE_6__ {int keysize; int entrysize; int hcxt; int hash; } ;
typedef int Oid ;
typedef int * MemoryContext ;
typedef TYPE_1__ HASHCTL ;
typedef int ForeignConstraintRelationshipNode ;
typedef TYPE_2__ ForeignConstraintRelationshipGraph ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 () ;
 int * FUNC_3 (int *) ;
 int FUNC_4 () ;
 TYPE_2__* VAR_8 ;
 int FUNC_5 (char*,int,TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8()
{
 MemoryContext VAR_10;
 MemoryContext VAR_11 = ((void*)0);
 HASHCTL VAR_12;
 uint32 VAR_13 = 0;


 if (FUNC_2())
 {
  return;
 }

 FUNC_1();

 VAR_11 = FUNC_0(
  VAR_3,
  "Forign Constraint Relationship Graph Context",
  VAR_2,
  VAR_0,
  VAR_1);

 VAR_10 = FUNC_3(VAR_11);

 VAR_8 = (ForeignConstraintRelationshipGraph *) FUNC_7(
  sizeof(ForeignConstraintRelationshipGraph));
 VAR_8->isValid = 0;


 FUNC_6(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.keysize = sizeof(Oid);
 VAR_12.entrysize = sizeof(ForeignConstraintRelationshipNode);
 VAR_12.hash = VAR_9;
 VAR_12.hcxt = VAR_4;
 VAR_13 = (VAR_6 | VAR_7 | VAR_5);

 VAR_8->nodeMap = FUNC_5(
  "foreign key relationship map (oid)",
  32, &VAR_12, VAR_13);

 FUNC_4();

 VAR_8->isValid = 1;
 FUNC_3(VAR_10);
}
