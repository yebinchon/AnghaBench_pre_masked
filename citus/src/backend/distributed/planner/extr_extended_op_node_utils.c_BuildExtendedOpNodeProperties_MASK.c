
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int groupedByDisjointPartitionColumn; int repartitionSubquery; int hasNonPartitionColumnDistinctAgg; int pullDistinctColumns; int pushDownWindowFunctions; } ;
struct TYPE_7__ {int hasWindowFuncs; int * havingQual; int * targetList; } ;
typedef int Node ;
typedef int MultiNode ;
typedef TYPE_1__ MultiExtendedOp ;
typedef int List ;
typedef TYPE_2__ ExtendedOpNodeProperties ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *,int *) ;
 int * VAR_0 ;
 int FUNC_4 (int,int,int) ;
 int VAR_1 ;

ExtendedOpNodeProperties
FUNC_5(MultiExtendedOp *VAR_2)
{
 ExtendedOpNodeProperties VAR_3;
 List *VAR_4 = VAR_0;
 List *VAR_5 = VAR_0;
 Node *VAR_6 = ((void*)0);

 bool VAR_7 = 0;
 bool VAR_8 = 0;
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 bool VAR_11 = 0;

 VAR_4 = FUNC_1((MultiNode *) VAR_2, VAR_1);
 VAR_7 = FUNC_2(VAR_4,
                  VAR_2);

 VAR_8 = FUNC_0(VAR_2);

 VAR_5 = VAR_2->targetList;
 VAR_6 = VAR_2->havingQual;
 VAR_9 =
  FUNC_3(VAR_5, VAR_6, VAR_4);

 VAR_10 =
  FUNC_4(VAR_8, VAR_7,
         VAR_9);






 VAR_11 = VAR_2->hasWindowFuncs;

 VAR_3.groupedByDisjointPartitionColumn =
  VAR_7;
 VAR_3.repartitionSubquery = VAR_8;
 VAR_3.hasNonPartitionColumnDistinctAgg =
  VAR_9;
 VAR_3.pullDistinctColumns = VAR_10;
 VAR_3.pushDownWindowFunctions = VAR_11;

 return VAR_3;
}
