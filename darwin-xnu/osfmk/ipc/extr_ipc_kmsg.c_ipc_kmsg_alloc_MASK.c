
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_msg_size_t ;
typedef int mach_msg_ool_descriptor32_t ;
typedef int mach_msg_base_t ;
typedef scalar_t__ ipc_kmsg_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

ipc_kmsg_t
FUNC_5(
 mach_msg_size_t VAR_7)
{
 mach_msg_size_t VAR_8;
 ipc_kmsg_t VAR_9;
 mach_msg_size_t VAR_10 = VAR_7 - VAR_4;


 if (VAR_10 > VAR_5)
  return VAR_1;

 if (VAR_10 > sizeof(mach_msg_base_t)) {
  mach_msg_size_t VAR_11 = (mach_msg_size_t)(((VAR_10 - sizeof(mach_msg_base_t)) /
               sizeof(mach_msg_ool_descriptor32_t)) *
               VAR_0);


  if (VAR_7 > VAR_3 - VAR_11)
   return VAR_1;

  VAR_8 = VAR_7 + VAR_11;
 } else
   VAR_8 = VAR_7;

 if (VAR_8 < VAR_2)
  VAR_8 = VAR_2;

 if (VAR_8 == VAR_2) {
  VAR_9 = (ipc_kmsg_t)FUNC_4(VAR_6);
 } else {
  VAR_9 = (ipc_kmsg_t)FUNC_3(FUNC_1(VAR_8));
 }

 if (VAR_9 != VAR_1) {
  FUNC_0(VAR_9, VAR_8);
  FUNC_2(VAR_9, VAR_7);
 }

 return(VAR_9);
}
