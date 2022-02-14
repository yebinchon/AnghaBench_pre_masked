
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct TYPE_5__ {int applied_ru_cpu_ext; int policy_ru_cpu_ext; void* bsd_info; } ;






 int VAR_0 ;


 int FUNC_0 (void*,int const,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(task_t VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0;
 void * VAR_4 = ((void*)0);

 switch (VAR_2) {
  case 133:
   break;
  case 128:
  case 129:
  case 132:
  case 131:
  case 130:
   return(0);

  default:
   return(1);
 };


 FUNC_1(VAR_1);

 if (VAR_1->applied_ru_cpu_ext == VAR_0) {

  VAR_1->applied_ru_cpu_ext = VAR_1->policy_ru_cpu_ext;
  VAR_3 = VAR_1->applied_ru_cpu_ext;
 } else {
  VAR_3 = VAR_1->applied_ru_cpu_ext;
 }

 if (VAR_3 != VAR_0) {
  VAR_4 = VAR_1->bsd_info;
  FUNC_2(VAR_1);
  FUNC_0(VAR_4, 133, VAR_3);
 } else
  FUNC_2(VAR_1);

 return(0);
}
