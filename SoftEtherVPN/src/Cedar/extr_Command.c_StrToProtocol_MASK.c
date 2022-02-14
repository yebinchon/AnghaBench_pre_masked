
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

UINT FUNC_4(char *VAR_5)
{
 if (FUNC_0(VAR_5))
 {
  return 0;
 }

 if (FUNC_1("ip", VAR_5))
 {
  return 0;
 }
 else if (FUNC_1("tcp", VAR_5))
 {
  return VAR_3;
 }
 else if (FUNC_1("udp", VAR_5))
 {
  return VAR_4;
 }
 else if (FUNC_1("icmpv4", VAR_5))
 {
  return VAR_1;
 }
 else if (FUNC_1("icmpv6", VAR_5))
 {
  return VAR_2;
 }

 if (FUNC_3(VAR_5) == 0)
 {
  if (FUNC_2(VAR_5, "0") == 0)
  {
   return 0;
  }
  else
  {
   return VAR_0;
  }
 }

 if (FUNC_3(VAR_5) >= 256)
 {
  return VAR_0;
 }

 return FUNC_3(VAR_5);
}
