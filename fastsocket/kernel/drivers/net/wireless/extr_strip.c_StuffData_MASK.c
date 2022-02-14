
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




__attribute__((used)) static __u8 *FUNC_1(__u8 * VAR_5, __u32 VAR_6, __u8 * VAR_7,
         __u8 ** VAR_8)
{
 __u8 *VAR_9 = VAR_5 + VAR_6;
 __u8 *VAR_10 = *VAR_8;
 __u8 VAR_11 = 130, VAR_12 = 0;

 if (!VAR_6)
  return (VAR_7);

 if (VAR_10) {



  VAR_11 = (*VAR_10 ^ VAR_3) & VAR_0;
  VAR_12 = (*VAR_10 ^ VAR_3) & VAR_1;
 }

 while (VAR_5 < VAR_9) {
  switch (VAR_11) {

  case 130:

   VAR_10 = VAR_7++;
   VAR_12 = 0;

   if (*VAR_5 == 0) {
    VAR_11 = 128;
    VAR_5++;
   } else {
    VAR_11 = 129;
    *VAR_7++ = *VAR_5++ ^ VAR_3;
   }



   break;


  case 128:

   if (*VAR_5 == 0) {
    VAR_12++;
    VAR_5++;
   } else {
    FUNC_0(128 + VAR_12);
   }
   break;


  case 129:

   if ((*VAR_5 ^ VAR_3) == VAR_10[1]) {
    VAR_12++;
    VAR_5++;
    break;
   }


   if (VAR_12) {
    FUNC_0(129 + VAR_12);
    break;
   }

   VAR_11 = 131;
  case 131:

   if (*VAR_5 == 0) {
    FUNC_0(VAR_2 +
            VAR_12);
   }

   else if ((*VAR_5 ^ VAR_3) == VAR_7[-1]
     && VAR_7[-1] == VAR_7[-2]) {

    VAR_11 += VAR_12 - 2;

    if (VAR_11 == 131 + 0) {
     VAR_11 = 129 + 0;
    }
    FUNC_0(VAR_11);
    VAR_10 = VAR_7 - 2;

    VAR_12 = 2;
    VAR_11 = 129;
   }

   else {
    *VAR_7++ = *VAR_5 ^ VAR_3;
    VAR_12++;
   }
   VAR_5++;
   break;
  }
  if (VAR_12 == VAR_4) {
   FUNC_0(VAR_11 + VAR_12);
  }
 }
 if (VAR_11 == 130) {
  *VAR_8 = ((void*)0);
 } else {
  *VAR_8 = VAR_10;
  FUNC_0(VAR_11 + VAR_12);
 }
 return (VAR_7);
}
