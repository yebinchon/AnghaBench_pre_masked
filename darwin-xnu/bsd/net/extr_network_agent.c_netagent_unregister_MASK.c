
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netagent_session {int dummy; } ;
typedef scalar_t__ netagent_session_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct netagent_session*) ;

errno_t
FUNC_2(netagent_session_t VAR_2)
{
 struct netagent_session *VAR_3 = (struct netagent_session *)VAR_2;
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_1, "Cannot unregister NULL session");
  return VAR_0;
 }

 FUNC_1(VAR_3);
 return 0;
}
