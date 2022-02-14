
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* task_t ;
struct task_requested_policy {scalar_t__ trp_qos_clamp; scalar_t__ trp_sfi_managed; scalar_t__ trp_over_through_qos; scalar_t__ trp_base_through_qos; scalar_t__ trp_over_latency_qos; scalar_t__ trp_base_latency_qos; scalar_t__ trp_sup_bg_sockets; scalar_t__ trp_sup_disk; scalar_t__ trp_sup_throughput; scalar_t__ trp_sup_timer; scalar_t__ trp_sup_cpu; scalar_t__ trp_sup_lowpri_cpu; scalar_t__ trp_sup_active; scalar_t__ trp_role; scalar_t__ trp_apptype; scalar_t__ trp_tal_enabled; scalar_t__ trp_boosted; scalar_t__ trp_terminated; scalar_t__ trp_bg_iotier; scalar_t__ trp_ext_iopassive; scalar_t__ trp_int_iopassive; scalar_t__ trp_ext_iotier; scalar_t__ trp_int_iotier; scalar_t__ trp_ext_darwinbg; scalar_t__ trp_int_darwinbg; } ;
struct TYPE_3__ {struct task_requested_policy requested_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

uint64_t
FUNC_0(task_t VAR_25)
{
 uint64_t VAR_26 = 0;
 struct task_requested_policy VAR_27 = VAR_25->requested_policy;

 VAR_26 |= (VAR_27.trp_int_darwinbg ? VAR_8 : 0);
 VAR_26 |= (VAR_27.trp_ext_darwinbg ? VAR_5 : 0);
 VAR_26 |= (VAR_27.trp_int_iotier ? (((uint64_t)VAR_27.trp_int_iotier) << VAR_9) : 0);
 VAR_26 |= (VAR_27.trp_ext_iotier ? (((uint64_t)VAR_27.trp_ext_iotier) << VAR_6) : 0);
 VAR_26 |= (VAR_27.trp_int_iopassive ? VAR_10 : 0);
 VAR_26 |= (VAR_27.trp_ext_iopassive ? VAR_7 : 0);
 VAR_26 |= (VAR_27.trp_bg_iotier ? (((uint64_t)VAR_27.trp_bg_iotier) << VAR_3) : 0);
 VAR_26 |= (VAR_27.trp_terminated ? VAR_24 : 0);

 VAR_26 |= (VAR_27.trp_boosted ? VAR_4 : 0);
 VAR_26 |= (VAR_27.trp_tal_enabled ? VAR_23 : 0);
 VAR_26 |= (VAR_27.trp_apptype ? (((uint64_t)VAR_27.trp_apptype) << VAR_0) : 0);
 VAR_26 |= (VAR_27.trp_role ? (((uint64_t)VAR_27.trp_role) << VAR_14) : 0);

 VAR_26 |= (VAR_27.trp_sup_active ? VAR_16 : 0);
 VAR_26 |= (VAR_27.trp_sup_lowpri_cpu ? VAR_20 : 0);
 VAR_26 |= (VAR_27.trp_sup_cpu ? VAR_18 : 0);
 VAR_26 |= (VAR_27.trp_sup_timer ? (((uint64_t)VAR_27.trp_sup_timer) << VAR_22) : 0);
 VAR_26 |= (VAR_27.trp_sup_throughput ? (((uint64_t)VAR_27.trp_sup_throughput) << VAR_21) : 0);
 VAR_26 |= (VAR_27.trp_sup_disk ? VAR_19 : 0);
 VAR_26 |= (VAR_27.trp_sup_bg_sockets ? VAR_17 : 0);

 VAR_26 |= (VAR_27.trp_base_latency_qos ? (((uint64_t)VAR_27.trp_base_latency_qos) << VAR_1) : 0);
 VAR_26 |= (VAR_27.trp_over_latency_qos ? (((uint64_t)VAR_27.trp_over_latency_qos) << VAR_11) : 0);
 VAR_26 |= (VAR_27.trp_base_through_qos ? (((uint64_t)VAR_27.trp_base_through_qos) << VAR_2) : 0);
 VAR_26 |= (VAR_27.trp_over_through_qos ? (((uint64_t)VAR_27.trp_over_through_qos) << VAR_12) : 0);
 VAR_26 |= (VAR_27.trp_sfi_managed ? VAR_15 : 0);
 VAR_26 |= (VAR_27.trp_qos_clamp ? (((uint64_t)VAR_27.trp_qos_clamp) << VAR_13) : 0);

 return VAR_26;
}
