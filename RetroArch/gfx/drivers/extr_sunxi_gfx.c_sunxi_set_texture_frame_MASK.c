
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct sunxi_video {TYPE_2__* sunxi_disp; TYPE_1__* pages; scalar_t__ menu_active; } ;
struct TYPE_4__ {int xres; int bits_per_pixel; } ;
struct TYPE_3__ {int offset; scalar_t__ address; } ;


 int FUNC_0 (char*,char*,unsigned int) ;
 int FUNC_1 (TYPE_2__*,int ,int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, const void *VAR_1, bool VAR_2,
      unsigned VAR_3, unsigned VAR_4, float VAR_5)
{
   struct sunxi_video *VAR_6 = (struct sunxi_video*)VAR_0;

   if (VAR_6->menu_active)
   {
      unsigned int VAR_7, VAR_8;



      unsigned int VAR_9 = VAR_3 * 2;
      unsigned int VAR_10 = VAR_6->sunxi_disp->xres * 4;
      unsigned int VAR_11 = VAR_6->sunxi_disp->xres;
      uint32_t VAR_12[VAR_11];


      char *VAR_13 = (char*)(VAR_6->pages[0].address);

      for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
      {
         for (VAR_8 = 0; VAR_8 < VAR_9 / 2; VAR_8++)
         {
            uint16_t VAR_14 = *((uint16_t*)VAR_1 + (VAR_9 / 2 * VAR_7) + VAR_8);

            uint32_t VAR_15 = (VAR_14 << 8) & 0x00FF0000;
            uint32_t VAR_16 = (VAR_14 << 4) & 0x0000FF00;
            uint32_t VAR_17 = (VAR_14 << 0) & 0x000000FF;
            VAR_12[VAR_8] = (0 | VAR_15 | VAR_16 | VAR_17);
         }
         FUNC_0(VAR_13 + (VAR_10 * VAR_7), (char*)VAR_12, VAR_10);
      }


      FUNC_1(VAR_6->sunxi_disp,
            VAR_6->sunxi_disp->bits_per_pixel,
            VAR_6->pages[0].offset, VAR_3, VAR_4, VAR_6->sunxi_disp->xres);
   }
}
