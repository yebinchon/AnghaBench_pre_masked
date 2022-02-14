
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct necp_session {int dummy; } ;
typedef int kern_ctl_ref ;
typedef int errno_t ;


 int FUNC_0 (struct necp_session*) ;
 int FUNC_1 (struct necp_session*) ;
 int FUNC_2 (struct necp_session*) ;

__attribute__((used)) static errno_t
FUNC_3(kern_ctl_ref VAR_0, u_int32_t VAR_1, void *VAR_2)
{
#pragma unused(kctlref, unit)
 struct necp_session *VAR_3 = (struct necp_session *)VAR_2;
 if (VAR_3 != ((void*)0)) {
  FUNC_2(VAR_3);
  FUNC_1(VAR_3);
  FUNC_0((struct necp_session *)VAR_2);
 }

 return (0);
}
