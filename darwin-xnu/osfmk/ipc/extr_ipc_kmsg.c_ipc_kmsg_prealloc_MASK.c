
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mach_msg_size_t ;
typedef int ipc_kmsg_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;

ipc_kmsg_t
FUNC_1(mach_msg_size_t VAR_3)
{

 if (VAR_3 > VAR_2 - VAR_1)
  return VAR_0;

 VAR_3 += VAR_1;

 return FUNC_0(VAR_3);
}
