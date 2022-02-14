
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wait_result_t ;
typedef size_t uint32_t ;
typedef int event_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,size_t,int ) ;
 size_t* VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;

void
FUNC_3(uint32_t VAR_9)
{
 wait_result_t VAR_10;
 uint32_t VAR_11;

 if (VAR_9 >= VAR_1)
         VAR_9 = VAR_1 - 1;
 VAR_8[VAR_9]++;

 if (VAR_9 >= VAR_0)
         VAR_9 = VAR_0 - 1;
 VAR_11 = VAR_7[VAR_9];

 VAR_10 = FUNC_1((event_t)FUNC_3, VAR_5, VAR_11, VAR_2);
 FUNC_0(VAR_10 == VAR_6);

 VAR_10 = FUNC_2(VAR_3);
 FUNC_0(VAR_10 == VAR_4);
}
