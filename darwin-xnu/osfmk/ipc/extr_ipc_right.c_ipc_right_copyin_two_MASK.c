
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef scalar_t__ mach_msg_type_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef scalar_t__ ipc_port_t ;
typedef scalar_t__ ipc_object_t ;
typedef TYPE_1__* ipc_entry_t ;
struct TYPE_6__ {int ie_bits; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_1__*,scalar_t__,int ,scalar_t__*,scalar_t__*,scalar_t__*,int*) ;
 int FUNC_5 (int ,int ,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,TYPE_1__*,scalar_t__*,scalar_t__*,scalar_t__*) ;

kern_return_t
FUNC_7(
 ipc_space_t VAR_11,
 mach_port_name_t VAR_12,
 ipc_entry_t VAR_13,
 mach_msg_type_name_t VAR_14,
 mach_msg_type_name_t VAR_15,
 ipc_object_t *VAR_16,
 ipc_port_t *VAR_17,
 ipc_port_t *VAR_18)
{
 kern_return_t VAR_19;
 int VAR_20 = 0;

 FUNC_2(FUNC_1(VAR_14));
 FUNC_2(FUNC_1(VAR_15));





 if (!FUNC_5(VAR_11, VAR_12, VAR_13, VAR_15)) {
  return VAR_2;
 }
 if (VAR_14 == VAR_9 ||
     VAR_15 == VAR_9) {
  return VAR_3;
 }

 if ((VAR_14 == VAR_6) ||
     (VAR_14 == VAR_7) ||
     (VAR_15 == VAR_6) ||
     (VAR_15 == VAR_7)) {
  ipc_object_t VAR_21;

  VAR_19 = FUNC_4(VAR_11, VAR_12, VAR_13,
          VAR_14, VAR_0,
          VAR_16, VAR_17, VAR_18,
          &VAR_20);
  FUNC_2(VAR_20 == 0);
  if (VAR_19 != VAR_4) {
   return VAR_19;
  }

  FUNC_2(FUNC_0(*VAR_16));
  FUNC_2(*VAR_17 == VAR_1);
  FUNC_2(*VAR_18 == VAR_1);







  VAR_19 = FUNC_4(VAR_11, VAR_12, VAR_13,
          VAR_15, VAR_0,
          &VAR_21, VAR_17, VAR_18,
          &VAR_20);
  FUNC_2(VAR_20 == 0);
  FUNC_2(VAR_19 == VAR_4);
  FUNC_2(*VAR_17 == VAR_1);
  FUNC_2(*VAR_18 == VAR_1);
  FUNC_2(VAR_21 == *VAR_16);
  FUNC_2(VAR_13->ie_bits & VAR_10);

 } else if ((VAR_14 == VAR_8) &&
     (VAR_15 == VAR_8)) {





  VAR_19 = FUNC_6(VAR_11, VAR_12, VAR_13,
           VAR_16, VAR_17,
           VAR_18);
  if (VAR_19 != VAR_4) {
   return VAR_19;
  }

 } else {
  mach_msg_type_name_t VAR_22;
  if (VAR_14 == VAR_8 ||
      VAR_15 == VAR_8) {
   VAR_22 = VAR_8;
  } else {
   VAR_22 = VAR_5;
  }

  VAR_19 = FUNC_4(VAR_11, VAR_12, VAR_13,
          VAR_22, VAR_0,
          VAR_16, VAR_17, VAR_18,
          &VAR_20);
  FUNC_2(VAR_20 == 0);
  if (VAR_19 != VAR_4) {
   return VAR_19;
  }






  (void)FUNC_3((ipc_port_t)*VAR_16);
 }

 return VAR_4;
}
