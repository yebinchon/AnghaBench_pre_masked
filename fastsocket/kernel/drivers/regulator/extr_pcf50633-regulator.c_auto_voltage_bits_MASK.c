
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(unsigned int VAR_0)
{
 if (VAR_0 < 1800)
  return 0;
 if (VAR_0 > 3800)
  return 0xff;

 VAR_0 -= 625;

 return VAR_0 / 25;
}
