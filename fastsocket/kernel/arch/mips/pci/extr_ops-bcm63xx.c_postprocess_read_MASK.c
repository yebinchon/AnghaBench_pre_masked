
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static int FUNC_0(u32 VAR_0, int VAR_1, unsigned int VAR_2)
{
 u32 VAR_3;

 VAR_3 = 0;
 switch (VAR_2) {
 case 1:
  VAR_3 = (VAR_0 >> ((VAR_1 & 3) << 3)) & 0xff;
  break;
 case 2:
  VAR_3 = (VAR_0 >> ((VAR_1 & 3) << 3)) & 0xffff;
  break;
 case 4:
  VAR_3 = VAR_0;
  break;
 }
 return VAR_3;
}
