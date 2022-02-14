
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int member_0; } ;
typedef TYPE_1__ thread_precedence_policy_data_t ;
typedef int thread_policy_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void)
{
 if (VAR_5 > (VAR_3 / 100 * 90) || VAR_4 > VAR_3 / 2) {
  thread_precedence_policy_data_t VAR_6 = {12 };
  FUNC_0(VAR_2, VAR_0, (thread_policy_t) &VAR_6, VAR_1);
 }
 else {
  thread_precedence_policy_data_t VAR_7 = {-39 };
  FUNC_0(VAR_2, VAR_0, (thread_policy_t) &VAR_7, VAR_1);

 }
}
