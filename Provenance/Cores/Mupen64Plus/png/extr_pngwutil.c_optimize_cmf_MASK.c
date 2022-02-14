
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* png_bytep ;
typedef int png_byte ;
typedef int png_alloc_size_t ;



__attribute__((used)) static void
FUNC_0(png_bytep VAR_0, png_alloc_size_t VAR_1)
{



   if (VAR_1 <= 16384)
   {
      unsigned int VAR_2 = VAR_0[0];

      if ((VAR_2 & 0x0f) == 8 && (VAR_2 & 0xf0) <= 0x70)
      {
         unsigned int VAR_3;
         unsigned int VAR_4;

         VAR_3 = VAR_2 >> 4;
         VAR_4 = 1U << (VAR_3 + 7);

         if (VAR_1 <= VAR_4)
         {
            unsigned int VAR_5;

            do
            {
               VAR_4 >>= 1;
               --VAR_3;
            }
            while (VAR_3 > 0 && VAR_1 <= VAR_4);

            VAR_2 = (VAR_2 & 0x0f) | (VAR_3 << 4);

            VAR_0[0] = (png_byte)VAR_2;
            VAR_5 = VAR_0[1] & 0xe0;
            VAR_5 += 0x1f - ((VAR_2 << 8) + VAR_5) % 0x1f;
            VAR_0[1] = (png_byte)VAR_5;
         }
      }
   }
}
