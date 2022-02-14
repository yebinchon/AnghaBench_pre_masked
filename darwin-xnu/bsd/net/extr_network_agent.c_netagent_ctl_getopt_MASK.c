
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct netagent_session {int dummy; } ;
typedef int kern_ctl_ref ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;

 int FUNC_1 (struct netagent_session*,void*,size_t*) ;

__attribute__((used)) static errno_t
FUNC_2(kern_ctl_ref VAR_4, u_int32_t VAR_5, void *VAR_6, int VAR_7,
     void *VAR_8, size_t *VAR_9)
{
#pragma unused(kctlref, unit)
 struct netagent_session *VAR_10 = (struct netagent_session *)VAR_6;
 errno_t VAR_11;

 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_3, "Received a NULL session");
  VAR_11 = VAR_0;
  goto done;
 }

 switch (VAR_7) {
  case 128: {
   FUNC_0(VAR_2, "Request to get use count");
   VAR_11 = FUNC_1(VAR_10, VAR_8, VAR_9);
  }
  break;
  default:
   FUNC_0(VAR_3, "Received unknown option");
   VAR_11 = VAR_1;
  break;
 }

done:
 return (VAR_11);
}
