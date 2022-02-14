
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
typedef scalar_t__ task_t ;
struct task_pend_token {int dummy; } ;
struct TYPE_11__ {int thrp_qos; } ;
struct TYPE_12__ {scalar_t__ task; TYPE_1__ requested_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int ,int ,int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int,int ,struct task_pend_token*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,struct task_pend_token*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

void
FUNC_11(task_t VAR_6, thread_t VAR_7) {
 struct task_pend_token VAR_8 = {};

 FUNC_2(VAR_7->task == VAR_6);

 FUNC_5(VAR_7);

 FUNC_1(VAR_3,
                           (FUNC_0(VAR_2, 0)) | VAR_1,
                           FUNC_8(VAR_7), FUNC_9(VAR_7), FUNC_10(VAR_7),
                           VAR_7->requested_policy.thrp_qos, 0);

 int VAR_9 = FUNC_4(VAR_6);

 FUNC_3(VAR_7, VAR_4, VAR_5,
                               VAR_9, 0, &VAR_8);

 FUNC_6(VAR_7);

 FUNC_7(VAR_7, &VAR_8);

 FUNC_1(VAR_3,
                           (FUNC_0(VAR_2, 0)) | VAR_0,
                           FUNC_8(VAR_7), FUNC_9(VAR_7), FUNC_10(VAR_7),
                           VAR_9, 0);
}
