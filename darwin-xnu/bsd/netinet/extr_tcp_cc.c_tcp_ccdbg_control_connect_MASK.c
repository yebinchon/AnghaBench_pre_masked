
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ctl {scalar_t__ sc_unit; } ;
typedef int kern_ctl_ref ;
typedef int errno_t ;
typedef scalar_t__ UInt32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static errno_t
FUNC_1(kern_ctl_ref VAR_3, struct sockaddr_ctl *VAR_4,
 void **VAR_5)
{
#pragma unused(kctl)
#pragma unused(uinfo)

 UInt32 VAR_6 = VAR_1;
 UInt32 VAR_7 = VAR_4->sc_unit;

 if (VAR_2 != VAR_6)
  return (VAR_0);

 if (FUNC_0(VAR_6, VAR_7, &VAR_2))
  return (0);
 else
  return (VAR_0);
}
