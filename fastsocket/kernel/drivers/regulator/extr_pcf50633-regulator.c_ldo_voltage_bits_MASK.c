
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(unsigned int VAR_0)
{
 if (VAR_0 < 900)
  return 0;
 else if (VAR_0 > 3600)
  return 0x1f;

 VAR_0 -= 900;
 return VAR_0 / 100;
}
