
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * initiatorProc; int waitsFor; } ;
typedef TYPE_1__ TransactionNode ;
typedef int HTAB ;
typedef int DistributedTransactionId ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int*) ;

__attribute__((used)) static TransactionNode *
FUNC_1(HTAB *VAR_2, DistributedTransactionId *VAR_3)
{
 TransactionNode *VAR_4 = ((void*)0);
 bool VAR_5 = 0;

 VAR_4 = (TransactionNode *) FUNC_0(VAR_2, VAR_3,
               VAR_0, &VAR_5);
 if (!VAR_5)
 {
  VAR_4->waitsFor = VAR_1;
  VAR_4->initiatorProc = ((void*)0);
 }

 return VAR_4;
}
