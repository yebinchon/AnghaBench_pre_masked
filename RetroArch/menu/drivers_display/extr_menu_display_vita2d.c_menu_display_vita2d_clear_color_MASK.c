
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_3__ {float r; float g; float b; float a; } ;
typedef TYPE_1__ menu_display_ctx_clearcolor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(
      menu_display_ctx_clearcolor_t *VAR_2,
      video_frame_info_t *VAR_3)
{
   if (!VAR_2)
      return;
   FUNC_2(FUNC_0((int)(VAR_2->r*255.f),
                                (int)(VAR_2->g*255.f),
                                (int)(VAR_2->b*255.f),
                                (int)(VAR_2->a*255.f)));
   FUNC_1(0,0,VAR_1,VAR_0,FUNC_0((int)(VAR_2->r*255.f),
                                (int)(VAR_2->g*255.f),
                                (int)(VAR_2->b*255.f),
                                (int)(VAR_2->a*255.f)));
}
