
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1)
{
 if (FUNC_1(VAR_1, '/')) {
  FUNC_0("invalid device name");
  return -VAR_0;
 }

 return 0;
}
