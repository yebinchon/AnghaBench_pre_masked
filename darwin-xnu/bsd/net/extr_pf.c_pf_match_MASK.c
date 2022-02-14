
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
int
FUNC_0(u_int8_t VAR_0, u_int32_t VAR_1, u_int32_t VAR_2, u_int32_t VAR_3)
{
 switch (VAR_0) {
 case 133:
  return ((VAR_3 > VAR_1) && (VAR_3 < VAR_2));
 case 128:
  return ((VAR_3 < VAR_1) || (VAR_3 > VAR_2));
 case 129:
  return ((VAR_3 >= VAR_1) && (VAR_3 <= VAR_2));
 case 136:
  return (VAR_3 == VAR_1);
 case 130:
  return (VAR_3 != VAR_1);
 case 131:
  return (VAR_3 < VAR_1);
 case 132:
  return (VAR_3 <= VAR_1);
 case 134:
  return (VAR_3 > VAR_1);
 case 135:
  return (VAR_3 >= VAR_1);
 }
 return (0);
}
