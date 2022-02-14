
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

int FUNC_1(int VAR_0)
{
 if (VAR_0 < 16)
  return 0;
 else if (VAR_0 < 32)
  return 1;
 else if (VAR_0 < 36)
  return 2;
 else if (VAR_0 < 40)
  return 3;
 else
  FUNC_0("cvmx_helper_get_interface_num: Illegal IPD "
        "port number\n");

 return -1;
}
