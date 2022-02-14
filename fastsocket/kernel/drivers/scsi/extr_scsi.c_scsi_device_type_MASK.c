
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const**) ;
 char const** VAR_0 ;

const char * FUNC_1(unsigned VAR_1)
{
 if (VAR_1 == 0x1e)
  return "Well-known LUN   ";
 if (VAR_1 == 0x1f)
  return "No Device        ";
 if (VAR_1 >= FUNC_0(VAR_0))
  return "Unknown          ";
 return VAR_0[VAR_1];
}
