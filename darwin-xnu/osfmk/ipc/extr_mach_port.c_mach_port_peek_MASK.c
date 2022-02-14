
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mach_port_seqno_t ;
typedef int mach_port_name_t ;
typedef int mach_msg_type_number_t ;
typedef int mach_msg_trailer_type_t ;
typedef int mach_msg_trailer_info_t ;
typedef int mach_msg_size_t ;
struct TYPE_7__ {int msgh_seqno; } ;
typedef TYPE_1__ mach_msg_max_trailer_t ;
typedef int mach_msg_id_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef TYPE_2__* ipc_port_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {int ip_messages; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,int *,int *,int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,TYPE_2__**) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,TYPE_1__*,int ) ;

kern_return_t
FUNC_8(
 ipc_space_t VAR_12,
 mach_port_name_t VAR_13,
 mach_msg_trailer_type_t VAR_14,
 mach_port_seqno_t *VAR_15,
 mach_msg_size_t *VAR_16,
 mach_msg_id_t *VAR_17,
 mach_msg_trailer_info_t VAR_18,
 mach_msg_type_number_t *VAR_19)
{
 ipc_port_t VAR_20;
 kern_return_t VAR_21;
 boolean_t VAR_22;
 mach_msg_max_trailer_t VAR_23;

 if (VAR_12 == VAR_0)
  return VAR_4;

 if (!FUNC_1(VAR_13))
  return VAR_3;





 if (FUNC_0(VAR_14) > VAR_7 ||
     FUNC_2(VAR_8, VAR_14) > *VAR_19) {
  FUNC_6(VAR_13, 0, 0, VAR_11);
  return VAR_5;
 }

 *VAR_19 = FUNC_2(VAR_8, VAR_14);

 VAR_21 = FUNC_5(VAR_12, VAR_13, &VAR_20);
 if (VAR_21 != VAR_6) {
  FUNC_6(VAR_13, 0, 0,
                            ((VAR_2 == VAR_21) ?
                             VAR_9 :
                             VAR_10));
  return VAR_21;
 }



 VAR_22 = FUNC_4(&VAR_20->ip_messages, VAR_15,
    VAR_16, VAR_17, &VAR_23, ((void*)0));
 FUNC_3(VAR_20);

 if (VAR_22 != VAR_8)
  return VAR_1;

 VAR_23.msgh_seqno = *VAR_15;
 FUNC_7(VAR_18, &VAR_23, *VAR_19);

 return VAR_6;
}
