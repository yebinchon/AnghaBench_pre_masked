
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int thread_qos_t ;
struct task_pend_token {int tpt_force_recompute_pri; } ;
typedef int boolean_t ;
struct TYPE_10__ {int base_pri; int user_promotion_basepri; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int,int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ) ;
 int VAR_10 ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,int ,struct task_pend_token*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,struct task_pend_token*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int) ;

boolean_t
FUNC_11(thread_t VAR_11)
{
 boolean_t VAR_12 = VAR_1;
 struct task_pend_token VAR_13 = {};
 int VAR_14 = FUNC_1(FUNC_4(VAR_11), VAR_4);
 int VAR_15 = VAR_11->base_pri;
 thread_qos_t VAR_16;


 if (VAR_11->user_promotion_basepri == VAR_14) {
  return VAR_12;
 } else {
  FUNC_0(VAR_2,
   (FUNC_2(VAR_10, (VAR_8))) | VAR_0,
   FUNC_8(VAR_11),
   VAR_14,
   VAR_11->user_promotion_basepri,
   0, 0);
 }


 VAR_11->user_promotion_basepri = VAR_14;
 VAR_13.tpt_force_recompute_pri = 1;

 if (VAR_14 <= VAR_3) {
  VAR_16 = VAR_7;
 } else {
  VAR_16 = FUNC_10(VAR_14);
 }

 FUNC_3(VAR_11, VAR_5,
   VAR_6, VAR_16, 0, &VAR_13);

 if (FUNC_5(VAR_11) &&
     VAR_11->base_pri != VAR_15) {
  VAR_12 = VAR_9;
 }

 FUNC_9(VAR_11);

 FUNC_7(VAR_11, &VAR_13);

 FUNC_6(VAR_11);

 return VAR_12;
}
