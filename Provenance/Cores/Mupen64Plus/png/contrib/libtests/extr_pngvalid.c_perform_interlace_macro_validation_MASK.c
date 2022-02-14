
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ png_uint_32 ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char*,scalar_t__,int,scalar_t__,...) ;
 scalar_t__ FUNC_12 (scalar_t__,int) ;
 scalar_t__ FUNC_13 (scalar_t__,int) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (scalar_t__,int) ;
 scalar_t__ FUNC_16 (int) ;
 scalar_t__ FUNC_17 (scalar_t__,int) ;
 scalar_t__ FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int) ;
 scalar_t__ FUNC_20 (scalar_t__,int) ;
 scalar_t__ FUNC_21 (scalar_t__,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_22(void)
{







   int VAR_2;

   for (VAR_2=0; VAR_2<7; ++VAR_2)
   {
      png_uint_32 VAR_3, VAR_4, VAR_5;

      VAR_3 = FUNC_7(VAR_2);
      VAR_4 = FUNC_19(VAR_2);
      if (VAR_3 != VAR_4)
      {
         FUNC_11(VAR_1, "PNG_PASS_START_ROW(%ld) = %u != %lx\n", VAR_2, VAR_3, VAR_4);
         FUNC_10(99);
      }

      VAR_3 = FUNC_6(VAR_2);
      VAR_4 = FUNC_18(VAR_2);
      if (VAR_3 != VAR_4)
      {
         FUNC_11(VAR_1, "PNG_PASS_START_COL(%ld) = %u != %lx\n", VAR_2, VAR_3, VAR_4);
         FUNC_10(99);
      }

      VAR_3 = FUNC_5(VAR_2);
      VAR_4 = FUNC_16(VAR_2);
      if (VAR_3 != VAR_4)
      {
         FUNC_11(VAR_1, "PNG_PASS_ROW_SHIFT(%ld) = %u != %lx\n", VAR_2, VAR_3, VAR_4);
         FUNC_10(99);
      }

      VAR_3 = FUNC_3(VAR_2);
      VAR_4 = FUNC_14(VAR_2);
      if (VAR_3 != VAR_4)
      {
         FUNC_11(VAR_1, "PNG_PASS_COL_SHIFT(%ld) = %u != %lx\n", VAR_2, VAR_3, VAR_4);
         FUNC_10(99);
      }
      for (VAR_5=0;;)
      {
         if (VAR_5 < FUNC_17(0xFFFFFFFFU, VAR_2))
         {
            VAR_3 = FUNC_8(VAR_5, VAR_2);
            VAR_4 = FUNC_20(VAR_5, VAR_2);
            if (VAR_3 != VAR_4)
            {
               FUNC_11(VAR_1, "PNG_ROW_FROM_PASS_ROW(%ld, %d) = %ld != %lx\n",
                  VAR_5, VAR_2, VAR_3, VAR_4);
               FUNC_10(99);
            }
         }

         if (VAR_5 < FUNC_15(0xFFFFFFFFU, VAR_2))
         {
            VAR_3 = FUNC_0(VAR_5, VAR_2);
            VAR_4 = FUNC_12(VAR_5, VAR_2);
            if (VAR_3 != VAR_4)
            {
               FUNC_11(VAR_1, "PNG_COL_FROM_PASS_COL(%ld, %d) = %ld != %lx\n",
                  VAR_5, VAR_2, VAR_3, VAR_4);
               FUNC_10(99);
            }
         }

         VAR_3 = FUNC_9(VAR_5, VAR_2);
         VAR_4 = FUNC_21(VAR_5, VAR_2);
         if (VAR_3 != VAR_4)
         {
            FUNC_11(VAR_1, "PNG_ROW_IN_INTERLACE_PASS(%ld, %d) = %ld != %lx\n",
               VAR_5, VAR_2, VAR_3, VAR_4);
            FUNC_10(99);
         }

         VAR_3 = FUNC_1(VAR_5, VAR_2);
         VAR_4 = FUNC_13(VAR_5, VAR_2);
         if (VAR_3 != VAR_4)
         {
            FUNC_11(VAR_1, "PNG_COL_IN_INTERLACE_PASS(%ld, %d) = %ld != %lx\n",
               VAR_5, VAR_2, VAR_3, VAR_4);
            FUNC_10(99);
         }


         ++VAR_5;
         VAR_3 = FUNC_4(VAR_5, VAR_2);
         VAR_4 = FUNC_17(VAR_5, VAR_2);
         if (VAR_3 != VAR_4)
         {
            FUNC_11(VAR_1, "PNG_PASS_ROWS(%ld, %d) = %ld != %lx\n",
               VAR_5, VAR_2, VAR_3, VAR_4);
            FUNC_10(99);
         }

         VAR_3 = FUNC_2(VAR_5, VAR_2);
         VAR_4 = FUNC_15(VAR_5, VAR_2);
         if (VAR_3 != VAR_4)
         {
            FUNC_11(VAR_1, "PNG_PASS_COLS(%ld, %d) = %ld != %lx\n",
               VAR_5, VAR_2, VAR_3, VAR_4);
            FUNC_10(99);
         }




         if (VAR_5 > 1024)
         {
            if (VAR_5 == VAR_0)
               break;

            VAR_5 = (VAR_5 << 1) ^ VAR_5;
            if (VAR_5 >= VAR_0)
               VAR_5 = VAR_0-1;
         }
      }
   }
}
