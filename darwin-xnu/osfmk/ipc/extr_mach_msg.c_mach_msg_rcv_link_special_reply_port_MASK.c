
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef int mach_msg_return_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_port_t ;
typedef int ipc_object_t ;
struct TYPE_2__ {scalar_t__ ith_special_reply_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static mach_msg_return_t
FUNC_7(
 ipc_port_t VAR_5,
 mach_port_name_t VAR_6)
{
 ipc_port_t VAR_7 = VAR_0;
 kern_return_t VAR_8;

 if (FUNC_3()->ith_special_reply_port != VAR_5) {
  return VAR_4;
 }


 if (!FUNC_1(VAR_6)) {
  return VAR_4;
 }

 VAR_8 = FUNC_4(FUNC_2(),
          VAR_6, VAR_3,
          (ipc_object_t *) &VAR_7);





 if (VAR_8 == VAR_1 && FUNC_0(VAR_7)) {
  FUNC_5(VAR_5,
   VAR_7);


  FUNC_6(VAR_7);
 }
 return VAR_2;
}
