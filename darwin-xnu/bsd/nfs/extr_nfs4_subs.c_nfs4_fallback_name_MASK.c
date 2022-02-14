
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, int VAR_1)
{
 if (VAR_1) {


  if (!FUNC_0(VAR_0, "root@", 5))
   return (0);
  else if (!FUNC_0(VAR_0, "wheel@", 6))
   return (0);
  else if (!FUNC_0(VAR_0, "nobody@", 7))
   return (-2);
  else if (!FUNC_0(VAR_0, "nfsnobody@", 10))
   return (-2);
 }
 return (-2);
}
