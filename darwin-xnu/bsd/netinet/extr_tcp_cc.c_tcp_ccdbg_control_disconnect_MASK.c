
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef int kern_ctl_ref ;
typedef int errno_t ;
typedef scalar_t__ UInt32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static errno_t
FUNC_2(kern_ctl_ref VAR_3, u_int32_t VAR_4, void *VAR_5)
{
#pragma unused(kctl, unit, uinfo)

 if (VAR_4 == VAR_2) {
  UInt32 VAR_6 = VAR_2;
  UInt32 VAR_7 = VAR_1;
  if (VAR_2 == VAR_7)
   return (0);

  if (!FUNC_0(VAR_6, VAR_7,
   &VAR_2))
   FUNC_1(VAR_0,
       "failed to disconnect tcp_cc debug control");
 }
 return (0);
}
