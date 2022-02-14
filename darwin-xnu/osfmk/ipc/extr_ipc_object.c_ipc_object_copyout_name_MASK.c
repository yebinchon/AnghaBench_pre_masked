
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_18__ ;
typedef struct TYPE_19__ TYPE_17__ ;


struct knote {int dummy; } ;
typedef scalar_t__ mach_port_name_t ;
typedef int mach_msg_type_name_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_1__* ipc_space_t ;
typedef TYPE_2__* ipc_port_t ;
typedef scalar_t__ ipc_object_t ;
typedef scalar_t__ ipc_importance_task_t ;
typedef TYPE_3__* ipc_entry_t ;
typedef int boolean_t ;
struct TYPE_23__ {int ie_bits; scalar_t__ ie_object; } ;
struct TYPE_22__ {int ip_impcount; scalar_t__ ip_tempowner; } ;
struct TYPE_21__ {TYPE_18__* is_task; } ;
struct TYPE_20__ {scalar_t__ task_imp_base; } ;
struct TYPE_19__ {struct knote* ith_knote; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct knote*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_18__* VAR_11 ;
 int FUNC_3 (int) ;
 TYPE_17__* FUNC_4 () ;
 int FUNC_5 (struct knote*,int ,TYPE_2__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_1__*,scalar_t__,TYPE_3__**) ;
 int FUNC_11 (TYPE_1__*,scalar_t__,TYPE_3__*) ;
 int FUNC_12 (scalar_t__,int) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (TYPE_1__*,scalar_t__,TYPE_3__*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_17 (TYPE_1__*,scalar_t__,TYPE_3__*) ;
 scalar_t__ FUNC_18 (TYPE_1__*,scalar_t__,scalar_t__*,TYPE_3__**) ;
 int FUNC_19 (TYPE_1__*) ;

kern_return_t
FUNC_20(
 ipc_space_t VAR_12,
 ipc_object_t VAR_13,
 mach_msg_type_name_t VAR_14,
 boolean_t VAR_15,
 mach_port_name_t VAR_16)
{
 mach_port_name_t VAR_17;
 ipc_entry_t VAR_18;
 ipc_entry_t VAR_19;
 kern_return_t VAR_20;
 struct knote *VAR_21 = FUNC_4()->ith_knote;






 FUNC_3(FUNC_1(VAR_13));
 FUNC_3(FUNC_8(VAR_13) == VAR_1);

 if (FUNC_2(VAR_21, VAR_14)) {
  FUNC_5(VAR_21,
    VAR_14, (ipc_port_t)VAR_13);
 }

 VAR_20 = FUNC_10(VAR_12, VAR_16, &VAR_19);
 if (VAR_20 != VAR_6)
  return VAR_20;


 if ((VAR_14 != VAR_8) &&
     FUNC_18(VAR_12, VAR_13, &VAR_17, &VAR_18)) {


  if (VAR_16 != VAR_17) {
   FUNC_9(VAR_13);

   if (FUNC_0(VAR_19->ie_bits) == VAR_9)
    FUNC_11(VAR_12, VAR_16, VAR_19);

   FUNC_19(VAR_12);
   return VAR_5;
  }

  FUNC_3(VAR_19 == VAR_18);
  FUNC_3(VAR_19->ie_bits & VAR_10);
 } else {
  if (FUNC_17(VAR_12, VAR_16, VAR_19))
   return VAR_4;

  FUNC_3(FUNC_0(VAR_19->ie_bits) == VAR_9);
  FUNC_3(VAR_19->ie_object == VAR_2);

  FUNC_7(VAR_13);
  if (!FUNC_6(VAR_13)) {
   FUNC_9(VAR_13);
   FUNC_11(VAR_12, VAR_16, VAR_19);
   FUNC_19(VAR_12);
   return VAR_3;
  }

  VAR_19->ie_object = VAR_13;
 }
 VAR_20 = FUNC_16(VAR_12, VAR_16, VAR_19,
          VAR_14, VAR_15, VAR_13);


 FUNC_19(VAR_12);
 return VAR_20;
}
