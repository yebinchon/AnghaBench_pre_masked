
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 void* FUNC_0 (int const) ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (int) ;
 int* VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_10(u32 VAR_3, unsigned int VAR_4,
                  u32 VAR_5, unsigned int VAR_6,
                  u32 VAR_7)
{
   if (VAR_4 == 0) {
      int VAR_8 = ((VAR_3 & 0x1FF00000) == 0x00200000)
                         || ((VAR_3 & 0x1E000000) == 0x06000000)
                         || ((VAR_3 & 0x1FF00000) == 0x05A00000)
                         || ((VAR_3 & 0x1DF00000) == 0x05C00000);

      if ((VAR_5 & 0x1FFFFFFF) >= 0x5A00000
            && (VAR_5 & 0x1FFFFFFF) < 0x5FF0000) {



         if (VAR_8) {
            u32 VAR_9 = 0;
            u32 VAR_10;
            if (VAR_3 & 2) {
               VAR_10 = FUNC_5(VAR_3) << 16
                   | FUNC_5(VAR_3+2);
            } else {
               VAR_10 = FUNC_4(VAR_3);
            }
            while (VAR_9 < VAR_7) {
               FUNC_7(VAR_5, (u16)(VAR_10 >> 16));
               VAR_5 += VAR_6;
               FUNC_7(VAR_5, (u16)VAR_10);
               VAR_5 += VAR_6;
               VAR_9 += 4;
            }
         } else {
            u32 VAR_11 = 0;
            while (VAR_11 < VAR_7) {
               u32 VAR_12 = FUNC_4(VAR_3);
               FUNC_7(VAR_5, (u16)(VAR_12 >> 16));
               VAR_5 += VAR_6;
               FUNC_7(VAR_5, (u16)VAR_12);
               VAR_5 += VAR_6;
               VAR_3 += VAR_4;
               VAR_11 += 4;
            }
         }
      }
      else {

         u32 VAR_13 = VAR_5;
         if (VAR_8) {
            u32 VAR_14 = FUNC_4(VAR_3);
            u32 VAR_15 = 0;
            while (VAR_15 < VAR_7) {
               FUNC_6(VAR_5, VAR_14);
               VAR_3 += VAR_4;
               VAR_5 += VAR_6;
               VAR_15 += 4;
            }
         } else {
            u32 VAR_16 = 0;
            while (VAR_16 < VAR_7) {
               FUNC_6(VAR_5,
                                     FUNC_4(VAR_3));
               VAR_3 += VAR_4;
               VAR_5 += VAR_6;
               VAR_16 += 4;
            }
         }

         FUNC_8(VAR_13, VAR_5 - VAR_13);
      }

   }

   else {
      if ((VAR_5 & 0x1FFFFFFF) >= 0x5A00000
          && (VAR_5 & 0x1FFFFFFF) < 0x5FF0000) {

         u32 VAR_17 = 0;
         if (VAR_3 & 2) {
            u16 VAR_18 = FUNC_5(VAR_3);
            FUNC_7(VAR_5, VAR_18);
            VAR_5 += VAR_6;
            VAR_3 += 2;
            VAR_17 += 2;
         }
         if (VAR_7 >= 3)
         {
            while (VAR_17 < VAR_7-2) {
               u32 VAR_19 = FUNC_4(VAR_3);
               FUNC_7(VAR_5, (u16)(VAR_19 >> 16));
               VAR_5 += VAR_6;
               FUNC_7(VAR_5, (u16)VAR_19);
               VAR_5 += VAR_6;
               VAR_3 += 4;
               VAR_17 += 4;
            }
         }
         if (VAR_17 < VAR_7) {
            u16 VAR_20 = FUNC_5(VAR_3);
            FUNC_7(VAR_5, VAR_20);
            VAR_5 += VAR_6;
            VAR_3 += 2;
            VAR_17 += 2;
         }
      }
      else {
         u32 VAR_21 = 0;
         u32 VAR_22 = VAR_5;
         while (VAR_21 < VAR_7) {
            FUNC_6(VAR_5, FUNC_4(VAR_3));
            VAR_3 += 4;
            VAR_5 += VAR_6;
            VAR_21 += 4;
         }

         FUNC_8(VAR_22, VAR_5 - VAR_22);
      }

   }
}
