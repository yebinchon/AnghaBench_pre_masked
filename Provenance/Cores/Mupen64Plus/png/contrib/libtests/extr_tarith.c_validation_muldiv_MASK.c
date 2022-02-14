
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_int_32 ;
typedef int png_fixed_point ;


 long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (long,long,unsigned long*,unsigned long*) ;
 int FUNC_2 (int*,int,int,int) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_5(int VAR_4, int VAR_5, char **VAR_6)
{
   int VAR_7 = 0;
   int VAR_8 = 0;
   int VAR_9 = 0;
   int VAR_10 = 0;
   int VAR_11 = 0;
   int VAR_12 = 0;
   png_uint_32 VAR_13;
   png_fixed_point VAR_14;
   png_int_32 VAR_15, VAR_16;

   while (--VAR_5 > 0)
      {
         FUNC_0(VAR_2, "unknown argument %s\n", *++VAR_6);
         return 1;
      }


   VAR_13 = VAR_1;
   while (VAR_13 != 0) ++VAR_12, VAR_13 >>= 1;
   FUNC_3("Using random number generator that makes %d bits\n", VAR_12);
   for (VAR_16=0; VAR_16<32; VAR_16 += VAR_12)
      VAR_13 = (VAR_13 << VAR_12) ^ FUNC_4();

   VAR_14 = 0;
   VAR_15 = VAR_16 = 0;
   do
   {
      png_fixed_point VAR_17;




      long long int VAR_18, VAR_19;
      unsigned long VAR_20, VAR_21;
      int VAR_22;




      {
         long VAR_23, VAR_24;
         int VAR_25 = 0;
         if (VAR_14 < 0) VAR_23 = -VAR_14, VAR_25 = 1; else VAR_23 = VAR_14;
         if (VAR_15 < 0) VAR_24 = -VAR_15, VAR_25 = !VAR_25; else VAR_24 = VAR_15;
         FUNC_1(VAR_23, VAR_24, &VAR_20, &VAR_21);
         if (VAR_25)
         {

            VAR_21 = ((~VAR_21) + 1) & 0xffffffff;
            VAR_20 = ~VAR_20;
            if (VAR_21 == 0) ++VAR_20;
         }
      }

      VAR_18 = VAR_14;
      VAR_18 *= VAR_15;
      if ((VAR_18 & 0xffffffff) != VAR_21 || ((VAR_18 >> 32) & 0xffffffff) != VAR_20)
      {
         FUNC_0(VAR_2, "png_64bit_product %d * %d -> %lx|%.8lx not %llx\n",
            VAR_14, VAR_15, VAR_20, VAR_21, VAR_18);
         ++VAR_10;
      }

      if (VAR_16 != 0)
      {

         if ((VAR_18 < 0) != (VAR_16 < 0))
           VAR_18 -= VAR_16/2;
         else
           VAR_18 += VAR_16/2;

         VAR_18 /= VAR_16;
         VAR_19 = VAR_18;

         VAR_22 = VAR_19 <= VAR_0 &&
              VAR_19 >= -1-(long long int)VAR_0;
         if (!VAR_22) ++VAR_8;
      }
      else
        VAR_22 = 0, ++VAR_8, VAR_19 = VAR_18 ;

      if (VAR_3)
         FUNC_0(VAR_2, "TEST %d * %d / %d -> %lld (%s)\n", VAR_14, VAR_15, VAR_16,
            VAR_18, VAR_22 ? "ok" : "overflow");

      ++VAR_7;
      if (FUNC_2(&VAR_17, VAR_14, VAR_15, VAR_16) != VAR_22)
      {
         ++VAR_9;
         if (VAR_22)
             FUNC_0(VAR_2, "%d * %d / %d -> overflow (expected %lld)\n", VAR_14,
                VAR_15, VAR_16, VAR_18);
         else
             FUNC_0(VAR_2, "%d * %d / %d -> %d (expected overflow %lld)\n", VAR_14,
                VAR_15, VAR_16, VAR_17, VAR_18);
      }
      else if (VAR_22 && VAR_17 != VAR_19)
      {
         ++VAR_9;
         FUNC_0(VAR_2, "%d * %d / %d -> %d not %lld\n", VAR_14, VAR_15, VAR_16, VAR_17,
            VAR_18);
      }
      else
         ++VAR_11;





      VAR_14 += VAR_15;
      VAR_15 += VAR_16;
      VAR_16 = VAR_13;
      VAR_13 = (VAR_13 << VAR_12) ^ FUNC_4();
   }
   while (--VAR_4 > 0);

   FUNC_3("%d tests including %d overflows, %d passed, %d failed (%d 64-bit "
      "errors)\n", VAR_7, VAR_8, VAR_11, VAR_9, VAR_10);
   return 0;
}
