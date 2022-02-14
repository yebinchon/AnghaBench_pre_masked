
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned char const) ;
 unsigned int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned char const) ;
 unsigned int FUNC_4 (unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_5(const unsigned char * VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 unsigned int VAR_4 = 0;

 if (VAR_1 <= 0)
  goto out;
 VAR_2 = 1 & (unsigned long) VAR_0;
 if (VAR_2) {
  VAR_4 = FUNC_1(*VAR_0);
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
   while (VAR_3 >= 4) {
    unsigned int VAR_5, VAR_6, VAR_7, VAR_8;
    VAR_5 = *(unsigned int *)(VAR_0 + 0);
    VAR_6 = *(unsigned int *)(VAR_0 + 4);
    VAR_7 = *(unsigned int *)(VAR_0 + 8);
    VAR_8 = *(unsigned int *)(VAR_0 + 12);
    FUNC_0(VAR_4, VAR_5);
    FUNC_0(VAR_4, VAR_6);
    FUNC_0(VAR_4, VAR_7);
    FUNC_0(VAR_4, VAR_8);
    VAR_3 -= 4;
    VAR_0 += 16;
   }
   while (VAR_3) {
    unsigned int VAR_9 = *(unsigned int *) VAR_0;
    VAR_3--;
    VAR_0 += 4;
    FUNC_0(VAR_4, VAR_9);
   }
   VAR_4 = (VAR_4 & 0xffff) + (VAR_4 >> 16);
  }
  if (VAR_1 & 2) {
   VAR_4 += *(unsigned short *) VAR_0;
   VAR_0 += 2;
  }
 }
 if (VAR_1 & 1)
  VAR_4 += FUNC_3(*VAR_0);
 VAR_4 = FUNC_2(VAR_4);
 if (VAR_2)
  VAR_4 = FUNC_4(VAR_4);
out:
 return VAR_4;
}
