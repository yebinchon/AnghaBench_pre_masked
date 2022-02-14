
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
typedef int u_int32_t ;
typedef int type ;
typedef int length ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,void const*,int) ;
 int FUNC_1 (scalar_t__*,void const*,int) ;
 int FUNC_2 (scalar_t__*,scalar_t__,int,scalar_t__*,int) ;

u_int8_t *
FUNC_3(u_int8_t *VAR_1, u_int8_t VAR_2,
           u_int32_t VAR_3, const void *VAR_4, bool *VAR_5,
           u_int8_t *VAR_6, u_int32_t VAR_7)
{
 if (!FUNC_2(VAR_1, VAR_2, VAR_3, VAR_6, VAR_7)) {
  return (((void*)0));
 }
 u_int8_t *VAR_8 = (u_int8_t *)(VAR_1 + sizeof(VAR_2) + sizeof(VAR_3) + VAR_3);
 if (*VAR_5 || *(u_int8_t *)(VAR_1) != VAR_2) {
  *(u_int8_t *)(VAR_1) = VAR_2;
  *VAR_5 = VAR_0;
 }
 if (*VAR_5 || *(u_int32_t *)(void *)(VAR_1 + sizeof(VAR_2)) != VAR_3) {
  *(u_int32_t *)(void *)(VAR_1 + sizeof(VAR_2)) = VAR_3;
  *VAR_5 = VAR_0;
 }
 if (VAR_3 > 0) {
  if (*VAR_5 || FUNC_0((u_int8_t *)(VAR_1 + sizeof(VAR_2) + sizeof(VAR_3)), VAR_4, VAR_3) != 0) {
   FUNC_1((u_int8_t *)(VAR_1 + sizeof(VAR_2) + sizeof(VAR_3)), VAR_4, VAR_3);
   *VAR_5 = VAR_0;
  }
 }
 return (VAR_8);
}
