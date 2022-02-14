
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;


 scalar_t__ FUNC_0 (int *,int) ;

u_int8_t *
FUNC_1(u_int8_t *VAR_0, int VAR_1, u_int32_t *VAR_2)
{
 u_int8_t *VAR_3 = ((void*)0);
 u_int32_t VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4 == 0) {
  return (VAR_3);
 }

 if (VAR_2) {
  *VAR_2 = VAR_4;
 }

 VAR_3 = (u_int8_t *)((u_int8_t *)VAR_0 + VAR_1 + sizeof(u_int8_t) + sizeof(u_int32_t));
 return (VAR_3);
}
