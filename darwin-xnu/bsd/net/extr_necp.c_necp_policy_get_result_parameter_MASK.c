
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct necp_session_policy {int result_size; int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int ) ;

__attribute__((used)) static bool
FUNC_3(struct necp_session_policy *VAR_2, u_int8_t *VAR_3, u_int32_t VAR_4)
{
 if (VAR_2) {
  u_int32_t VAR_5 = FUNC_1(VAR_2->result, VAR_2->result_size);
  if (VAR_4 >= VAR_5) {
   u_int8_t *VAR_6 = FUNC_2(VAR_2->result, VAR_2->result_size);
   if (VAR_6 && VAR_3) {
    FUNC_0(VAR_3, VAR_6, VAR_5);
    return (VAR_1);
   }
  }
 }

 return (VAR_0);
}
