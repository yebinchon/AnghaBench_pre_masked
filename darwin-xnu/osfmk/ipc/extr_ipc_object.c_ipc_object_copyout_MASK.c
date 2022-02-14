
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct knote {int dummy; } ;
typedef int mach_port_name_t ;
typedef int mach_msg_type_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef int ipc_port_t ;
typedef scalar_t__ ipc_object_t ;
typedef TYPE_1__* ipc_entry_t ;
typedef int boolean_t ;
struct TYPE_8__ {struct knote* ith_knote; } ;
struct TYPE_7__ {int ie_bits; scalar_t__ ie_object; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct knote*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 TYPE_6__* FUNC_5 () ;
 int FUNC_6 (struct knote*,int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_12 (int ,int *,TYPE_1__**) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ,TYPE_1__*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_15 (int ,scalar_t__,int *,TYPE_1__**) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

kern_return_t
FUNC_19(
 ipc_space_t VAR_9,
 ipc_object_t VAR_10,
 mach_msg_type_name_t VAR_11,
 boolean_t VAR_12,
 mach_port_name_t *VAR_13)
{
 struct knote *VAR_14 = FUNC_5()->ith_knote;
 mach_port_name_t VAR_15;
 ipc_entry_t VAR_16;
 kern_return_t VAR_17;

 FUNC_4(FUNC_2(VAR_10));
 FUNC_4(FUNC_9(VAR_10) == VAR_0);

 if (FUNC_3(VAR_14, VAR_11)) {
  FUNC_6(VAR_14,
    VAR_11, (ipc_port_t)VAR_10);
 }

 FUNC_17(VAR_9);

 for (;;) {
  if (!FUNC_16(VAR_9)) {
   FUNC_18(VAR_9);
   return VAR_4;
  }

  if ((VAR_11 != VAR_6) &&
      FUNC_15(VAR_9, VAR_10, &VAR_15, &VAR_16)) {


   FUNC_4(VAR_16->ie_bits & VAR_8);
   break;
  }

  VAR_15 = FUNC_0(VAR_10);
  VAR_17 = FUNC_12(VAR_9, &VAR_15, &VAR_16);
  if (VAR_17 != VAR_5) {


   VAR_17 = FUNC_13(VAR_9, VAR_2);
   if (VAR_17 != VAR_5)
    return VAR_17;

   continue;
  }

  FUNC_4(FUNC_1(VAR_16->ie_bits) == VAR_7);
  FUNC_4(VAR_16->ie_object == VAR_1);

  FUNC_8(VAR_10);
  if (!FUNC_7(VAR_10)) {
   FUNC_10(VAR_10);
   FUNC_11(VAR_9, VAR_15, VAR_16);
   FUNC_18(VAR_9);
   return VAR_3;
  }

  VAR_16->ie_object = VAR_10;
  break;
 }



 VAR_17 = FUNC_14(VAR_9, VAR_15, VAR_16,
          VAR_11, VAR_12, VAR_10);


 FUNC_18(VAR_9);

 if (VAR_17 == VAR_5)
  *VAR_13 = VAR_15;
 return VAR_17;
}
