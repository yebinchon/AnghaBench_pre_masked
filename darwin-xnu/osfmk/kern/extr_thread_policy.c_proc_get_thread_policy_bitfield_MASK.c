
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* thread_t ;
typedef TYPE_2__* thread_policy_state_t ;
struct thread_requested_policy {scalar_t__ thrp_through_qos; scalar_t__ thrp_latency_qos; scalar_t__ thrp_pidbind_bg; scalar_t__ thrp_qos_override; scalar_t__ thrp_qos; scalar_t__ thrp_ext_iopassive; scalar_t__ thrp_int_iopassive; scalar_t__ thrp_ext_iotier; scalar_t__ thrp_int_iotier; scalar_t__ thrp_ext_darwinbg; scalar_t__ thrp_int_darwinbg; } ;
struct thread_effective_policy {scalar_t__ thep_through_qos; scalar_t__ thep_latency_qos; scalar_t__ thep_qos; scalar_t__ thep_new_sockets_bg; scalar_t__ thep_all_sockets_bg; scalar_t__ thep_io_passive; scalar_t__ thep_io_tier; scalar_t__ thep_darwinbg; } ;
typedef void* integer_t ;
struct TYPE_6__ {scalar_t__ pending; void* effective; void* requested; } ;
struct TYPE_5__ {struct thread_effective_policy effective_policy; struct thread_requested_policy requested_policy; } ;


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

__attribute__((used)) static void
FUNC_0(thread_t VAR_19, thread_policy_state_t VAR_20)
{
 uint64_t VAR_21 = 0;
 struct thread_requested_policy VAR_22 = VAR_19->requested_policy;

 VAR_21 |= (VAR_22.thrp_int_darwinbg ? VAR_13 : 0);
 VAR_21 |= (VAR_22.thrp_ext_darwinbg ? VAR_10 : 0);
 VAR_21 |= (VAR_22.thrp_int_iotier ? (((uint64_t)VAR_22.thrp_int_iotier) << VAR_14) : 0);
 VAR_21 |= (VAR_22.thrp_ext_iotier ? (((uint64_t)VAR_22.thrp_ext_iotier) << VAR_11) : 0);
 VAR_21 |= (VAR_22.thrp_int_iopassive ? VAR_15 : 0);
 VAR_21 |= (VAR_22.thrp_ext_iopassive ? VAR_12 : 0);

 VAR_21 |= (VAR_22.thrp_qos ? (((uint64_t)VAR_22.thrp_qos) << VAR_18) : 0);
 VAR_21 |= (VAR_22.thrp_qos_override ? (((uint64_t)VAR_22.thrp_qos_override) << VAR_17) : 0);

 VAR_21 |= (VAR_22.thrp_pidbind_bg ? VAR_16 : 0);

 VAR_21 |= (VAR_22.thrp_latency_qos ? (((uint64_t)VAR_22.thrp_latency_qos) << VAR_8) : 0);
 VAR_21 |= (VAR_22.thrp_through_qos ? (((uint64_t)VAR_22.thrp_through_qos) << VAR_9) : 0);

 VAR_20->requested = (integer_t) VAR_21;
 VAR_21 = 0;

 struct thread_effective_policy VAR_23 = VAR_19->effective_policy;

 VAR_21 |= (VAR_23.thep_darwinbg ? VAR_1 : 0);

 VAR_21 |= (VAR_23.thep_io_tier ? (((uint64_t)VAR_23.thep_io_tier) << VAR_3) : 0);
 VAR_21 |= (VAR_23.thep_io_passive ? VAR_2 : 0);
 VAR_21 |= (VAR_23.thep_all_sockets_bg ? VAR_0 : 0);
 VAR_21 |= (VAR_23.thep_new_sockets_bg ? VAR_5 : 0);

 VAR_21 |= (VAR_23.thep_qos ? (((uint64_t)VAR_23.thep_qos) << VAR_7) : 0);

 VAR_21 |= (VAR_23.thep_latency_qos ? (((uint64_t)VAR_23.thep_latency_qos) << VAR_4) : 0);
 VAR_21 |= (VAR_23.thep_through_qos ? (((uint64_t)VAR_23.thep_through_qos) << VAR_6) : 0);

 VAR_20->effective = (integer_t)VAR_21;
 VAR_21 = 0;

 VAR_20->pending = 0;
}
