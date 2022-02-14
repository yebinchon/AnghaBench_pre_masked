
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;



__attribute__((used)) static __u32 FUNC_0(const char *VAR_0, int VAR_1)
{
 __u32 VAR_2, VAR_3 = 0x12a3fe2d, VAR_4 = 0x37abe8f9;
 const unsigned char *VAR_5 = (const unsigned char *) VAR_0;

 while (VAR_1--) {
  VAR_2 = VAR_4 + (VAR_3 ^ (((int) *VAR_5++) * 7152373));

  if (VAR_2 & 0x80000000)
   VAR_2 -= 0x7fffffff;
  VAR_4 = VAR_3;
  VAR_3 = VAR_2;
 }
 return VAR_3 << 1;
}
