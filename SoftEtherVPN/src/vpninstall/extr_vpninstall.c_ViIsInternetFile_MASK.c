
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;

bool FUNC_1(char *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_0(VAR_0, "http://") || FUNC_0(VAR_0, "https://") || FUNC_0(VAR_0, "ftp://"))
 {
  return 1;
 }

 return 0;
}
