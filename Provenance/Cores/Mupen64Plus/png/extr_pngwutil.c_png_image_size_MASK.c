
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef int png_alloc_size_t ;
struct TYPE_3__ {int height; int rowbytes; scalar_t__ interlaced; int width; unsigned int pixel_depth; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (unsigned int,int) ;

__attribute__((used)) static png_alloc_size_t
FUNC_3(png_structrp VAR_0)
{



   png_uint_32 VAR_1 = VAR_0->height;

   if (VAR_0->rowbytes < 32768 && VAR_1 < 32768)
   {
      if (VAR_0->interlaced != 0)
      {



         png_uint_32 VAR_2 = VAR_0->width;
         unsigned int VAR_3 = VAR_0->pixel_depth;
         png_alloc_size_t VAR_4;
         int VAR_5;

         for (VAR_4=0, VAR_5=0; VAR_5<=6; ++VAR_5)
         {
            png_uint_32 VAR_6 = FUNC_0(VAR_2, VAR_5);

            if (VAR_6 > 0)
               VAR_4 += (FUNC_2(VAR_3, VAR_6)+1) * FUNC_1(VAR_1, VAR_5);
         }

         return VAR_4;
      }

      else
         return (VAR_0->rowbytes+1) * VAR_1;
   }

   else
      return 0xffffffffU;
}
