
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef uintptr_t u_int32_t ;
typedef int type ;
typedef int length ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,uintptr_t,uintptr_t) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static inline bool
FUNC_2(u_int8_t *VAR_1, u_int8_t VAR_2, u_int32_t VAR_3,
          u_int8_t *VAR_4, u_int32_t VAR_5)
{
 if (VAR_1 < VAR_4 || (uintptr_t)(VAR_1 - VAR_4) > VAR_5) {
  FUNC_1(VAR_0, "Cannot write TLV in buffer (invalid cursor)");
  return (0);
 }
 u_int8_t *VAR_6 = (u_int8_t *)(VAR_1 + sizeof(VAR_2) + sizeof(VAR_3) + VAR_3);
 if (VAR_6 <= VAR_4 ||
  (uintptr_t)(VAR_6 - VAR_4) > VAR_5) {
  FUNC_0(VAR_0, "Cannot write TLV in buffer (TLV length %u, buffer length %u)",
    VAR_3, VAR_5);
  return (0);
 }
 return (1);
}
