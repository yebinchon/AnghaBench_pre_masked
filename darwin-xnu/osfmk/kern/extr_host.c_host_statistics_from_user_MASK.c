
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ host_t ;
typedef int host_info64_t ;
typedef int host_flavor_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *,scalar_t__*,int*) ;

kern_return_t
FUNC_3(host_t VAR_4, host_flavor_t VAR_5, host_info64_t VAR_6, mach_msg_type_number_t * VAR_7)
{
 kern_return_t VAR_8 = VAR_3;
 int VAR_9;

 if (VAR_4 == VAR_1)
  return (VAR_2);

 if (FUNC_2(VAR_0, VAR_5, VAR_6, VAR_7, &VAR_8, &VAR_9))
  return VAR_8;

 if (VAR_8 != VAR_3)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);

 if (VAR_8 == VAR_3)
  FUNC_0(VAR_9, VAR_6);

 return VAR_8;
}
