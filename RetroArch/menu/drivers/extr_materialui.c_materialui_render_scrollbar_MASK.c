
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_6__ {int scrollbar; } ;
struct TYPE_5__ {int height; int width; int y; int x; int active; } ;
struct TYPE_7__ {TYPE_2__ colors; TYPE_1__ scrollbar; } ;
typedef TYPE_3__ materialui_handle_t ;


 int FUNC_0 (int *,int ,int ,int ,int ,unsigned int,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(
      materialui_handle_t *VAR_0,
      video_frame_info_t *VAR_1,
      unsigned VAR_2, unsigned VAR_3)
{

   if (!VAR_0->scrollbar.active)
      return;


   FUNC_0(
         VAR_1,
         VAR_0->scrollbar.x,
         VAR_0->scrollbar.y,
         VAR_0->scrollbar.width,
         VAR_0->scrollbar.height,
         VAR_2, VAR_3,
         VAR_0->colors.scrollbar);
}
