
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ pthread_priority_t ;
typedef scalar_t__ mach_msg_priority_t ;
typedef int mach_msg_option_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_port_t ;
typedef TYPE_2__* ipc_kmsg_t ;
struct TYPE_6__ {scalar_t__ ikm_qos; scalar_t__ ikm_qos_override; TYPE_1__* ikm_header; } ;
struct TYPE_5__ {int msgh_bits; int msgh_remote_port; int msgh_local_port; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static kern_return_t
FUNC_6(
 ipc_kmsg_t VAR_6,
 mach_msg_option_t VAR_7,
 mach_msg_priority_t VAR_8)
{
 kern_return_t VAR_9;
 ipc_port_t VAR_10 = VAR_6->ikm_header->msgh_local_port;
 ipc_port_t VAR_11 = VAR_6->ikm_header->msgh_remote_port;

 VAR_9 = FUNC_4(VAR_6, &VAR_6->ikm_qos);
 if (VAR_9 != VAR_0) {
  if (VAR_7 & VAR_4) {
   VAR_6->ikm_qos = FUNC_3();
  } else {
   VAR_6->ikm_qos = VAR_1;
  }
 }
 VAR_6->ikm_qos_override = VAR_6->ikm_qos;

 if (VAR_7 & VAR_3) {
  pthread_priority_t VAR_12 = FUNC_2(VAR_8);
  if (VAR_12 > VAR_6->ikm_qos)
   VAR_6->ikm_qos_override = (mach_msg_priority_t)VAR_12;
 }

 VAR_9 = VAR_0;
 if ((VAR_7 & VAR_5)) {
  if (FUNC_0(VAR_10) &&
      FUNC_1(VAR_6->ikm_header->msgh_bits) == VAR_2) {




   FUNC_5(VAR_10, VAR_11);
  }
 }
 return VAR_9;
}
