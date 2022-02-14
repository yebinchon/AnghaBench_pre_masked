
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef int mach_port_mscount_t ;
typedef int mach_msg_id_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef scalar_t__ ipc_port_t ;
typedef TYPE_2__* ipc_entry_t ;
struct TYPE_5__ {scalar_t__ ie_object; } ;
struct TYPE_4__ {int * ip_subsystem; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;




 int FUNC_0 (int ) ;
 int VAR_10 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__,scalar_t__*) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,TYPE_2__**) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int,int ,scalar_t__,scalar_t__*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*) ;

kern_return_t
FUNC_10(
 ipc_space_t VAR_11,
 mach_port_name_t VAR_12,
 mach_msg_id_t VAR_13,
 mach_port_mscount_t VAR_14,
 ipc_port_t VAR_15,
 ipc_port_t *VAR_16)
{
 kern_return_t VAR_17;

 if (VAR_11 == VAR_3)
  return VAR_7;

 if (VAR_15 == VAR_2)
  return VAR_5;
 switch (VAR_13) {
     case 129: {
  ipc_port_t VAR_18, VAR_19;

  if (VAR_14 != 0)
   return VAR_8;

  if (!FUNC_0(VAR_12))
   return VAR_6;

  VAR_17 = FUNC_5(VAR_11, VAR_12, &VAR_18);
  if (VAR_17 != VAR_9)
   return VAR_17;



  if (FUNC_1(VAR_18) != VAR_1) {
   FUNC_2(VAR_18);
   return VAR_6;
  }

  FUNC_4(VAR_18, VAR_15, &VAR_19);


  *VAR_16 = VAR_19;
  break;
     }

     case 130: {
  ipc_port_t VAR_20;

  if (!FUNC_0(VAR_12))
   return VAR_6;

  VAR_17 = FUNC_5(VAR_11, VAR_12, &VAR_20);
  if (VAR_17 != VAR_9)
   return VAR_17;


  FUNC_3(VAR_20, VAR_14, VAR_15, VAR_16);

  break;
     }

     case 128:

      if (!FUNC_0(VAR_12)) {
         return VAR_4;
  }

  VAR_17 = FUNC_7(VAR_11, VAR_12, VAR_14 != 0,
          VAR_10, VAR_15, VAR_16);
  if (VAR_17 != VAR_9)
   return VAR_17;
  break;

     case 131:

      if (!FUNC_0(VAR_12)) {





         return VAR_4;
  }

  VAR_17 = FUNC_7(VAR_11, VAR_12, VAR_14 != 0,
          VAR_0, VAR_15, VAR_16);
  if (VAR_17 != VAR_9)
   return VAR_17;
  break;

     default:
  return VAR_8;
 }

 return VAR_9;
}
