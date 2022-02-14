
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int transactionVisited; } ;
typedef TYPE_1__ TransactionNode ;
struct TYPE_10__ {int currentStackDepth; TYPE_1__* transactionNode; } ;
typedef TYPE_2__ QueuedTransactionNode ;
typedef int List ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__**,int **) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_1__*,int const,int **) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 TYPE_1__** FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__**) ;

__attribute__((used)) static bool
FUNC_7(TransactionNode *VAR_1,
        int VAR_2,
        List **VAR_3)
{
 List *VAR_4 = VAR_0;
 const int VAR_5 = 0;
 TransactionNode **VAR_6 =
  FUNC_5(VAR_2 * sizeof(TransactionNode *));






 VAR_6[VAR_5] = VAR_1;

 FUNC_2(VAR_1, VAR_5,
        &VAR_4);


 while (VAR_4 != VAR_0)
 {
  int VAR_7;
  QueuedTransactionNode *VAR_8 =
   (QueuedTransactionNode *) FUNC_3(VAR_4);
  TransactionNode *VAR_9 = VAR_8->transactionNode;

  VAR_4 = FUNC_4(VAR_4);


  if (VAR_9 == VAR_1)
  {
   FUNC_1(VAR_8, VAR_6,
          VAR_3);

   FUNC_6(VAR_6);
   return 1;
  }


  if (VAR_9->transactionVisited)
  {
   continue;
  }

  VAR_9->transactionVisited = 1;


  VAR_7 = VAR_8->currentStackDepth;
  FUNC_0(VAR_7 < VAR_2);
  VAR_6[VAR_7] = VAR_9;

  FUNC_2(VAR_9, VAR_7,
         &VAR_4);
 }

 FUNC_6(VAR_6);
 return 0;
}
