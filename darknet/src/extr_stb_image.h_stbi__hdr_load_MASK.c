
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float stbi_uc ;
typedef int stbi__result_info ;
typedef int stbi__context ;


 int FUNC_0 (float*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 float* FUNC_2 (char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,float*,int) ;
 int FUNC_5 (float*,float*,int) ;
 void* FUNC_6 (int *,char*) ;
 int FUNC_7 (int,int,int,int,int ) ;
 scalar_t__ FUNC_8 (int,int,int ) ;
 scalar_t__ FUNC_9 (int,int,int,int,int ) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;
 scalar_t__ FUNC_12 (char*,char**,int) ;

__attribute__((used)) static float *FUNC_13(stbi__context *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int VAR_5, stbi__result_info *VAR_6)
{
   char VAR_7[VAR_0];
   char *VAR_8;
   int VAR_9 = 0;
   int VAR_10, VAR_11;
   stbi_uc *VAR_12;
   float *VAR_13;
   int VAR_14;
   unsigned char VAR_15, VAR_16;
   int VAR_17, VAR_18, VAR_19, VAR_20,VAR_21, VAR_22;
   const char *VAR_23;
   FUNC_1(VAR_6);


   VAR_23 = FUNC_6(VAR_1,VAR_7);
   if (FUNC_10(VAR_23, "#?RADIANCE") != 0 && FUNC_10(VAR_23, "#?RGBE") != 0)
      return FUNC_2("not HDR", "Corrupt HDR image");


   for(;;) {
      VAR_8 = FUNC_6(VAR_1,VAR_7);
      if (VAR_8[0] == 0) break;
      if (FUNC_10(VAR_8, "FORMAT=32-bit_rle_rgbe") == 0) VAR_9 = 1;
   }

   if (!VAR_9) return FUNC_2("unsupported format", "Unsupported HDR format");



   VAR_8 = FUNC_6(VAR_1,VAR_7);
   if (FUNC_11(VAR_8, "-Y ", 3)) return FUNC_2("unsupported data layout", "Unsupported HDR format");
   VAR_8 += 3;
   VAR_11 = (int) FUNC_12(VAR_8, &VAR_8, 10);
   while (*VAR_8 == ' ') ++VAR_8;
   if (FUNC_11(VAR_8, "+X ", 3)) return FUNC_2("unsupported data layout", "Unsupported HDR format");
   VAR_8 += 3;
   VAR_10 = (int) FUNC_12(VAR_8, ((void*)0), 10);

   *VAR_2 = VAR_10;
   *VAR_3 = VAR_11;

   if (VAR_4) *VAR_4 = 3;
   if (VAR_5 == 0) VAR_5 = 3;

   if (!FUNC_7(VAR_10, VAR_11, VAR_5, sizeof(float), 0))
      return FUNC_2("too large", "HDR image is too large");


   VAR_13 = (float *) FUNC_9(VAR_10, VAR_11, VAR_5, sizeof(float), 0);
   if (!VAR_13)
      return FUNC_2("outofmem", "Out of memory");



   if ( VAR_10 < 8 || VAR_10 >= 32768) {

      for (VAR_18=0; VAR_18 < VAR_11; ++VAR_18) {
         for (VAR_17=0; VAR_17 < VAR_10; ++VAR_17) {
            stbi_uc VAR_24[4];
           main_decode_loop:
            FUNC_4(VAR_1, VAR_24, 4);
            FUNC_5(VAR_13 + VAR_18 * VAR_10 * VAR_5 + VAR_17 * VAR_5, VAR_24, VAR_5);
         }
      }
   } else {

      VAR_12 = ((void*)0);

      for (VAR_18 = 0; VAR_18 < VAR_11; ++VAR_18) {
         VAR_20 = FUNC_3(VAR_1);
         VAR_21 = FUNC_3(VAR_1);
         VAR_14 = FUNC_3(VAR_1);
         if (VAR_20 != 2 || VAR_21 != 2 || (VAR_14 & 0x80)) {


            stbi_uc VAR_25[4];
            VAR_25[0] = (stbi_uc) VAR_20;
            VAR_25[1] = (stbi_uc) VAR_21;
            VAR_25[2] = (stbi_uc) VAR_14;
            VAR_25[3] = (stbi_uc) FUNC_3(VAR_1);
            FUNC_5(VAR_13, VAR_25, VAR_5);
            VAR_17 = 1;
            VAR_18 = 0;
            FUNC_0(VAR_12);
            goto main_decode_loop;
         }
         VAR_14 <<= 8;
         VAR_14 |= FUNC_3(VAR_1);
         if (VAR_14 != VAR_10) { FUNC_0(VAR_13); FUNC_0(VAR_12); return FUNC_2("invalid decoded scanline length", "corrupt HDR"); }
         if (VAR_12 == ((void*)0)) {
            VAR_12 = (stbi_uc *) FUNC_8(VAR_10, 4, 0);
            if (!VAR_12) {
               FUNC_0(VAR_13);
               return FUNC_2("outofmem", "Out of memory");
            }
         }

         for (VAR_19 = 0; VAR_19 < 4; ++VAR_19) {
            int VAR_26;
            VAR_17 = 0;
            while ((VAR_26 = VAR_10 - VAR_17) > 0) {
               VAR_15 = FUNC_3(VAR_1);
               if (VAR_15 > 128) {

                  VAR_16 = FUNC_3(VAR_1);
                  VAR_15 -= 128;
                  if (VAR_15 > VAR_26) { FUNC_0(VAR_13); FUNC_0(VAR_12); return FUNC_2("corrupt", "bad RLE data in HDR"); }
                  for (VAR_22 = 0; VAR_22 < VAR_15; ++VAR_22)
                     VAR_12[VAR_17++ * 4 + VAR_19] = VAR_16;
               } else {

                  if (VAR_15 > VAR_26) { FUNC_0(VAR_13); FUNC_0(VAR_12); return FUNC_2("corrupt", "bad RLE data in HDR"); }
                  for (VAR_22 = 0; VAR_22 < VAR_15; ++VAR_22)
                     VAR_12[VAR_17++ * 4 + VAR_19] = FUNC_3(VAR_1);
               }
            }
         }
         for (VAR_17=0; VAR_17 < VAR_10; ++VAR_17)
            FUNC_5(VAR_13+(VAR_18*VAR_10 + VAR_17)*VAR_5, VAR_12 + VAR_17*4, VAR_5);
      }
      if (VAR_12)
         FUNC_0(VAR_12);
   }

   return VAR_13;
}
