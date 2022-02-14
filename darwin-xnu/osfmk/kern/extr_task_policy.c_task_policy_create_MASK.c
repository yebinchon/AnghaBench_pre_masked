
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_2__* task_t ;
struct TYPE_13__ {scalar_t__ trp_apptype; scalar_t__ trp_boosted; int trp_qos_clamp; int trp_terminated; int trp_bg_iotier; int trp_ext_iopassive; int trp_int_iopassive; int trp_ext_iotier; int trp_int_iotier; int trp_ext_darwinbg; int trp_int_darwinbg; } ;
struct TYPE_14__ {int priority; TYPE_1__ requested_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

void
FUNC_10(task_t VAR_11, task_t VAR_12)
{
 VAR_11->requested_policy.trp_apptype = VAR_12->requested_policy.trp_apptype;

 VAR_11->requested_policy.trp_int_darwinbg = VAR_12->requested_policy.trp_int_darwinbg;
 VAR_11->requested_policy.trp_ext_darwinbg = VAR_12->requested_policy.trp_ext_darwinbg;
 VAR_11->requested_policy.trp_int_iotier = VAR_12->requested_policy.trp_int_iotier;
 VAR_11->requested_policy.trp_ext_iotier = VAR_12->requested_policy.trp_ext_iotier;
 VAR_11->requested_policy.trp_int_iopassive = VAR_12->requested_policy.trp_int_iopassive;
 VAR_11->requested_policy.trp_ext_iopassive = VAR_12->requested_policy.trp_ext_iopassive;
 VAR_11->requested_policy.trp_bg_iotier = VAR_12->requested_policy.trp_bg_iotier;
 VAR_11->requested_policy.trp_terminated = VAR_12->requested_policy.trp_terminated;
 VAR_11->requested_policy.trp_qos_clamp = VAR_12->requested_policy.trp_qos_clamp;

 if (VAR_11->requested_policy.trp_apptype == VAR_6 && !FUNC_5(VAR_11)) {

  if (VAR_12->requested_policy.trp_boosted) {
   VAR_11->requested_policy.trp_apptype = VAR_8;
   FUNC_2(VAR_11, VAR_10);
  } else {
   VAR_11->requested_policy.trp_apptype = VAR_7;
   FUNC_3(VAR_11, VAR_2);
  }
 }

 FUNC_1(VAR_5,
                           (FUNC_0(VAR_3, (VAR_4 | VAR_9))) | VAR_1,
                           FUNC_6(VAR_11), FUNC_8(VAR_11),
                           FUNC_9(VAR_11), VAR_11->priority, 0);

 FUNC_7(VAR_11, VAR_10, ((void*)0));

 FUNC_1(VAR_5,
                           (FUNC_0(VAR_3, (VAR_4 | VAR_9))) | VAR_0,
                           FUNC_6(VAR_11), FUNC_8(VAR_11),
                           FUNC_9(VAR_11), VAR_11->priority, 0);

 FUNC_4(VAR_11);
}
