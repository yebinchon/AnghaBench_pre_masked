
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int surf; TYPE_5__* debug_font; TYPE_1__* d3d; } ;
typedef TYPE_2__ xfonts_t ;
typedef int wchar_t ;
struct TYPE_8__ {float font_msg_pos_x; float font_msg_pos_y; } ;
typedef TYPE_3__ video_frame_info_t ;
struct font_params {float x; float y; } ;
typedef int str ;
struct TYPE_9__ {int (* TextOut ) (int ,int *,unsigned int,float,float) ;} ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ,int *,unsigned int,float,float) ;
 int FUNC_1 (int ,int,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int ,int *,unsigned int,float,float) ;

__attribute__((used)) static void FUNC_5(
      video_frame_info_t *VAR_2,
      void *VAR_3, const char *VAR_4,
      const struct font_params *VAR_5)
{
   wchar_t VAR_6[VAR_1];
   float VAR_7, VAR_8;
   xfonts_t *VAR_9 = (xfonts_t*)VAR_3;

   if (VAR_5)
   {
      VAR_7 = VAR_5->x;
      VAR_8 = VAR_5->y;
   }
   else
   {
      VAR_7 = VAR_2->font_msg_pos_x;
      VAR_8 = VAR_2->font_msg_pos_y;
   }

   FUNC_1(VAR_9->d3d->dev,
         -1, 0, VAR_0, &VAR_9->surf);

   FUNC_3(VAR_6, VAR_4, sizeof(VAR_6) / sizeof(wchar_t));




   FUNC_0(VAR_9->debug_font, VAR_9->surf, VAR_6, (unsigned)-1, VAR_7, VAR_8);

   FUNC_2(VAR_9->surf);
}
