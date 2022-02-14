
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int type ;
typedef int length ;


 int FUNC_0 (int *,void const*,int) ;
 int FUNC_1 (int *,int ,int,int *,int) ;

u_int8_t *
FUNC_2(u_int8_t *VAR_0, u_int8_t VAR_1,
       u_int32_t VAR_2, const void *VAR_3,
       u_int8_t *VAR_4, u_int32_t VAR_5)
{
 if (!FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5)) {
  return (((void*)0));
 }
 u_int8_t *VAR_6 = (u_int8_t *)(VAR_0 + sizeof(VAR_1) + sizeof(VAR_2) + VAR_2);
 *(u_int8_t *)(VAR_0) = VAR_1;
 *(u_int32_t *)(void *)(VAR_0 + sizeof(VAR_1)) = VAR_2;
 if (VAR_2 > 0) {
  FUNC_0((u_int8_t *)(VAR_0 + sizeof(VAR_1) + sizeof(VAR_2)), VAR_3, VAR_2);
 }

 return (VAR_6);
}
