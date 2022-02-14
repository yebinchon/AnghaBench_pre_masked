
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t alpha; size_t red; size_t green; size_t blue; } ;
typedef TYPE_1__ store_palette_entry ;
typedef int png_uint_32 ;
typedef int png_store ;
typedef size_t png_byte ;


 int FUNC_0 (int*,size_t*) ;
 int FUNC_1 (size_t*,int,int) ;
 TYPE_1__* FUNC_2 (int *,int) ;

__attribute__((used)) static store_palette_entry *
FUNC_3(png_store* VAR_0, int VAR_1, int VAR_2)
{
   static png_uint_32 VAR_3[2] = { 0x87654321, 9 };

   int VAR_4 = 0;
   png_byte VAR_5[256][4];



   for (; VAR_4<8; ++VAR_4)
   {
      VAR_5[VAR_4][1] = (png_byte)((VAR_4&1) ? 255U : 0U);
      VAR_5[VAR_4][2] = (png_byte)((VAR_4&2) ? 255U : 0U);
      VAR_5[VAR_4][3] = (png_byte)((VAR_4&4) ? 255U : 0U);
   }


   {
      int VAR_6 = 0;
      png_byte VAR_7[4];
      png_byte VAR_8[256];

      VAR_8[0] = 0;
      FUNC_1(VAR_8+1, 1, (sizeof VAR_8)-2);
      VAR_8[255] = 0;

      while (VAR_4<70)
      {
         png_byte VAR_9;

         if (VAR_6==0)
         {
            FUNC_0(VAR_3, VAR_7);
            VAR_6 = 4;
         }

         VAR_9 = VAR_7[--VAR_6];
         if (VAR_8[VAR_9])
         {
            VAR_5[VAR_4][1] = VAR_9;
            VAR_5[VAR_4][2] = VAR_9;
            VAR_5[VAR_4++][3] = VAR_9;
         }
      }
   }






   for (; VAR_4<256; ++VAR_4)
      FUNC_0(VAR_3, VAR_5[VAR_4]);




   {
      store_palette_entry *VAR_10;
      png_byte VAR_11[4];

      FUNC_0(VAR_3, VAR_11);

      if (VAR_2)
         for (VAR_4=0; VAR_4<256; ++VAR_4)
            VAR_5[VAR_4][0] = (png_byte)(VAR_4 ^ VAR_11[0]);

      else
         for (VAR_4=0; VAR_4<256; ++VAR_4)
            VAR_5[VAR_4][0] = 255;
      VAR_10 = FUNC_2(VAR_0, VAR_1);

      for (VAR_4=0; VAR_4<VAR_1; ++VAR_4)
      {
         VAR_10[VAR_4].alpha = VAR_5[VAR_4 ^ VAR_11[1]][0];
         VAR_10[VAR_4].red = VAR_5[VAR_4 ^ VAR_11[1]][1];
         VAR_10[VAR_4].green = VAR_5[VAR_4 ^ VAR_11[1]][2];
         VAR_10[VAR_4].blue = VAR_5[VAR_4 ^ VAR_11[1]][3];
      }

      return VAR_10;
   }
}
