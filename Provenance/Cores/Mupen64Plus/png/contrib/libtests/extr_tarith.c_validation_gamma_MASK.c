
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double png_uint_16 ;
typedef double png_fixed_point ;
typedef double png_byte ;


 double VAR_0 ;
 int FUNC_0 (int) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 double FUNC_8 (unsigned int,double) ;
 double FUNC_9 (unsigned int,double) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (unsigned int,double) ;
 int FUNC_13 (char*,double,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_14 (char*,char*) ;

int FUNC_15(int VAR_2, char **VAR_3)
{
   double VAR_4[9] = { 2.2, 1.8, 1.52, 1.45, 1., 1/1.45, 1/1.52, 1/1.8, 1/2.2 };
   double VAR_5;
   int VAR_6, VAR_7=0, VAR_8=0;


   while (--VAR_2 > 0)
      if (FUNC_14(*++VAR_3, "-s") == 0)
         VAR_7 = 1;
      else if (FUNC_14(*VAR_3, "-g") == 0)
         VAR_8 = 1;
      else
      {
         FUNC_3(VAR_1, "unknown argument %s\n", *VAR_3);
         return 1;
      }

   if (!VAR_8)
   {

      VAR_5 = 0;
      for (VAR_6=0; VAR_6<256; ++VAR_6)
      {
         double VAR_9 = -FUNC_4(VAR_6/255.)/FUNC_4(2.)*65536;
         double VAR_10 = FUNC_11(VAR_6) - VAR_9;

         if (VAR_6 != 0 && FUNC_1(VAR_10) > VAR_5)
            VAR_5 = FUNC_1(VAR_10);

         if (VAR_6 == 0 && FUNC_11(VAR_6) != 0xffffffff ||
             VAR_6 != 0 && FUNC_11(VAR_6) != FUNC_2(VAR_9+.5))
         {
            FUNC_3(VAR_1, "8-bit log error: %d: got %u, expected %f\n",
               VAR_6, FUNC_11(VAR_6), VAR_9);
         }
      }

      if (!VAR_7)
         FUNC_13("maximum 8-bit log error = %f\n", VAR_5);

      VAR_5 = 0;
      for (VAR_6=0; VAR_6<65536; ++VAR_6)
      {
         double VAR_11 = -FUNC_4(VAR_6/65535.)/FUNC_4(2.)*65536;
         double VAR_12 = FUNC_10(VAR_6) - VAR_11;

         if (VAR_6 != 0 && FUNC_1(VAR_12) > VAR_5)
            VAR_5 = FUNC_1(VAR_12);

         if (VAR_6 == 0 && FUNC_10(VAR_6) != 0xffffffff ||
             VAR_6 != 0 && FUNC_10(VAR_6) != FUNC_2(VAR_11+.5))
         {
            if (VAR_12 > .68)
            {
               FUNC_3(VAR_1, "16-bit log error: %d: got %u, expected %f"
                  " error: %f\n", VAR_6, FUNC_10(VAR_6), VAR_11, VAR_12);
            }
         }
      }

      if (!VAR_7)
         FUNC_13("maximum 16-bit log error = %f\n", VAR_5);


      VAR_5 = 0;
      for (VAR_6=0; VAR_6<=0xfffff; ++VAR_6)
      {
         double VAR_13 = FUNC_0(-VAR_6/65536. * FUNC_4(2.)) * (65536. * 65536);
         double VAR_14 = FUNC_5(VAR_6) - VAR_13;

         if (FUNC_1(VAR_14) > VAR_5)
            VAR_5 = FUNC_1(VAR_14);
         if (FUNC_1(VAR_14) > 1883)
         {
            FUNC_3(VAR_1, "32-bit exp error: %d: got %u, expected %f"
                  " error: %f\n", VAR_6, FUNC_5(VAR_6), VAR_13, VAR_14);
         }
      }

      if (!VAR_7)
         FUNC_13("maximum 32-bit exp error = %f\n", VAR_5);

      VAR_5 = 0;
      for (VAR_6=0; VAR_6<=0xfffff; ++VAR_6)
      {
         double VAR_15 = FUNC_0(-VAR_6/65536. * FUNC_4(2.)) * 255;
         double VAR_16 = FUNC_7(VAR_6) - VAR_15;

         if (FUNC_1(VAR_16) > VAR_5)
            VAR_5 = FUNC_1(VAR_16);
         if (FUNC_1(VAR_16) > .50002)
         {
            FUNC_3(VAR_1, "8-bit exp error: %d: got %u, expected %f"
                  " error: %f\n", VAR_6, FUNC_7(VAR_6), VAR_15, VAR_16);
         }
      }

      if (!VAR_7)
         FUNC_13("maximum 8-bit exp error = %f\n", VAR_5);

      VAR_5 = 0;
      for (VAR_6=0; VAR_6<=0xfffff; ++VAR_6)
      {
         double VAR_17 = FUNC_0(-VAR_6/65536. * FUNC_4(2.)) * 65535;
         double VAR_18 = FUNC_6(VAR_6) - VAR_17;

         if (FUNC_1(VAR_18) > VAR_5)
            VAR_5 = FUNC_1(VAR_18);
         if (FUNC_1(VAR_18) > .524)
         {
            FUNC_3(VAR_1, "16-bit exp error: %d: got %u, expected %f"
                  " error: %f\n", VAR_6, FUNC_6(VAR_6), VAR_17, VAR_18);
         }
      }

      if (!VAR_7)
         FUNC_13("maximum 16-bit exp error = %f\n", VAR_5);
   }


   for (VAR_6=0; VAR_6<9; ++VAR_6)
   {
      unsigned VAR_19;
      double VAR_20 = VAR_4[VAR_6];
      png_fixed_point VAR_21 = FUNC_2(VAR_20 * VAR_0 + .5);

      if (!VAR_7)
         FUNC_13("Test gamma %f\n", VAR_20);

      VAR_5 = 0;
      for (VAR_19=0; VAR_19<256; ++VAR_19)
      {
         double VAR_22 = FUNC_12(VAR_19/255., VAR_20) * 255;
         png_byte VAR_23 = FUNC_9(VAR_19, VAR_21);
         double VAR_24 = VAR_23 - VAR_22;

         if (FUNC_1(VAR_24) > VAR_5)
            VAR_5 = FUNC_1(VAR_24);
         if (VAR_23 != FUNC_2(VAR_22+.5))
         {
            FUNC_3(VAR_1, "8bit %d ^ %f: got %f expected %f error %f\n",
               VAR_19, VAR_20, VAR_23, VAR_22, VAR_24);
         }
      }

      if (!VAR_7)
         FUNC_13("gamma %f: maximum 8-bit error %f\n", VAR_20, VAR_5);

      VAR_5 = 0;
      for (VAR_19=0; VAR_19<65536; ++VAR_19)
      {
         double VAR_25 = FUNC_12(VAR_19/65535., VAR_20) * 65535;
         png_uint_16 VAR_26 = FUNC_8(VAR_19, VAR_21);
         double VAR_27 = VAR_26 - VAR_25;

         if (FUNC_1(VAR_27) > VAR_5)
            VAR_5 = FUNC_1(VAR_27);
         if (FUNC_1(VAR_27) > 1.62)
         {
            FUNC_3(VAR_1, "16bit %d ^ %f: got %f expected %f error %f\n",
               VAR_19, VAR_20, VAR_26, VAR_25, VAR_27);
         }
      }

      if (!VAR_7)
         FUNC_13("gamma %f: maximum 16-bit error %f\n", VAR_20, VAR_5);
   }

   return 0;
}
