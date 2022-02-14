
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_16 ;
typedef int png_byte ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 double FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,char*,...) ;
 double FUNC_5 (int) ;
 int FUNC_6 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_7 (int) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (unsigned int) ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (char*,char*) ;

int
FUNC_11(int VAR_5, char **VAR_6)
{
   unsigned int VAR_7, VAR_8, VAR_9;
   double VAR_10 = 0;
   double VAR_11 = 0;
   double VAR_12 = 0;
   double VAR_13 = 0;
   double VAR_14;
   double VAR_15 = 0.4, VAR_16 = 0.6, VAR_17 = 0.5;
   unsigned int VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;
   unsigned int VAR_21 = 0;
   unsigned int VAR_22 = 0;
   int VAR_23 = 0;

   if (VAR_5 > 1)
      VAR_23 = FUNC_10("--test", VAR_6[1]) == 0;


   for (VAR_7=0; VAR_7<256; ++VAR_7)
   {
      VAR_3[VAR_7] = FUNC_6(VAR_7);
   }




   for (;;)
   {
      if (VAR_18 == 0)
         VAR_14 = VAR_15;

      else if (VAR_19 == 0)
         VAR_14 = VAR_16;

      else if (VAR_20 == 0)
         VAR_14 = VAR_17;

      else if (VAR_20 < VAR_19)
         VAR_14 = (VAR_17 + VAR_16)/2;

      else if (VAR_20 < VAR_18)
         VAR_14 = (VAR_17 + VAR_15)/2;

      else
      {
         FUNC_4(VAR_4, "not reached: %u .. %u .. %u\n", VAR_18, VAR_20, VAR_19);
         FUNC_2(1);
      }


      for (VAR_7=0; VAR_7<=511; ++VAR_7)
      {
         double VAR_24 = 255 * FUNC_9(VAR_7 << 15);
         double VAR_25 = 255 * FUNC_9((VAR_7+1) << 15);
         unsigned int VAR_26;

         VAR_26 = FUNC_7((VAR_24+VAR_14) * 256);
         if (VAR_26 > 65535)
         {
            FUNC_4(VAR_4, "table[%d][0]: overflow %08x (%d)\n", VAR_7, VAR_26,
               VAR_26);
            FUNC_2(1);
         }
         VAR_1[VAR_7] = VAR_26;

         VAR_26 = FUNC_7((VAR_25-VAR_24) * 32);
         if (VAR_26 > 255)
         {
            FUNC_4(VAR_4, "table[%d][1]: overflow %08x (%d)\n", VAR_7, VAR_26,
               VAR_26);
            FUNC_2(1);
         }
         VAR_2[VAR_7] = VAR_26;
      }


      VAR_22 = 0;
      for (VAR_8=0; VAR_8 <= 65535; ++VAR_8)
      {
         unsigned int VAR_27 = 255*VAR_8;
         unsigned int VAR_28 = FUNC_7(255*FUNC_9(VAR_27));
         unsigned int VAR_29 = FUNC_0(VAR_27);

         if (VAR_29 != VAR_28)
            ++VAR_22;
      }


      if (VAR_18 == 0)
         VAR_18 = VAR_22;

      else if (VAR_19 == 0)
         VAR_19 = VAR_22;

      else if (VAR_20 == 0)
      {
         VAR_20 = VAR_22;
         FUNC_8("/* initial error counts: %u .. %u .. %u */\n", VAR_18, VAR_20,
            VAR_19);
      }

      else if (VAR_22 < VAR_20)
      {
         FUNC_8("/* adjust (mid ): %f: %u -> %u */\n", VAR_14, VAR_20,
            VAR_22);
         VAR_20 = VAR_22;
         VAR_17 = VAR_14;
      }

      else if (VAR_14 < VAR_17 && VAR_22 < VAR_18)
      {
         FUNC_8("/* adjust (low ): %f: %u -> %u */\n", VAR_14, VAR_18,
            VAR_22);
         VAR_18 = VAR_22;
         VAR_15 = VAR_14;
      }

      else if (VAR_14 > VAR_17 && VAR_22 < VAR_19)
      {
         FUNC_8("/* adjust (high): %f: %u -> %u */\n", VAR_14, VAR_19,
            VAR_22);
         VAR_19 = VAR_22;
         VAR_16 = VAR_14;
      }

      else
      {
         VAR_14 = VAR_17;
         FUNC_8("/* adjust: %f: %u */\n", VAR_14, VAR_20);
         break;
      }
   }




   for (VAR_9=0; VAR_9<65536; VAR_9+=128)
   {
      png_uint_16 VAR_30 = VAR_1[VAR_9 >> 7], VAR_31 = VAR_30, VAR_32=VAR_30;
      png_byte VAR_33 = VAR_2[VAR_9 >> 7], VAR_34 = VAR_33, VAR_35=VAR_33;
      unsigned int VAR_36 = 0, VAR_37;

      for (;;)
      {
         VAR_1[VAR_9 >> 7] = VAR_31;
         VAR_2[VAR_9 >> 7] = VAR_34;


         VAR_22 = 0;
         for (VAR_8=VAR_9; VAR_8 < VAR_9+128; ++VAR_8)
         {
            unsigned int VAR_38 = 255*VAR_8;
            unsigned int VAR_39 = FUNC_7(255*FUNC_9(VAR_38));
            unsigned int VAR_40 = FUNC_0(VAR_38);

            if (VAR_40 != VAR_39)
               ++VAR_22;
         }

         if (VAR_22 == 0)
            break;

         if (VAR_36 == 0)
         {
            VAR_37 = VAR_36 = VAR_22;
            ++VAR_31;
         }

         else if (VAR_22 < VAR_36)
         {
            if (VAR_31 > VAR_30)
            {
               VAR_30 = VAR_31;
               ++VAR_31;
            }
            else if (VAR_31 < VAR_30)
            {
               VAR_30 = VAR_31;
               --VAR_31;
            }
            else if (VAR_34 > VAR_33)
            {
               VAR_33 = VAR_34;
               ++VAR_34;
            }
            else if (VAR_34 < VAR_33)
            {
               VAR_33 = VAR_34;
               --VAR_34;
            }
            else
            {
               FUNC_4(VAR_4, "makesRGB: impossible\n");
               FUNC_2(1);
            }
            VAR_36 = VAR_22;
         }

         else
         {
            if (VAR_31 > VAR_30)
               VAR_31 = VAR_30-1;
            else if (VAR_31 < VAR_30)
            {
               VAR_31 = VAR_30;
               ++VAR_34;
            }
            else if (VAR_34 > VAR_33)
               VAR_34 = VAR_33-1;
            else if (VAR_34 < VAR_33)
               break;
         }
      }

      VAR_1[VAR_9 >> 7] = VAR_30;
      VAR_2[VAR_9 >> 7] = VAR_33;
      if (VAR_30 != VAR_32 || VAR_33 != VAR_35)
      {
         FUNC_8("/* table[%u]={%u,%u} -> {%u,%u} %u -> %u errors */\n",
            VAR_9>>7, VAR_32, VAR_35, VAR_30, VAR_33, VAR_37, VAR_36);
      }
      else if (0)
         FUNC_8("/* table[%u]={%u,%u} %u errors */\n", VAR_9>>7, VAR_32, VAR_35,
            VAR_36);
   }


   VAR_10 = -.4999;
   VAR_11 = .4999;
   VAR_21 = 0;

   for (VAR_7=0; VAR_7 <= VAR_0; ++VAR_7)
   {
      unsigned int VAR_41 = FUNC_7(255*FUNC_9(VAR_7));
      unsigned int VAR_42 = FUNC_0(VAR_7);

      if (VAR_42 != VAR_41)
      {
         double VAR_43 = 255*FUNC_9(VAR_7) - VAR_42;

         if (VAR_43 > (VAR_11+.001) || VAR_43 < (VAR_10-.001))
         {
            FUNC_8(
               "/* 0x%08x: exact: %3d, got: %3d [tables: %08x, %08x] (%f) */\n",
               VAR_7, VAR_41, VAR_42, VAR_1[VAR_7>>15],
               VAR_2[VAR_7>>15], VAR_43);
         }

         ++VAR_21;
         if (VAR_43 > VAR_11)
            VAR_11 = VAR_43;
         else if (VAR_43 < VAR_10)
            VAR_10 = VAR_43;
      }
   }




   VAR_22 = 0;
   VAR_13 = 0;
   VAR_12 = 0;
   for (VAR_8=0; VAR_8 <= 65535; ++VAR_8)
   {
      unsigned int VAR_44 = 255*VAR_8;
      unsigned int VAR_45 = FUNC_7(255*FUNC_9(VAR_44));
      unsigned int VAR_46 = FUNC_0(VAR_44);

      if (VAR_46 != VAR_45)
      {
         double VAR_47 = 255*FUNC_9(VAR_44) - VAR_46;

         ++VAR_22;
         if (VAR_47 > VAR_13)
            VAR_13 = VAR_47;
         else if (VAR_47 < VAR_12)
            VAR_12 = VAR_47;

         if (FUNC_1(VAR_46 - VAR_45) > 1)
            FUNC_8(
               "/* 0x%04x: exact: %3d, got: %3d [tables: %08x, %08x] (%f) */\n",
               VAR_8, VAR_45, VAR_46, VAR_1[VAR_44>>15],
               VAR_2[VAR_44>>15], VAR_47);
      }
   }


   for (VAR_8=0; VAR_8 <= 255; ++VAR_8)
   {
      unsigned int VAR_48 = 255 * VAR_3[VAR_8];
      unsigned int VAR_49 = FUNC_7(255*FUNC_9(VAR_48));
      unsigned int VAR_50 = FUNC_0(VAR_48);

      if (VAR_8 != VAR_49)
      {
         FUNC_4(VAR_4, "8-bit rounding error: %d -> %d\n", VAR_8, VAR_49);
         FUNC_2(1);
      }

      if (VAR_50 != VAR_8)
      {
         double VAR_51 = FUNC_3(VAR_8);

         FUNC_8("/* 8-bit roundtrip error: %d -> %f -> %d(%f) */\n",
            VAR_8, VAR_51, VAR_50, FUNC_5(255*VAR_51));
      }
   }


   FUNC_8("/* error: %g - %g, %u (%g%%) of readings inexact */\n",
      VAR_10, VAR_11, VAR_21, (100.*VAR_21)/VAR_0);
   FUNC_8("/* 16-bit error: %g - %g, %u (%g%%) of readings inexact */\n",
      VAR_12, VAR_13, VAR_22, (100.*VAR_22)/65535);

   if (!VAR_23)
   {
      FUNC_8("PNG_CONST png_uint_16 png_sRGB_table[256] =\n{\n   ");
      for (VAR_7=0; VAR_7<255; )
      {
         do
         {
            FUNC_8("%d,", VAR_3[VAR_7++]);
         }
         while ((VAR_7 & 0x7) != 0 && VAR_7<255);
         if (VAR_7<255) FUNC_8("\n   ");
      }
      FUNC_8("%d\n};\n\n", VAR_3[VAR_7]);


      FUNC_8("PNG_CONST png_uint_16 png_sRGB_base[512] =\n{\n   ");
      for (VAR_7=0; VAR_7<511; )
      {
         do
         {
            FUNC_8("%d,", VAR_1[VAR_7++]);
         }
         while ((VAR_7 & 0x7) != 0 && VAR_7<511);
         if (VAR_7<511) FUNC_8("\n   ");
      }
      FUNC_8("%d\n};\n\n", VAR_1[VAR_7]);

      FUNC_8("PNG_CONST png_byte png_sRGB_delta[512] =\n{\n   ");
      for (VAR_7=0; VAR_7<511; )
      {
         do
         {
            FUNC_8("%d,", VAR_2[VAR_7++]);
         }
         while ((VAR_7 & 0xf) != 0 && VAR_7<511);
         if (VAR_7<511) FUNC_8("\n   ");
      }
      FUNC_8("%d\n};\n\n", VAR_2[VAR_7]);
   }

   return 0;
}
