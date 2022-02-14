
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






__attribute__((used)) static const char *FUNC_0(int *VAR_4)
{
 switch (*VAR_4) {
 case 132:
  *VAR_4 = -VAR_1;
  return "operation failed";
 case 131:
  *VAR_4 = -VAR_3;
  return "operation not supported";
 case 130:
  *VAR_4 = -VAR_0;
  return "argument out of range";
 case 129:
  *VAR_4 = -VAR_3;
  return "query operation not supported";
 case 128:
  *VAR_4 = -VAR_2;
  return "no query data available";
 default:
  return "unknown error";
 }
}
