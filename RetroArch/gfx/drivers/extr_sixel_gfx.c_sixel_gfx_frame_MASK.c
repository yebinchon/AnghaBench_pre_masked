
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ menu_is_alive; } ;
typedef TYPE_1__ video_frame_info_t ;
typedef int uint64_t ;
struct TYPE_7__ {unsigned int screen_width; unsigned int screen_height; unsigned int video_width; unsigned int video_height; int sixel_status; } ;
typedef TYPE_2__ sixel_t ;
typedef int gfx_ctx_mode_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int *,char const*,int *) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (unsigned char*,unsigned int,unsigned int,int ,unsigned int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (unsigned int) ;
 char* FUNC_9 (int ) ;
 char* FUNC_10 () ;
 unsigned int VAR_4 ;
 void const* VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int* VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static bool FUNC_11(void *VAR_16, const void *VAR_17,
      unsigned VAR_18, unsigned VAR_19, uint64_t VAR_20,
      unsigned VAR_21, const char *VAR_22, video_frame_info_t *VAR_23)
{
   gfx_ctx_mode_t VAR_24;
   const void *VAR_25 = VAR_17;
   unsigned VAR_26 = 0;
   unsigned VAR_27 = 0;
   unsigned VAR_28 = VAR_10;
   unsigned VAR_29 = VAR_2;
   bool VAR_30 = 1;
   sixel_t *VAR_31 = (sixel_t*)VAR_16;

   if (!VAR_17 || !VAR_18 || !VAR_19)
      return 1;





   if (VAR_14 != VAR_18 || VAR_11 != VAR_19 || VAR_12 != VAR_21)
   {
      if (VAR_18 > 4 && VAR_19 > 4)
      {
         VAR_14 = VAR_18;
         VAR_11 = VAR_19;
         VAR_12 = VAR_21;
         VAR_31->screen_width = VAR_14 * VAR_13;
         VAR_31->screen_height = VAR_11 * VAR_13;
      }
   }

   if (VAR_5 && VAR_23->menu_is_alive)
   {
      VAR_25 = VAR_5;
      VAR_26 = VAR_8;
      VAR_27 = VAR_6;
      VAR_21 = VAR_7;
      VAR_28 = VAR_4;
   }
   else
   {
      VAR_26 = VAR_14;
      VAR_27 = VAR_11;
      VAR_21 = VAR_12;

      if (VAR_18 == 4 && VAR_19 == 4 && (VAR_18 < VAR_26 && VAR_19 < VAR_27))
         VAR_30 = 0;

      if (VAR_23->menu_is_alive)
         VAR_30 = 0;
   }

   if (VAR_31->video_width != VAR_26 || VAR_31->video_height != VAR_27)
   {
      FUNC_8(VAR_31->screen_height);

      VAR_31->video_width = VAR_26;
      VAR_31->video_height = VAR_27;

      if (VAR_9)
      {
         FUNC_3(VAR_9);
      }

      VAR_9 = (unsigned*)FUNC_4(VAR_31->screen_width * VAR_31->screen_height * sizeof(unsigned));
   }

   if (VAR_28 == 16)
   {
      if (VAR_9)
      {
         if (VAR_25 == VAR_5)
         {

            unsigned VAR_32, VAR_33;

            for (VAR_33 = 0; VAR_33 < VAR_31->screen_height; VAR_33++)
            {
               for (VAR_32 = 0; VAR_32 < VAR_31->screen_width; VAR_32++)
               {

                  unsigned VAR_34 = (VAR_26 * VAR_32) / VAR_31->screen_width;
                  unsigned VAR_35 = (VAR_27 * VAR_33) / VAR_31->screen_height;
                  unsigned short VAR_36 = ((unsigned short*)VAR_25)[VAR_26 * VAR_35 + VAR_34];


                  unsigned VAR_37 = ((VAR_36 & 0xF000) << 8) | ((VAR_36 & 0xF000) << 4);
                  unsigned VAR_38 = ((VAR_36 & 0x0F00) << 4) | ((VAR_36 & 0x0F00) << 0);
                  unsigned VAR_39 = ((VAR_36 & 0x00F0) << 0) | ((VAR_36 & 0x00F0) >> 4);

                  VAR_9[VAR_31->screen_width * VAR_33 + VAR_32] = 0xFF000000 | VAR_39 | VAR_38 | VAR_37;
               }
            }

            VAR_29 = VAR_3;
            VAR_25 = VAR_9;
         }
         else
         {

            unsigned VAR_40, VAR_41;

            for (VAR_41 = 0; VAR_41 < VAR_31->screen_height; VAR_41++)
            {
               for (VAR_40 = 0; VAR_40 < VAR_31->screen_width; VAR_40++)
               {

                  unsigned VAR_42 = (VAR_26 * VAR_40) / VAR_31->screen_width;
                  unsigned VAR_43 = (VAR_27 * VAR_41) / VAR_31->screen_height;
                  unsigned short VAR_44 = ((unsigned short*)VAR_25)[(VAR_21 / (VAR_28 / 8)) * VAR_43 + VAR_42];


                  unsigned VAR_45 = ((VAR_44 & 0x001F) << 3) | ((VAR_44 & 0x001C) >> 2);
                  unsigned VAR_46 = ((VAR_44 & 0x07E0) << 5) | ((VAR_44 & 0x0600) >> 1);
                  unsigned VAR_47 = ((VAR_44 & 0xF800) << 8) | ((VAR_44 & 0xE000) << 3);

                  VAR_9[VAR_31->screen_width * VAR_41 + VAR_40] = 0xFF000000 | VAR_47 | VAR_46 | VAR_45;
               }
            }

            VAR_29 = VAR_1;
            VAR_25 = VAR_9;
         }
      }
      else
      {

      }
   }
   else
   {

      unsigned VAR_48, VAR_49;

      for (VAR_49 = 0; VAR_49 < VAR_31->screen_height; VAR_49++)
      {
         for (VAR_48 = 0; VAR_48 < VAR_31->screen_width; VAR_48++)
         {

            unsigned VAR_50 = (VAR_26 * VAR_48) / VAR_31->screen_width;
            unsigned VAR_51 = (VAR_27 * VAR_49) / VAR_31->screen_height;
            unsigned VAR_52 = ((unsigned*)VAR_25)[(VAR_21 / (VAR_28 / 8)) * VAR_51 + VAR_50];

            VAR_9[VAR_31->screen_width * VAR_49 + VAR_48] = VAR_52;
         }
      }

      VAR_29 = VAR_1;
      VAR_25 = VAR_9;
   }

   if (VAR_30 && VAR_31->screen_width > 0 && VAR_31->screen_height > 0)
   {
      FUNC_7("\0338");

      VAR_31->sixel_status = FUNC_6((unsigned char*)VAR_25, VAR_31->screen_width, VAR_31->screen_height,
            VAR_0, VAR_29);

      if (FUNC_0(VAR_31->sixel_status))
      {
         FUNC_2(VAR_15, "%s\n%s\n",
               FUNC_9(VAR_31->sixel_status),
               FUNC_10());
      }
   }

   if (VAR_22)
      FUNC_1(VAR_23, ((void*)0), VAR_22, ((void*)0));

   return 1;
}
