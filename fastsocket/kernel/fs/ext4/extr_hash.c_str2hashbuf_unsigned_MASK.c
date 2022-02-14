
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;



__attribute__((used)) static void FUNC_0(const char *VAR_0, int VAR_1, __u32 *VAR_2, int VAR_3)
{
 __u32 VAR_4, VAR_5;
 int VAR_6;
 const unsigned char *VAR_7 = (const unsigned char *) VAR_0;

 VAR_4 = (__u32)VAR_1 | ((__u32)VAR_1 << 8);
 VAR_4 |= VAR_4 << 16;

 VAR_5 = VAR_4;
 if (VAR_1 > VAR_3*4)
  VAR_1 = VAR_3 * 4;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if ((VAR_6 % 4) == 0)
   VAR_5 = VAR_4;
  VAR_5 = ((int) VAR_7[VAR_6]) + (VAR_5 << 8);
  if ((VAR_6 % 4) == 3) {
   *VAR_2++ = VAR_5;
   VAR_5 = VAR_4;
   VAR_3--;
  }
 }
 if (--VAR_3 >= 0)
  *VAR_2++ = VAR_5;
 while (--VAR_3 >= 0)
  *VAR_2++ = VAR_4;
}
