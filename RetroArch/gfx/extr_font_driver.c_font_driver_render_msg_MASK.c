
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct font_params {int dummy; } ;
struct TYPE_4__ {int renderer_data; TYPE_1__* renderer; } ;
typedef TYPE_2__ font_data_t ;
struct TYPE_3__ {int (* render_msg ) (int *,int ,char*,struct font_params const*) ;} ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,char*,struct font_params const*) ;
 void* VAR_0 ;

void FUNC_3(
      video_frame_info_t *VAR_1,
      void *VAR_2,
      const char *VAR_3,
      const struct font_params *VAR_4)
{
   font_data_t *VAR_5 = (font_data_t*)(VAR_2
         ? VAR_2 : VAR_0);

   if (VAR_3 && *VAR_3 && VAR_5 && VAR_5->renderer && VAR_5->renderer->render_msg)
   {



      char *VAR_6 = (char*)VAR_3;


      VAR_5->renderer->render_msg(VAR_1,
            VAR_5->renderer_data, VAR_6, VAR_4);



   }
}
