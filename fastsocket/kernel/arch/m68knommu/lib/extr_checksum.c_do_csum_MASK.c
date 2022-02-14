
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(const unsigned char * VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 unsigned long VAR_4 = 0;

 if (VAR_1 <= 0)
  goto out;
 VAR_2 = 1 & (unsigned long) VAR_0;
 if (VAR_2) {
  VAR_4 = *VAR_0;
  VAR_1--;
  VAR_0++;
 }
 VAR_3 = VAR_1 >> 1;
 if (VAR_3) {
  if (2 & (unsigned long) VAR_0) {
   VAR_4 += *(unsigned short *) VAR_0;
   VAR_3--;
   VAR_1 -= 2;
   VAR_0 += 2;
  }
  VAR_3 >>= 1;
  if (VAR_3) {
          unsigned long VAR_5 = 0;
   do {
    unsigned long VAR_6 = *(unsigned long *) VAR_0;
    VAR_3--;
    VAR_0 += 4;
    VAR_4 += VAR_5;
    VAR_4 += VAR_6;
    VAR_5 = (VAR_6 > VAR_4);
   } while (VAR_3);
   VAR_4 += VAR_5;
   VAR_4 = (VAR_4 & 0xffff) + (VAR_4 >> 16);
  }
  if (VAR_1 & 2) {
   VAR_4 += *(unsigned short *) VAR_0;
   VAR_0 += 2;
  }
 }
 if (VAR_1 & 1)
  VAR_4 += (*VAR_0 << 8);
 VAR_4 = FUNC_0(VAR_4);
 if (VAR_2)
  VAR_4 = ((VAR_4 >> 8) & 0xff) | ((VAR_4 & 0xff) << 8);
out:
 return VAR_4;
}
