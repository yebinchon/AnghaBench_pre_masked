
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int task_t ;
typedef TYPE_1__* task_pend_token_t ;
typedef void* boolean_t ;
struct TYPE_3__ {int tpt_update_coal_sfi; void* tpt_update_tg_ui_flag; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (int ,int,int*) ;
 scalar_t__ FUNC_1 (int ,int,int*) ;

__attribute__((used)) static boolean_t
FUNC_2(task_t VAR_4,
                                         int VAR_5,
                                         int VAR_6,
                                         task_pend_token_t VAR_7)
{
 boolean_t VAR_8 = VAR_0;
 uint32_t VAR_9 = 0;


 if (VAR_5 != VAR_2 && VAR_6 == VAR_2) {
  if (FUNC_0(VAR_4, 1, &VAR_9) && (VAR_9 == 1)) {
   VAR_8 = VAR_3;
   VAR_7->tpt_update_tg_ui_flag = VAR_3;
  }
 } else if (VAR_5 == VAR_2 && VAR_6 != VAR_2) {
  if (FUNC_0(VAR_4, -1, &VAR_9) && (VAR_9 == 0)) {
   VAR_8 = VAR_3;
   VAR_7->tpt_update_tg_ui_flag = VAR_3;
  }
 }


 if (VAR_5 != VAR_1 && VAR_6 == VAR_1) {
  if (FUNC_1(VAR_4, 1, &VAR_9) && (VAR_9 == 1))
   VAR_8 = VAR_3;
 } else if (VAR_5 == VAR_1 && VAR_6 != VAR_1) {
  if (FUNC_1(VAR_4, -1, &VAR_9) && (VAR_9 == 0))
   VAR_8 = VAR_3;
 }

 if (VAR_8)
     VAR_7->tpt_update_coal_sfi = 1;
 return VAR_8;
}
