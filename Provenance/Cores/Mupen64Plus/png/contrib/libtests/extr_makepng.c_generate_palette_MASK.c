
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_const_bytep ;
typedef scalar_t__ png_colorp ;
typedef scalar_t__ png_bytep ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int,int,int,int,int ) ;
 int VAR_0 ;
 int FUNC_3 (unsigned int,unsigned int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_4(png_colorp VAR_1, png_bytep VAR_2, int VAR_3,
   png_const_bytep VAR_4, unsigned int *VAR_5)
{
   switch (VAR_5[0])
   {
      default:
         FUNC_1(VAR_0, "makepng: --colors=...: invalid count %u\n",
            VAR_5[0]);
         FUNC_0(1);

      case 1:
         FUNC_2(VAR_1+0, VAR_2+0, VAR_5[1], VAR_5[1], VAR_5[1], 255,
            VAR_4);
         return 1;

      case 2:
         FUNC_2(VAR_1+0, VAR_2+0, VAR_5[1], VAR_5[1], VAR_5[1],
            VAR_5[2], VAR_4);
         return 1;

      case 3:
         FUNC_2(VAR_1+0, VAR_2+0, VAR_5[1], VAR_5[2], VAR_5[3], 255,
            VAR_4);
         return 1;

      case 4:
         FUNC_2(VAR_1+0, VAR_2+0, VAR_5[1], VAR_5[2], VAR_5[3],
            VAR_5[4], VAR_4);
         return 1;

      case 0:
         if (VAR_3 == 1)
         {
            FUNC_2(VAR_1+0, VAR_2+0, 255, 0, 0, 0, VAR_4);
            FUNC_2(VAR_1+1, VAR_2+1, 255, 255, 255, 255, VAR_4);
            return 2;
         }

         else
         {
            unsigned int VAR_6 = 1U << (VAR_3/2);
            unsigned int VAR_7, VAR_8;
            volatile unsigned int VAR_9 = 0;

            for (VAR_7=0; VAR_7<VAR_6; ++VAR_7) for (VAR_8=0; VAR_8<VAR_6; ++VAR_8)
            {
               VAR_9 = VAR_7 + (VAR_6 * VAR_8);
               FUNC_2(VAR_1+VAR_9, VAR_2+VAR_9,

                  (((VAR_6 * VAR_6 / 2) + (((VAR_7 * 0) + ((VAR_6-VAR_7) * 255)) * VAR_8 + (VAR_6-VAR_8) * ((VAR_7 * 0) + ((VAR_6-VAR_7) * 255)))) / (VAR_6*VAR_6)),
                  (((VAR_6 * VAR_6 / 2) + (((VAR_7 * 255) + ((VAR_6-VAR_7) * 0)) * VAR_8 + (VAR_6-VAR_8) * ((VAR_7 * 0) + ((VAR_6-VAR_7) * 255)))) / (VAR_6*VAR_6)),
                  (((VAR_6 * VAR_6 / 2) + (((VAR_7 * 0) + ((VAR_6-VAR_7) * 0)) * VAR_8 + (VAR_6-VAR_8) * ((VAR_7 * 255) + ((VAR_6-VAR_7) * 255)))) / (VAR_6*VAR_6)),

                  (((VAR_6 * VAR_6 / 2) + (((VAR_7 * 0) + ((VAR_6-VAR_7) * 102)) * VAR_8 + (VAR_6-VAR_8) * ((VAR_7 * 204) + ((VAR_6-VAR_7) * 255)))) / (VAR_6*VAR_6)),
                  VAR_4);
            }

            return VAR_9+1;
         }
   }
}
