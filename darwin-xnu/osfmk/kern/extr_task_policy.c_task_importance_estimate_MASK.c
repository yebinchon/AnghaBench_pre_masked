
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * task_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ) ;

int
FUNC_1(task_t VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5 == ((void*)0)) {
  return 0;
 }

 if (FUNC_0(VAR_5, VAR_4) == VAR_0)
   VAR_6 += VAR_1;

 if (FUNC_0(VAR_5, VAR_3) == 0)
   VAR_6 += VAR_2;

 return VAR_6;
}
