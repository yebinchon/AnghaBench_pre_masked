
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int period; int constraint; int computation; int preemptible; } ;
typedef TYPE_1__ thread_time_constraint_policy_data_t ;
typedef int thread_policy_t ;
struct TYPE_5__ {int timeshare; } ;
typedef TYPE_2__ thread_extended_policy_data_t ;
typedef int my_policy_type_t ;
struct TYPE_6__ {int denom; int numer; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

int
FUNC_4(my_policy_type_t VAR_8)
{
 int VAR_9;

 switch (VAR_8) {
  case 128:
  {
   return 0;
  }
  case 129:
  {
   thread_time_constraint_policy_data_t VAR_10;


   VAR_10.period = 100000;
   VAR_10.constraint = VAR_1 * VAR_7.denom / VAR_7.numer;
   VAR_10.computation = VAR_0 * VAR_7.denom / VAR_7.numer;
   VAR_10.preemptible = 0;

   VAR_9 = FUNC_3(FUNC_1(), VAR_4, (thread_policy_t) &VAR_10, VAR_5);
   FUNC_0(VAR_9 == 0, VAR_6);
   break;
  }
  case 130:
  {
   thread_extended_policy_data_t VAR_11;
   VAR_11.timeshare = 0;

   VAR_9 = FUNC_3(FUNC_1(), VAR_2, (thread_policy_t) &VAR_11, VAR_3);
   FUNC_0(VAR_9 == 0, VAR_6);
   break;
  }
  default:
  {
   FUNC_2("invalid policy type\n");
   return 1;
  }
 }

 return 0;
fail:
 return 1;
}
