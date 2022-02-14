
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ menu_is_alive; } ;
typedef TYPE_1__ video_frame_info_t ;
typedef int uint64_t ;
struct TYPE_7__ {unsigned int screen_width; unsigned int screen_height; unsigned int video_width; unsigned int video_height; scalar_t__ fd; } ;
typedef TYPE_2__ network_video_t ;
typedef int gfx_ctx_mode_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,char const*,int *) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 unsigned int VAR_3 ;
 void const* VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int* VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_4 (scalar_t__,void const*,int,int) ;

__attribute__((used)) static bool FUNC_5(void *VAR_13, const void *VAR_14,
      unsigned VAR_15, unsigned VAR_16, uint64_t VAR_17,
      unsigned VAR_18, const char *VAR_19, video_frame_info_t *VAR_20)
{
   gfx_ctx_mode_t VAR_21;
   const void *VAR_22 = VAR_14;
   unsigned VAR_23 = 0;
   unsigned VAR_24 = 0;
   unsigned VAR_25 = VAR_8;
   unsigned VAR_26 = VAR_1;
   bool VAR_27 = 1;
   network_video_t *VAR_28 = (network_video_t*)VAR_13;

   if (!VAR_14 || !VAR_15 || !VAR_16)
      return 1;





   if (VAR_12 != VAR_15 || VAR_9 != VAR_16 || VAR_10 != VAR_18)
   {
      if (VAR_15 > 4 && VAR_16 > 4)
      {
         VAR_12 = VAR_15;
         VAR_9 = VAR_16;
         VAR_10 = VAR_18;
         VAR_28->screen_width = VAR_12;
         VAR_28->screen_height = VAR_9;
      }
   }

   if (VAR_4 && VAR_20->menu_is_alive)
   {
      VAR_22 = VAR_4;
      VAR_23 = VAR_7;
      VAR_24 = VAR_5;
      VAR_18 = VAR_6;
      VAR_25 = VAR_3;
   }
   else
   {
      VAR_23 = VAR_12;
      VAR_24 = VAR_9;
      VAR_18 = VAR_10;

      if (VAR_15 == 4 && VAR_16 == 4 && (VAR_15 < VAR_23 && VAR_16 < VAR_24))
         VAR_27 = 0;

      if (VAR_20->menu_is_alive)
         VAR_27 = 0;
   }

   if (VAR_28->video_width != VAR_23 || VAR_28->video_height != VAR_24)
   {
      VAR_28->video_width = VAR_23;
      VAR_28->video_height = VAR_24;

      if (VAR_11)
      {
         FUNC_1(VAR_11);
      }

      VAR_11 = (unsigned*)FUNC_2(VAR_28->screen_width * VAR_28->screen_height * sizeof(unsigned));
   }

   if (VAR_25 == 16)
   {
      if (VAR_11)
      {
         if (VAR_22 == VAR_4)
         {

            unsigned VAR_29, VAR_30;

            for (VAR_30 = 0; VAR_30 < VAR_28->screen_height; VAR_30++)
            {
               for (VAR_29 = 0; VAR_29 < VAR_28->screen_width; VAR_29++)
               {

                  unsigned VAR_31 = (VAR_23 * VAR_29) / VAR_28->screen_width;
                  unsigned VAR_32 = (VAR_24 * VAR_30) / VAR_28->screen_height;
                  unsigned short VAR_33 = ((unsigned short*)VAR_22)[VAR_23 * VAR_32 + VAR_31];


                  unsigned VAR_34 = ((VAR_33 & 0xF000) << 8) | ((VAR_33 & 0xF000) << 4);
                  unsigned VAR_35 = ((VAR_33 & 0x0F00) << 4) | ((VAR_33 & 0x0F00) << 0);
                  unsigned VAR_36 = ((VAR_33 & 0x00F0) << 0) | ((VAR_33 & 0x00F0) >> 4);

                  VAR_11[VAR_28->screen_width * VAR_30 + VAR_29] = 0xFF000000 | VAR_36 | VAR_35 | VAR_34;
               }
            }

            VAR_26 = VAR_2;
            VAR_22 = VAR_11;
         }
         else
         {

            unsigned VAR_37, VAR_38;

            for (VAR_38 = 0; VAR_38 < VAR_28->screen_height; VAR_38++)
            {
               for (VAR_37 = 0; VAR_37 < VAR_28->screen_width; VAR_37++)
               {

                  unsigned VAR_39 = (VAR_23 * VAR_37) / VAR_28->screen_width;
                  unsigned VAR_40 = (VAR_24 * VAR_38) / VAR_28->screen_height;
                  unsigned short VAR_41 = ((unsigned short*)VAR_22)[(VAR_18 / (VAR_25 / 8)) * VAR_40 + VAR_39];


                  unsigned VAR_42 = ((VAR_41 & 0x001F) << 3) | ((VAR_41 & 0x001C) >> 2);
                  unsigned VAR_43 = ((VAR_41 & 0x07E0) << 5) | ((VAR_41 & 0x0600) >> 1);
                  unsigned VAR_44 = ((VAR_41 & 0xF800) << 8) | ((VAR_41 & 0xE000) << 3);

                  VAR_11[VAR_28->screen_width * VAR_38 + VAR_37] = 0xFF000000 | VAR_44 | VAR_43 | VAR_42;
               }
            }

            VAR_26 = VAR_0;
            VAR_22 = VAR_11;
         }
      }
      else
      {

      }
   }
   else
   {

      unsigned VAR_45, VAR_46;

      for (VAR_46 = 0; VAR_46 < VAR_28->screen_height; VAR_46++)
      {
         for (VAR_45 = 0; VAR_45 < VAR_28->screen_width; VAR_45++)
         {

            unsigned VAR_47 = (VAR_23 * VAR_45) / VAR_28->screen_width;
            unsigned VAR_48 = (VAR_24 * VAR_46) / VAR_28->screen_height;
            unsigned VAR_49 = ((unsigned*)VAR_22)[(VAR_18 / (VAR_25 / 8)) * VAR_48 + VAR_47];

            VAR_11[VAR_28->screen_width * VAR_46 + VAR_45] = VAR_49;
         }
      }

      VAR_26 = VAR_0;
      VAR_22 = VAR_11;
   }

   if (VAR_27 && VAR_28->screen_width > 0 && VAR_28->screen_height > 0)
   {
      if (VAR_28->fd > 0)
         FUNC_4(VAR_28->fd, VAR_22, VAR_28->screen_width * VAR_28->screen_height * 4, 1);
   }

   if (VAR_19)
      FUNC_0(VAR_20, ((void*)0), VAR_19, ((void*)0));

   return 1;
}
