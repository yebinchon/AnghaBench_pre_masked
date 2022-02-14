
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct _kernelrpc_mach_port_insert_right_args {int name; int polyPoly; int poly; int target; } ;
typedef int mach_msg_type_name_t ;
typedef scalar_t__ ipc_port_t ;
typedef int ipc_object_t ;
struct TYPE_5__ {int itk_space; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;

int
FUNC_8(struct _kernelrpc_mach_port_insert_right_args *VAR_2)
{
 task_t VAR_3 = FUNC_6(VAR_2->target);
 ipc_port_t VAR_4;
 mach_msg_type_name_t VAR_5;
 int VAR_6 = VAR_1;

 if (VAR_3 != FUNC_1())
  goto done;

 VAR_6 = FUNC_2(VAR_3->itk_space, VAR_2->poly, VAR_2->polyPoly,
     (ipc_object_t *)&VAR_4);
 if (VAR_6 != VAR_0)
  goto done;
 VAR_5 = FUNC_3(VAR_2->polyPoly);

 VAR_6 = FUNC_5(VAR_3->itk_space, VAR_2->name, VAR_4, VAR_5);
 if (VAR_6 != VAR_0) {
  if (FUNC_0((ipc_object_t)VAR_4)) {
   FUNC_4((ipc_object_t)VAR_4, VAR_5);
  }
 }

done:
 if (VAR_3)
  FUNC_7(VAR_3);
 return (VAR_6);
}
