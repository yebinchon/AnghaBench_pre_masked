
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
struct TYPE_7__ {int control; } ;
struct TYPE_5__ {int member_1; int member_0; } ;
struct TYPE_6__ {int enable; char* text; int text_size; int custom_text_Y; int custom_text_U; int custom_text_V; int custom_background_Y; int custom_background_U; int custom_background_V; unsigned int justify; unsigned int x_offset; unsigned int y_offset; int hdr; void* custom_background_colour; void* custom_text_colour; void* enable_text_background; void* show_frame_num; void* show_motion; void* show_caf; void* show_lens; void* show_analog_gain; void* show_shutter; TYPE_1__ member_0; } ;
typedef TYPE_2__ MMAL_PARAMETER_CAMERA_ANNOTATE_V4_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 struct tm* FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char const*,char) ;
 int FUNC_4 (char*,int,char const*,struct tm*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (int *) ;

int FUNC_9(MMAL_COMPONENT_T *VAR_16, const int VAR_17, const char *VAR_18,
                                 const int VAR_19, const int VAR_20, const int VAR_21,
                                 const unsigned int VAR_22, const unsigned int VAR_23, const unsigned int VAR_24)
{
   MMAL_PARAMETER_CAMERA_ANNOTATE_V4_T VAR_25 =
   {{VAR_14, sizeof(MMAL_PARAMETER_CAMERA_ANNOTATE_V4_T)}};

   if (VAR_17)
   {
      time_t VAR_26 = FUNC_8(((void*)0));
      struct tm VAR_27 = *FUNC_0(&VAR_26);
      char VAR_28[VAR_12];
      int VAR_29 = 1;

      VAR_25.enable = 1;

      if (VAR_17 & (VAR_0 | VAR_10))
      {
         if ((VAR_17 & (VAR_9 | VAR_3)) && FUNC_3(VAR_18,'%') != ((void*)0))
         {

            FUNC_4(VAR_25.text, VAR_11, VAR_18, &VAR_27 );
            VAR_29 = 0;
         }
         else
         {
            FUNC_7(VAR_25.text, VAR_18, VAR_11);
         }
         VAR_25.text[VAR_11-1] = '\0';
      }

      if (VAR_29 && (VAR_17 & VAR_9))
      {
         if(FUNC_5(VAR_25.text))
         {
            FUNC_4(VAR_28, 32, " %X", &VAR_27 );
         }
         else
         {
            FUNC_4(VAR_28, 32, "%X", &VAR_27 );
         }
         FUNC_6(VAR_25.text, VAR_28, VAR_11 - FUNC_5(VAR_25.text) - 1);
      }

      if (VAR_29 && (VAR_17 & VAR_3))
      {
         if(FUNC_5(VAR_25.text))
         {
            FUNC_4(VAR_28, 32, " %x", &VAR_27 );
         }
         else
         {
            FUNC_4(VAR_28, 32, "%x", &VAR_27 );
         }
         FUNC_6(VAR_25.text, VAR_28, VAR_11 - FUNC_5(VAR_25.text) - 1);
      }

      if (VAR_17 & VAR_8)
         VAR_25.show_shutter = VAR_15;

      if (VAR_17 & VAR_5)
         VAR_25.show_analog_gain = VAR_15;

      if (VAR_17 & VAR_6)
         VAR_25.show_lens = VAR_15;

      if (VAR_17 & VAR_2)
         VAR_25.show_caf = VAR_15;

      if (VAR_17 & VAR_7)
         VAR_25.show_motion = VAR_15;

      if (VAR_17 & VAR_4)
         VAR_25.show_frame_num = VAR_15;

      if (VAR_17 & VAR_1)
         VAR_25.enable_text_background = VAR_15;

      VAR_25.text_size = VAR_19;

      if (VAR_20 != -1)
      {
         VAR_25.custom_text_colour = VAR_15;
         VAR_25.custom_text_Y = VAR_20&0xff;
         VAR_25.custom_text_U = (VAR_20>>8)&0xff;
         VAR_25.custom_text_V = (VAR_20>>16)&0xff;
      }
      else
         VAR_25.custom_text_colour = VAR_13;

      if (VAR_21 != -1)
      {
         VAR_25.custom_background_colour = VAR_15;
         VAR_25.custom_background_Y = VAR_21&0xff;
         VAR_25.custom_background_U = (VAR_21>>8)&0xff;
         VAR_25.custom_background_V = (VAR_21>>16)&0xff;
      }
      else
         VAR_25.custom_background_colour = VAR_13;

      VAR_25.justify = VAR_22;
      VAR_25.x_offset = VAR_23;
      VAR_25.y_offset = VAR_24;
   }
   else
      VAR_25.enable = 0;

   return FUNC_2(FUNC_1(VAR_16->control, &VAR_25.hdr));
}
