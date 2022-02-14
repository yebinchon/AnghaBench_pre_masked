
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int task_t ;
typedef int * purgeable_q_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;

uint64_t
FUNC_1(
 task_t VAR_5)
{
 purgeable_q_t VAR_6 = ((void*)0);
 int VAR_7 = 0;
 uint64_t VAR_8 = 0;

 VAR_8 = 0;

 VAR_6 = &VAR_4[VAR_3];
 VAR_8 += FUNC_0(VAR_6,
          0,
          VAR_5);

 VAR_6 = &VAR_4[VAR_1];
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_8 += FUNC_0(VAR_6,
           VAR_7,
           VAR_5);

 VAR_6 = &VAR_4[VAR_2];
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_8 += FUNC_0(VAR_6,
           VAR_7,
           VAR_5);

 return VAR_8;
}
