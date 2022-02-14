
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int transactionVisited; } ;
typedef TYPE_1__ TransactionNode ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(HTAB *VAR_0)
{
 HASH_SEQ_STATUS VAR_1;
 TransactionNode *VAR_2 = ((void*)0);


 FUNC_0(&VAR_1, VAR_0);

 while ((VAR_2 = (TransactionNode *) FUNC_1(&VAR_1)) != 0)
 {
  VAR_2->transactionVisited = 0;
 }
}
