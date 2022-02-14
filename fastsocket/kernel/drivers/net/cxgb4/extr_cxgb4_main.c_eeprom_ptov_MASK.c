
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 VAR_3 *= VAR_4;
 if (VAR_2 < 1024)
  return VAR_2 + (31 << 10);
 if (VAR_2 < 1024 + VAR_3)
  return 31744 - VAR_3 + VAR_2 - 1024;
 if (VAR_2 < VAR_0)
  return VAR_2 - 1024 - VAR_3;
 return -VAR_1;
}
