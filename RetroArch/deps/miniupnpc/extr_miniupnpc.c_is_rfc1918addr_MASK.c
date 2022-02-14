
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char * VAR_0)
{

 if(FUNC_0(VAR_0, "192.168."))
  return 1;

 if(FUNC_0(VAR_0, "10."))
  return 1;

 if(FUNC_0(VAR_0, "172.")) {
  int VAR_1 = FUNC_1(VAR_0 + 4);
  if((16 <= VAR_1) && (VAR_1 <= 31))
   return 1;
 }
 return 0;
}
