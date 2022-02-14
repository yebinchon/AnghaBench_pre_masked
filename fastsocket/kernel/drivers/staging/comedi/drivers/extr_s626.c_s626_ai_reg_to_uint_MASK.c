
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(int VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = (VAR_0 >> 18);
 if (VAR_1 & 0x2000)
  VAR_1 &= 0x1fff;
 else
  VAR_1 += (1 << 13);

 return VAR_1;
}
