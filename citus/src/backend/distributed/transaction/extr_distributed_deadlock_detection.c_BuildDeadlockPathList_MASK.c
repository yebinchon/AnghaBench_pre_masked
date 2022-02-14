
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TransactionNode ;
struct TYPE_3__ {int currentStackDepth; } ;
typedef TYPE_1__ QueuedTransactionNode ;
typedef int List ;


 int * VAR_0 ;
 int * FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(QueuedTransactionNode *VAR_1,
       TransactionNode **VAR_2,
       List **VAR_3)
{
 int VAR_4 = VAR_1->currentStackDepth;
 int VAR_5 = 0;

 *VAR_3 = VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  *VAR_3 = FUNC_0(*VAR_3, VAR_2[VAR_5]);
 }
}
