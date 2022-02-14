
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;
typedef int WorkerNode ;
typedef int List ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;

WorkerNode *
FUNC_2(List *VAR_0, uint64 VAR_1,
         uint32 VAR_2)
{
 uint32 VAR_3 = FUNC_0(VAR_0);
 WorkerNode *VAR_4 = ((void*)0);

 if (VAR_2 < VAR_3)
 {
  uint32 VAR_5 = (VAR_1 + VAR_2) % VAR_3;
  VAR_4 = (WorkerNode *) FUNC_1(VAR_0, VAR_5);
 }

 return VAR_4;
}
