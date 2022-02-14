
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int task_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int *,int *,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(task_t VAR_6, uint32_t *VAR_7, uint8_t *VAR_8, uint64_t *VAR_9, uint64_t *VAR_10)
{

 int VAR_11 = 0;
 int VAR_12;

 FUNC_1(VAR_6);


 VAR_11 = FUNC_0(VAR_6, VAR_8, VAR_9, VAR_10, &VAR_12);
 FUNC_2(VAR_6);




 if (VAR_12 == VAR_4) {
  *VAR_7 = VAR_1;
 } else if (VAR_12 == VAR_5) {
  *VAR_7 = VAR_2;
 } else if (VAR_12 == VAR_3) {
  *VAR_7 = VAR_0;
 }

 return(VAR_11);
}
