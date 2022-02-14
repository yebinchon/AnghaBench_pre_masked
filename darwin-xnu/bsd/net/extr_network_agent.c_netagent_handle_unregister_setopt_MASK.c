
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct netagent_session {int dummy; } ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct netagent_session*) ;

__attribute__((used)) static errno_t
FUNC_2(struct netagent_session *VAR_2, u_int8_t *VAR_3,
          u_int32_t VAR_4)
{
#pragma unused(payload, payload_length)
 u_int32_t VAR_5 = 0;

 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_1, "Failed to find session");
  VAR_5 = VAR_0;
  goto done;
 }

 FUNC_1(VAR_2);

done:
 return VAR_5;
}
