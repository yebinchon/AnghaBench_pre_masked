
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ mach_port_t ;
typedef int mach_port_right_t ;
struct TYPE_3__ {scalar_t__ len; scalar_t__ name; scalar_t__ prealloc; } ;
typedef TYPE_1__ mach_port_qos_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ mach_msg_size_t ;
typedef int kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef int ipc_pset_t ;
typedef int ipc_port_t ;
typedef scalar_t__ ipc_kmsg_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;



 int FUNC_0 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (scalar_t__,int *,int *) ;
 int FUNC_7 (scalar_t__,int ,int *) ;
 int FUNC_8 (scalar_t__,int *,int *) ;
 int FUNC_9 (scalar_t__,int ,int *) ;
 int FUNC_10 (int ) ;

kern_return_t
FUNC_11(
 ipc_space_t VAR_9,
 mach_port_right_t VAR_10,
 mach_port_t VAR_11,
 mach_port_qos_t *VAR_12,
 mach_port_name_t *VAR_13)
{
 ipc_kmsg_t VAR_14 = VAR_0;
 kern_return_t VAR_15;

 if (VAR_9 == VAR_1)
  return (VAR_2);

 if (VAR_11 != VAR_7)
  return (VAR_3);

 if (VAR_12->name) {
  if (!FUNC_0 (*VAR_13))
   return (VAR_3);
 }

 if (VAR_12->prealloc) {
  if (VAR_12->len > VAR_6 - VAR_8) {
   return VAR_4;
  } else {
   mach_msg_size_t VAR_16 = VAR_12->len + VAR_8;

   if (VAR_10 != 128) {
    return (VAR_3);
   }

   VAR_14 = (ipc_kmsg_t)FUNC_3(VAR_16);
   if (VAR_14 == VAR_0) {
    return (VAR_4);
   }
  }
 }

 switch (VAR_10) {
     case 128:
     {
  ipc_port_t VAR_17;

  if (VAR_12->name)
   VAR_15 = FUNC_7(VAR_9, *VAR_13, &VAR_17);
  else
   VAR_15 = FUNC_6(VAR_9, VAR_13, &VAR_17);
  if (VAR_15 == VAR_5) {
   if (VAR_14 != VAR_0)
    FUNC_4(VAR_14, VAR_17);

   FUNC_1(VAR_17);

  } else if (VAR_14 != VAR_0)
   FUNC_2(VAR_14);
  break;
     }

     case 129:
     {
  ipc_pset_t VAR_18;

  if (VAR_12->name)
   VAR_15 = FUNC_9(VAR_9, *VAR_13, &VAR_18);
  else
   VAR_15 = FUNC_8(VAR_9, VAR_13, &VAR_18);
  if (VAR_15 == VAR_5)
   FUNC_10(VAR_18);
  break;
     }

     case 130:
  VAR_15 = FUNC_5(VAR_9, VAR_13);
  break;

     default:
  VAR_15 = VAR_3;
  break;
 }

 return (VAR_15);
}
