
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct waitq_set {int dummy; } ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef TYPE_1__* ipc_pset_t ;
typedef scalar_t__ ipc_object_t ;
typedef TYPE_2__* ipc_mqueue_t ;
typedef TYPE_3__* ipc_entry_t ;
struct TYPE_8__ {int ie_bits; scalar_t__ ie_object; } ;
struct TYPE_7__ {struct waitq_set imq_set_queue; } ;
struct TYPE_6__ {TYPE_2__ ips_messages; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_3__**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct waitq_set*) ;

kern_return_t
FUNC_7(
 ipc_space_t VAR_3,
 mach_port_name_t VAR_4)
{
 kern_return_t VAR_5;
 ipc_entry_t VAR_6;
 ipc_object_t VAR_7;
 ipc_pset_t VAR_8;

 VAR_5 = FUNC_4(VAR_3, VAR_4, &VAR_6);
 if (VAR_5 != VAR_1)
  return VAR_5;


 if ((VAR_6->ie_bits & VAR_2) == 0) {
  FUNC_5(VAR_3);
  VAR_5 = VAR_0;
  return VAR_5;
 }

 VAR_7 = VAR_6->ie_object;
 FUNC_0(VAR_8 = (ipc_pset_t) VAR_7);
 FUNC_1(VAR_8 != ((void*)0));
 ipc_mqueue_t VAR_9 = &VAR_8->ips_messages;
 struct waitq_set *VAR_10 = &VAR_9->imq_set_queue;

 FUNC_2(VAR_7);
 FUNC_5(VAR_3);






 FUNC_6(VAR_10);
 FUNC_3(VAR_7);

 return VAR_1;
}
