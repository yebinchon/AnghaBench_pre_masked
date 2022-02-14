
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int natural_t ;
typedef int mach_port_name_t ;
struct TYPE_8__ {int mpl_qlimit; } ;
typedef TYPE_1__ mach_port_limits_t ;
typedef scalar_t__ mach_port_info_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef TYPE_2__* ipc_port_t ;
typedef int ipc_importance_task_t ;
struct TYPE_10__ {int task_imp_base; } ;
struct TYPE_9__ {int ip_tempowner; int ip_impdonation; int ip_specialreply; int ip_impcount; int ip_imp_task; int ip_messages; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_7__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (scalar_t__,int ,TYPE_2__**) ;
 int FUNC_11 (int ) ;

kern_return_t
FUNC_12(
 ipc_space_t VAR_11,
 mach_port_name_t VAR_12,
 int VAR_13,
        mach_port_info_t VAR_14,
        mach_msg_type_number_t VAR_15)
{
 ipc_port_t VAR_16;
 kern_return_t VAR_17;

 if (VAR_11 == VAR_1)
  return VAR_5;

        switch (VAR_13) {

        case 129: {
                mach_port_limits_t *VAR_18 = (mach_port_limits_t *)VAR_14;

                if (VAR_15 < VAR_9)
                        return VAR_2;

                if (VAR_18->mpl_qlimit > VAR_10)
                        return VAR_6;

  if (!FUNC_0(VAR_12))
   return VAR_4;

                VAR_17 = FUNC_10(VAR_11, VAR_12, &VAR_16);
                if (VAR_17 != VAR_7)
                        return VAR_17;


                FUNC_8(&VAR_16->ip_messages, VAR_18->mpl_qlimit);
                FUNC_4(VAR_16);
                break;
        }
 case 131: {
                if (VAR_15 < VAR_8)
                        return VAR_2;

  if (!FUNC_0(VAR_12))
   return VAR_4;

                VAR_17 = FUNC_10(VAR_11, VAR_12, &VAR_16);
                if (VAR_17 != VAR_7)
                        return VAR_17;


  VAR_17 = FUNC_9(VAR_16, *(int *)VAR_14);
  if (VAR_17 != VAR_7)
   return VAR_17;
  break;
 }
 case 128:
  if (!FUNC_0(VAR_12))
   return VAR_4;

  ipc_importance_task_t VAR_19 = VAR_0;
  natural_t VAR_20 = 0;

  VAR_17 = FUNC_10(VAR_11, VAR_12, &VAR_16);
  if (VAR_17 != VAR_7)
   return VAR_17;







  if (FUNC_11(FUNC_3(VAR_16)) || VAR_16->ip_specialreply) {
   FUNC_4(VAR_16);
   return VAR_3;
  }

  if (VAR_16->ip_tempowner != 0) {
   if (VAR_0 != VAR_16->ip_imp_task) {
    VAR_19 = VAR_16->ip_imp_task;
    VAR_16->ip_imp_task = VAR_0;
    VAR_20 = VAR_16->ip_impcount;
   }
  } else {
   VAR_20 = VAR_16->ip_impcount;
  }

  VAR_16->ip_impdonation = 1;
  VAR_16->ip_tempowner = 1;
  FUNC_4(VAR_16);
  if (VAR_19 != VAR_0)
   FUNC_7(VAR_19);


  break;
        default:
  return VAR_3;

        }
 return VAR_7;
}
