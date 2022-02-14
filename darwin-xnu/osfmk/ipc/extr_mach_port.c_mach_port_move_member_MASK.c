
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef scalar_t__ ipc_pset_t ;
typedef scalar_t__ ipc_port_t ;
typedef TYPE_1__* ipc_entry_t ;
struct TYPE_5__ {int ie_bits; scalar_t__ ie_object; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__* FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,int ,TYPE_1__**) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (int *,int,int ) ;

kern_return_t
FUNC_18(
 ipc_space_t VAR_13,
 mach_port_name_t VAR_14,
 mach_port_name_t VAR_15)
{
 ipc_entry_t VAR_16;
 ipc_port_t VAR_17;
 ipc_pset_t VAR_18;
 kern_return_t VAR_19;
 uint64_t VAR_20 = 0;
 uint64_t VAR_21 = 0;

 if (VAR_13 == VAR_3)
  return VAR_6;

 if (!FUNC_0(VAR_14))
  return VAR_5;

 if (VAR_15 == VAR_8) {
  return VAR_5;
 } else if (VAR_15 == VAR_9) {
  VAR_20 = 0;
 } else {
  VAR_20 = FUNC_15(((void*)0));
  VAR_21 = FUNC_17(((void*)0), 10,
                                              VAR_12);
  VAR_19 = FUNC_8(VAR_13, VAR_15);
  if (VAR_19 != VAR_7)
   goto done;
 }

 VAR_19 = FUNC_10(VAR_13, VAR_14, &VAR_16);
 if (VAR_19 != VAR_7)
  goto done;


 if ((VAR_16->ie_bits & VAR_11) == 0) {
  FUNC_13(VAR_13);
  VAR_19 = VAR_5;
  goto done;
 }

 FUNC_1(VAR_17 = (ipc_port_t) VAR_16->ie_object);
 FUNC_2(VAR_17 != VAR_2);

 if (VAR_15 == VAR_9)
  VAR_18 = VAR_1;
 else {
  VAR_16 = FUNC_6(VAR_13, VAR_15);
  if (VAR_16 == VAR_0) {
   FUNC_13(VAR_13);
   VAR_19 = VAR_4;
   goto done;
  }

  if ((VAR_16->ie_bits & VAR_10) == 0) {
   FUNC_13(VAR_13);
   VAR_19 = VAR_5;
   goto done;
  }

  FUNC_1(VAR_18 = (ipc_pset_t) VAR_16->ie_object);
  FUNC_2(VAR_18 != VAR_1);
 }
 FUNC_4(VAR_17);
 FUNC_2(FUNC_3(VAR_17));
 FUNC_9(VAR_17);

 if (VAR_18 != VAR_1) {
  FUNC_11(VAR_18);
  VAR_19 = FUNC_7(VAR_18, VAR_17, &VAR_20, &VAR_21);
  FUNC_12(VAR_18);
 }
 FUNC_5(VAR_17);
 FUNC_13(VAR_13);

 done:





 FUNC_14(VAR_20);
 FUNC_16(VAR_21);

 return VAR_19;
}
