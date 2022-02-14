
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* task_t ;
struct TYPE_7__ {int policy_ru_cpu_ext; int policy_ru_cpu; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int,int) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(task_t VAR_5, uint32_t VAR_6, uint8_t VAR_7, uint64_t VAR_8, uint64_t VAR_9,
 int VAR_10)
{
 int VAR_11 = 0;
 int VAR_12;




  switch (VAR_6) {

  case 133:
 case 128:
  if (VAR_9 != 0)
   return (VAR_1);
  VAR_12 = VAR_4;
  break;
 case 130:
 case 129:
 case 131:
  if (VAR_7 != 0)
   return (VAR_1);
  VAR_12 = VAR_2;
  break;
  case 132:
  if (VAR_9 != 0)
   return (VAR_1);
  VAR_12 = VAR_3;



  break;
 default:
  return (VAR_0);
 }

 FUNC_1(VAR_5);
 if (VAR_5 != FUNC_0()) {
  VAR_5->policy_ru_cpu_ext = VAR_6;
 } else {
  VAR_5->policy_ru_cpu = VAR_6;
 }
 VAR_11 = FUNC_2(VAR_5, VAR_7, VAR_8, VAR_9, VAR_12, VAR_10);
 FUNC_3(VAR_5);
 return(VAR_11);
}
