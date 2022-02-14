
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned short FUNC_0(const unsigned char *VAR_0, int VAR_1)
{
 register unsigned long VAR_2 = 0;
 int VAR_3 = 0;

 if (1 & (unsigned long)VAR_0) {
  VAR_2 = *VAR_0 << 8;
  VAR_0++;
  VAR_1--;
  ++VAR_3;
 }

 while (VAR_1 > 1) {
  VAR_2 += *(unsigned short *)VAR_0;
  VAR_0 += 2;
  VAR_1 -= 2;
 }

 if (VAR_1 > 0)
  VAR_2 += *VAR_0;


 while (VAR_2 >> 16)
  VAR_2 = (VAR_2 & 0xffff) + (VAR_2 >> 16);

 if (VAR_3)
  VAR_2 = ((VAR_2 & 0xff00) >> 8) + ((VAR_2 & 0x00ff) << 8);

 return VAR_2;

}
