
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int*,unsigned int*,size_t*) ;

int FUNC_1(void *VAR_4, int VAR_5, int VAR_6,
      unsigned VAR_7, unsigned VAR_8)
{


   size_t VAR_9;
   unsigned VAR_10, VAR_11;
   size_t VAR_12;

   unsigned VAR_13, VAR_14;
   unsigned VAR_15, VAR_16;
   unsigned VAR_17, VAR_18;
   unsigned VAR_19, VAR_20;

   unsigned VAR_21, VAR_22;
   unsigned VAR_23, VAR_24;

   unsigned VAR_25, VAR_26;
   unsigned VAR_27, VAR_28;


   FUNC_0(&VAR_10, &VAR_11, &VAR_9);

   VAR_15 = 8;
   VAR_16 = 6;
   VAR_13 = VAR_2 + (VAR_15 * 2);
   VAR_14 = VAR_0 + (VAR_16 * 2);
   VAR_19 = 2;
   VAR_20 = 2;
   VAR_17 = VAR_13 - (VAR_19 * 2);
   VAR_18 = VAR_14 - (VAR_20 * 2);
   VAR_21 = VAR_13 * VAR_3;
   VAR_22 = VAR_14 * 4;
   VAR_23 = 10;
   VAR_24 = 10 + 15 + (2 * VAR_1);
   VAR_25 = VAR_21 + 20;
   VAR_26 = VAR_24 + VAR_22 + 10;
   VAR_27 = (VAR_10 - VAR_25) / 2;
   VAR_28 = (VAR_11 - VAR_26) / 2;

   for (VAR_12 = 0; VAR_12 < 44; VAR_12++)
   {
      unsigned VAR_29 = (unsigned)(VAR_12 / VAR_3);
      unsigned VAR_30 = (unsigned)(VAR_12 - (VAR_29 * VAR_3));

      unsigned VAR_31 = VAR_27 + VAR_23 + VAR_19 + (VAR_30 * VAR_13);
      unsigned VAR_32 = VAR_28 + VAR_24 + VAR_20 + (VAR_29 * VAR_14);

      if (VAR_5 > VAR_31 && VAR_5 < VAR_31 + VAR_17 &&
          VAR_6 > VAR_32 && VAR_6 < VAR_32 + VAR_18)
         return (int)VAR_12;
   }

   return -1;
}
