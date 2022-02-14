
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned char,scalar_t__) ;

int FUNC_4(int VAR_5,
 unsigned int VAR_6,
 unsigned short VAR_7, unsigned short *VAR_8)
{
 unsigned int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;
 unsigned char VAR_13[1];
 unsigned char VAR_14 = 0;
 unsigned char VAR_15 = 0;
 unsigned char VAR_16 = 0;
 unsigned char VAR_17 = 0;
 unsigned short VAR_18 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_5;
  VAR_11++) {
  do {
   VAR_9 =
    FUNC_1(VAR_6 +
    VAR_0);
   VAR_9 = VAR_9 & VAR_1;
  } while (VAR_9 == VAR_1);

  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
   VAR_16 = (VAR_7 + VAR_10) % 256;
   VAR_17 = (VAR_7 + VAR_10) / 256;


   FUNC_3(VAR_4,
    VAR_6 + VAR_0 +
    3);


   do {
    VAR_9 =
     FUNC_1(VAR_6 +
     VAR_0);
    VAR_9 = VAR_9 & VAR_1;
   } while (VAR_9 == VAR_1);


   FUNC_3(VAR_16,
    VAR_6 + VAR_0 +
    2);


   do {
    VAR_9 =
     FUNC_1(VAR_6 +
     VAR_0);
    VAR_9 = VAR_9 & VAR_1;
   } while (VAR_9 == VAR_1);


   FUNC_3(VAR_3,
    VAR_6 + VAR_0 +
    3);


   do {
    VAR_9 =
     FUNC_1(VAR_6 +
     VAR_0);
    VAR_9 = VAR_9 & VAR_1;
   } while (VAR_9 == VAR_1);


   FUNC_3(VAR_17,
    VAR_6 + VAR_0 +
    2);


   do {
    VAR_9 =
     FUNC_1(VAR_6 +
     VAR_0);
    VAR_9 = VAR_9 & VAR_1;
   } while (VAR_9 == VAR_1);


   FUNC_3(VAR_2,
    VAR_6 + VAR_0 +
    3);


   do {
    VAR_9 =
     FUNC_1(VAR_6 +
     VAR_0);
    VAR_9 = VAR_9 & VAR_1;
   } while (VAR_9 == VAR_1);


   *VAR_13 =
    FUNC_0(VAR_6 +
    VAR_0 + 2);


   do {
    VAR_9 =
     FUNC_1(VAR_6 +
     VAR_0);
    VAR_9 = VAR_9 & VAR_1;
   } while (VAR_9 == VAR_1);


   if (VAR_10 == 0)
    VAR_14 = VAR_13[0];
   else
    VAR_15 = VAR_13[0];



   FUNC_2(1);

  }
  VAR_18 =
   (VAR_14 | (((unsigned short)VAR_15) *
    256));

  VAR_8[VAR_11] = VAR_18;

  VAR_7 += 2;

 }
 return 0;
}
