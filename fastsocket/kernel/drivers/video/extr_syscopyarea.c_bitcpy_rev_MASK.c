
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;


 unsigned long FUNC_0 (struct fb_info*,unsigned long,int) ;
 unsigned long FUNC_1 (unsigned long const,unsigned long,unsigned long) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct fb_info *VAR_0, unsigned long *VAR_1, int VAR_2,
  const unsigned long *VAR_3, int VAR_4, int VAR_5, unsigned VAR_6)
{
 unsigned long VAR_7, VAR_8;
 int VAR_9;

 VAR_1 += (VAR_6-1)/VAR_5;
 VAR_3 += (VAR_6-1)/VAR_5;
 if ((VAR_6-1) % VAR_5) {
  VAR_2 += (VAR_6-1) % VAR_5;
  VAR_1 += VAR_2 >> (FUNC_2(VAR_5) - 1);
  VAR_2 &= VAR_5 - 1;
  VAR_4 += (VAR_6-1) % VAR_5;
  VAR_3 += VAR_4 >> (FUNC_2(VAR_5) - 1);
  VAR_4 &= VAR_5 - 1;
 }

 VAR_9 = VAR_2-VAR_4;

 VAR_7 = FUNC_0(VAR_0, ~0UL, VAR_5 - 1 - VAR_2);
 VAR_8 = ~(FUNC_0(VAR_0, ~0UL, VAR_5 - 1 - ((VAR_2-VAR_6) % VAR_5)));

 if (!VAR_9) {

  if ((unsigned long)VAR_2+1 >= VAR_6) {

   if (VAR_8)
    VAR_7 &= VAR_8;
   *VAR_1 = FUNC_1(*VAR_3, *VAR_1, VAR_7);
  } else {



   if (VAR_7 != ~0UL) {
    *VAR_1 = FUNC_1(*VAR_3, *VAR_1, VAR_7);
    VAR_1--;
    VAR_3--;
    VAR_6 -= VAR_2+1;
   }


   VAR_6 /= VAR_5;
   while (VAR_6 >= 8) {
    *VAR_1-- = *VAR_3--;
    *VAR_1-- = *VAR_3--;
    *VAR_1-- = *VAR_3--;
    *VAR_1-- = *VAR_3--;
    *VAR_1-- = *VAR_3--;
    *VAR_1-- = *VAR_3--;
    *VAR_1-- = *VAR_3--;
    *VAR_1-- = *VAR_3--;
    VAR_6 -= 8;
   }
   while (VAR_6--)
    *VAR_1-- = *VAR_3--;

   if (VAR_8)
    *VAR_1 = FUNC_1(*VAR_3, *VAR_1, VAR_8);
  }
 } else {


  int const VAR_10 = -VAR_9 & (VAR_5-1);
  int const VAR_11 = VAR_9 & (VAR_5-1);

  if ((unsigned long)VAR_2+1 >= VAR_6) {

   if (VAR_8)
    VAR_7 &= VAR_8;
   if (VAR_9 < 0) {

    *VAR_1 = FUNC_1(*VAR_3 << VAR_10, *VAR_1, VAR_7);
   } else if (1+(unsigned long)VAR_4 >= VAR_6) {

    *VAR_1 = FUNC_1(*VAR_3 >> VAR_11, *VAR_1, VAR_7);
   } else {

    *VAR_1 = FUNC_1(*VAR_3 >> VAR_11 | *(VAR_3-1) << VAR_10,
         *VAR_1, VAR_7);
   }
  } else {







   unsigned long VAR_12, VAR_13;
   int VAR_14;

   VAR_12 = *VAR_3--;

   if (VAR_9 < 0) {

    *VAR_1 = FUNC_1(VAR_12 << VAR_10, *VAR_1, VAR_7);
   } else {

    VAR_13 = *VAR_3--;
    *VAR_1 = FUNC_1(VAR_12 >> VAR_11 | VAR_13 << VAR_10, *VAR_1,
         VAR_7);
    VAR_12 = VAR_13;
   }
   VAR_1--;
   VAR_6 -= VAR_2+1;


   VAR_14 = VAR_6 % VAR_5;
   VAR_6 /= VAR_5;
   while (VAR_6 >= 4) {
    VAR_13 = *VAR_3--;
    *VAR_1-- = VAR_12 >> VAR_11 | VAR_13 << VAR_10;
    VAR_12 = VAR_13;
    VAR_13 = *VAR_3--;
    *VAR_1-- = VAR_12 >> VAR_11 | VAR_13 << VAR_10;
    VAR_12 = VAR_13;
    VAR_13 = *VAR_3--;
    *VAR_1-- = VAR_12 >> VAR_11 | VAR_13 << VAR_10;
    VAR_12 = VAR_13;
    VAR_13 = *VAR_3--;
    *VAR_1-- = VAR_12 >> VAR_11 | VAR_13 << VAR_10;
    VAR_12 = VAR_13;
    VAR_6 -= 4;
   }
   while (VAR_6--) {
    VAR_13 = *VAR_3--;
    *VAR_1-- = VAR_12 >> VAR_11 | VAR_13 << VAR_10;
    VAR_12 = VAR_13;
   }


   if (VAR_8) {
    if (VAR_14 <= VAR_10) {

     *VAR_1 = FUNC_1(VAR_12 >> VAR_11, *VAR_1, VAR_8);
    } else {

     VAR_13 = *VAR_3;
     *VAR_1 = FUNC_1(VAR_12 >> VAR_11 | VAR_13 << VAR_10,
          *VAR_1, VAR_8);
    }
   }
  }
 }
}
