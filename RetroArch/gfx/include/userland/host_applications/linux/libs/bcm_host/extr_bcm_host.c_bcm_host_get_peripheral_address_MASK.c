
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char*,int) ;

unsigned FUNC_1(void)
{
   unsigned VAR_0 = FUNC_0("/proc/device-tree/soc/ranges", 4);
   return VAR_0 == ~0 ? 0x20000000 : VAR_0;
}
