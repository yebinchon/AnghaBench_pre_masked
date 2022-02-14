
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ userdata; } ;
typedef TYPE_2__ video_frame_info_t ;
struct TYPE_5__ {int alpha_blend; } ;
struct TYPE_7__ {TYPE_1__ pipelines; } ;
typedef TYPE_3__ gl_core_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(video_frame_info_t *VAR_3)
{
   gl_core_t *VAR_4 = (gl_core_t*)VAR_3->userdata;

   FUNC_1(VAR_0);
   FUNC_0(VAR_2, VAR_1);
   FUNC_2(VAR_4->pipelines.alpha_blend);
}
