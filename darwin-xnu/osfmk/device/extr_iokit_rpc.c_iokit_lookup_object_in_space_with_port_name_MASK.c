
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef TYPE_1__* ipc_port_t ;
typedef int ipc_object_t ;
typedef scalar_t__ ipc_kobject_type_t ;
typedef int * io_object_t ;
struct TYPE_10__ {scalar_t__ ip_kobject; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int ,scalar_t__,int ,int *) ;

__attribute__((used)) static io_object_t
FUNC_12(mach_port_name_t VAR_2, ipc_kobject_type_t VAR_3, ipc_space_t VAR_4)
{
 io_object_t VAR_5 = ((void*)0);

 if (VAR_2 && FUNC_1(VAR_2)) {
  ipc_port_t VAR_6;
  kern_return_t VAR_7;

  VAR_7 = FUNC_11(VAR_4, VAR_2, VAR_1, (ipc_object_t *)&VAR_6);

  if (VAR_7 == VAR_0) {
   FUNC_2(FUNC_0(VAR_6));

   FUNC_8(VAR_6);
   FUNC_10(VAR_6);

   FUNC_4(VAR_6);
   if (FUNC_6(VAR_6) && (FUNC_7(VAR_6) == VAR_3)) {
    VAR_5 = (io_object_t) VAR_6->ip_kobject;
    FUNC_3(VAR_5, VAR_3);
   }
   FUNC_5(VAR_6);

   FUNC_9(VAR_6);
  }
 }

 return VAR_5;
}
