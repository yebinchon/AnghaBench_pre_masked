
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sprite {unsigned int height; unsigned int width; scalar_t__* buffer; } ;
typedef scalar_t__ png_uint_32 ;
typedef scalar_t__ png_uint_16 ;
typedef TYPE_1__* png_imagep ;
struct TYPE_3__ {unsigned int height; unsigned int width; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(const struct sprite *VAR_0, int VAR_1, int VAR_2,
   png_imagep VAR_3, const png_uint_16 *VAR_4)
{
   if ((VAR_2 < 0 || (unsigned) VAR_2 < VAR_0->height) &&
       (VAR_1 < 0 || (unsigned) VAR_1 < VAR_0->width))
   {
      unsigned int VAR_5 = 0;

      if (VAR_2 < 0)
         VAR_5 = -VAR_2;

      do
      {
         unsigned int VAR_6 = 0;

         if (VAR_1 < 0)
            VAR_6 = -VAR_1;

         do
         {

            const png_uint_16 *VAR_7 = VAR_4 + (VAR_5 * VAR_3->width + VAR_6)*4;
            png_uint_32 VAR_8 = VAR_7[3];




            if (VAR_8 > 0)
            {
               png_uint_16 *VAR_9 = VAR_0->buffer +
                  ((VAR_5+VAR_2) * VAR_0->width + (VAR_6+VAR_1))*4;


               VAR_8 = 65535-VAR_8;

               if (VAR_8 > 0)
               {
                  png_uint_32 VAR_10;







                  VAR_10 = VAR_9[0] * VAR_8; VAR_10 = (VAR_10 + (VAR_10 >> 16) + 32769) >> 16; VAR_9[0] = VAR_10 + VAR_7[0];
                  VAR_10 = VAR_9[1] * VAR_8; VAR_10 = (VAR_10 + (VAR_10 >> 16) + 32769) >> 16; VAR_9[1] = VAR_10 + VAR_7[1];
                  VAR_10 = VAR_9[2] * VAR_8; VAR_10 = (VAR_10 + (VAR_10 >> 16) + 32769) >> 16; VAR_9[2] = VAR_10 + VAR_7[2];
                  VAR_10 = VAR_9[3] * VAR_8; VAR_10 = (VAR_10 + (VAR_10 >> 16) + 32769) >> 16; VAR_9[3] = VAR_10 + VAR_7[3];
               }

               else
                  VAR_9[0] = VAR_7[0],
                  VAR_9[1] = VAR_7[1],
                  VAR_9[2] = VAR_7[2],
                  VAR_9[3] = VAR_7[3];
            }
         }
         while (++VAR_6 < VAR_3->width);
      }
      while (++VAR_5 < VAR_3->height);
   }
}
