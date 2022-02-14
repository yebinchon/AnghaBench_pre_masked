
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapage {int wait; scalar_t__ flag; int * log; scalar_t__ clsn; int * data; scalar_t__ lsn; scalar_t__ lid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct metapage *VAR_2 = (struct metapage *)VAR_1;

 VAR_2->lid = 0;
 VAR_2->lsn = 0;
 VAR_2->flag = 0;
 VAR_2->data = ((void*)0);
 VAR_2->clsn = 0;
 VAR_2->log = ((void*)0);
 FUNC_1(VAR_0, &VAR_2->flag);
 FUNC_0(&VAR_2->wait);
}
