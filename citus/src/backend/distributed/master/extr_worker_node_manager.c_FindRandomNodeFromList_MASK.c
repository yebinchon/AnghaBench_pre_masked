
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int WorkerNode ;
typedef int List ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 () ;

__attribute__((used)) static WorkerNode *
FUNC_3(List *VAR_0)
{
 uint32 VAR_1 = FUNC_0(VAR_0);


 uint32 VAR_2 = (FUNC_2() % VAR_1);

 WorkerNode *VAR_3 =
  (WorkerNode *) FUNC_1(VAR_0, VAR_2);

 return VAR_3;
}
