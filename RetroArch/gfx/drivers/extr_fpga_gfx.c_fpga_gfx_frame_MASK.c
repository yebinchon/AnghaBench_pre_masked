
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ menu_is_alive; } ;
typedef TYPE_1__ video_frame_info_t ;
typedef int uint64_t ;
typedef int gfx_ctx_mode_t ;
struct TYPE_7__ {unsigned int* framebuffer; } ;
typedef TYPE_2__ fpga_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,char const*,int *) ;
 unsigned int VAR_2 ;
 void const* VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(void *VAR_11, const void *VAR_12,
      unsigned VAR_13, unsigned VAR_14, uint64_t VAR_15,
      unsigned VAR_16, const char *VAR_17, video_frame_info_t *VAR_18)
{
   gfx_ctx_mode_t VAR_19;
   const void *VAR_20 = VAR_12;
   unsigned VAR_21 = 0;
   unsigned VAR_22 = 0;
   unsigned VAR_23 = VAR_7;
   bool VAR_24 = 1;
   fpga_t *VAR_25 = (fpga_t*)VAR_11;

   if (!VAR_12 || !VAR_13 || !VAR_14)
      return 1;





   if (VAR_10 != VAR_13 || VAR_8 != VAR_14 || VAR_9 != VAR_16)
   {
      if (VAR_13 > 4 && VAR_14 > 4)
      {
         VAR_10 = VAR_13;
         VAR_8 = VAR_14;
         VAR_9 = VAR_16;
      }
   }

   if (VAR_3 && VAR_18->menu_is_alive)
   {
      VAR_20 = VAR_3;
      VAR_21 = VAR_6;
      VAR_22 = VAR_4;
      VAR_16 = VAR_5;
      VAR_23 = VAR_2;
   }
   else
   {
      VAR_21 = VAR_10;
      VAR_22 = VAR_8;
      VAR_16 = VAR_9;

      if (VAR_13 == 4 && VAR_14 == 4 && (VAR_13 < VAR_21 && VAR_14 < VAR_22))
         VAR_24 = 0;

      if (VAR_18->menu_is_alive)
         VAR_24 = 0;
   }

   FUNC_2(&VAR_19);

   if (VAR_24)
   {
      if (VAR_23 == 16)
      {
         if (VAR_20 == VAR_3)
         {

            unsigned VAR_26, VAR_27;

            for (VAR_27 = 0; VAR_27 < VAR_0; VAR_27++)
            {
               for (VAR_26 = 0; VAR_26 < VAR_1; VAR_26++)
               {

                  unsigned VAR_28 = (VAR_21 * VAR_26) / VAR_1;
                  unsigned VAR_29 = (VAR_22 * VAR_27) / VAR_0;
                  unsigned short VAR_30 = ((unsigned short*)VAR_20)[VAR_21 * VAR_29 + VAR_28];


                  unsigned VAR_31 = ((VAR_30 & 0xF000) >> 12);
                  unsigned VAR_32 = ((VAR_30 & 0x0F00) >> 8);
                  unsigned VAR_33 = ((VAR_30 & 0x00F0) >> 4);

                  VAR_25->framebuffer[VAR_1 * VAR_27 + VAR_26] = (VAR_31 << 20) | (VAR_33 << 12) | (VAR_32 << 4);
               }
            }
         }
         else
         {

            unsigned VAR_34, VAR_35;

            for (VAR_35 = 0; VAR_35 < VAR_0; VAR_35++)
            {
               for (VAR_34 = 0; VAR_34 < VAR_1; VAR_34++)
               {

                  unsigned VAR_36 = (VAR_21 * VAR_34) / VAR_1;
                  unsigned VAR_37 = (VAR_22 * VAR_35) / VAR_0;
                  unsigned short VAR_38 = ((unsigned short*)VAR_20)[VAR_21 * VAR_37 + VAR_36];


                  unsigned VAR_39 = ((VAR_38 & 0xF800) >> 11);
                  unsigned VAR_40 = ((VAR_38 & 0x07E0) >> 5);
                  unsigned VAR_41 = ((VAR_38 & 0x001F) >> 0);

                  VAR_25->framebuffer[VAR_1 * VAR_35 + VAR_34] = (VAR_39 << 19) | (VAR_41 << 11) | (VAR_40 << 2);
               }
            }
         }
      }
      else
      {

      }
   }

   if (VAR_17)
      FUNC_0(VAR_18, ((void*)0), VAR_17, ((void*)0));

   return 1;
}
