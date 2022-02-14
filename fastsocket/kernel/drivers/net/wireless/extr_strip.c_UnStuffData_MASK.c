
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;



__attribute__((used)) static __u8 *FUNC_0(__u8 * VAR_3, __u8 * VAR_4, __u8 * VAR_5,
    __u32 VAR_6)
{
 __u8 *VAR_7 = VAR_5 + VAR_6;

 if (!VAR_3 || !VAR_4 || !VAR_5 || !VAR_6)
  return (((void*)0));
 while (VAR_3 < VAR_4 && VAR_5 < VAR_7) {
  int VAR_8 = (*VAR_3 ^ VAR_2) & VAR_1;
  switch ((*VAR_3 ^ VAR_2) & VAR_0) {
  case 131:
   if (VAR_3 + 1 + VAR_8 >= VAR_4)
    return (((void*)0));
   do {
    *VAR_5++ = *++VAR_3 ^ VAR_2;
   }
   while (--VAR_8 >= 0 && VAR_5 < VAR_7);
   if (VAR_8 < 0)
    VAR_3 += 1;
   else {
    if (VAR_8 == 0)
     *VAR_3 = 129 ^ VAR_2;
    else
     *VAR_3 =
         (131 +
          VAR_8) ^ VAR_2;
   }
   break;
  case 130:
   if (VAR_3 + 1 + VAR_8 >= VAR_4)
    return (((void*)0));
   do {
    *VAR_5++ = *++VAR_3 ^ VAR_2;
   }
   while (--VAR_8 >= 0 && VAR_5 < VAR_7);
   if (VAR_8 < 0)
    *VAR_3 = 128 ^ VAR_2;
   else
    *VAR_3 =
        (130 + VAR_8) ^ VAR_2;
   break;
  case 129:
   if (VAR_3 + 1 >= VAR_4)
    return (((void*)0));
   do {
    *VAR_5++ = VAR_3[1] ^ VAR_2;
   }
   while (--VAR_8 >= 0 && VAR_5 < VAR_7);
   if (VAR_8 < 0)
    VAR_3 += 2;
   else
    *VAR_3 = (129 + VAR_8) ^ VAR_2;
   break;
  case 128:
   do {
    *VAR_5++ = 0;
   }
   while (--VAR_8 >= 0 && VAR_5 < VAR_7);
   if (VAR_8 < 0)
    VAR_3 += 1;
   else
    *VAR_3 = (128 + VAR_8) ^ VAR_2;
   break;
  }
 }
 if (VAR_5 < VAR_7)
  return (((void*)0));
 else
  return (VAR_3);
}
