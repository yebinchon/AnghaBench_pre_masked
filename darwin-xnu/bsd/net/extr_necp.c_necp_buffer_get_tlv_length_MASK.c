
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;



u_int32_t
FUNC_0(u_int8_t *VAR_0, int VAR_1)
{
 u_int32_t *VAR_2 = ((void*)0);

 if (VAR_0 == ((void*)0)) {
  return (0);
 }

 VAR_2 = (u_int32_t *)(void *)((u_int8_t *)VAR_0 + VAR_1 + sizeof(u_int8_t));
 return (VAR_2 ? *VAR_2 : 0);
}
