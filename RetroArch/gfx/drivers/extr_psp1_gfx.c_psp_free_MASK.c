
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* dList; void* frame; scalar_t__ frame_coords; } ;
struct TYPE_4__ {void* main_dList; void* frame_dList; TYPE_1__ menu; scalar_t__ frame_coords; } ;
typedef TYPE_2__ psp1_video_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_2)
{
   psp1_video_t *VAR_3 = (psp1_video_t*)VAR_2;

   if(!(VAR_3) || !(VAR_3->main_dList))
      return;

   FUNC_2();
   FUNC_3(VAR_0);
   FUNC_4();

   if (VAR_3->main_dList)
      FUNC_1(VAR_3->main_dList);
   if (VAR_3->frame_dList)
      FUNC_1(VAR_3->frame_dList);
   if (VAR_3->frame_coords)
      FUNC_1(FUNC_0(VAR_3->frame_coords));
   if (VAR_3->menu.frame_coords)
      FUNC_1(FUNC_0(VAR_3->menu.frame_coords));
   if (VAR_3->menu.dList)
      FUNC_1(VAR_3->menu.dList);
   if (VAR_3->menu.frame)
      FUNC_1(VAR_3->menu.frame);

   FUNC_1(VAR_2);

   FUNC_5(VAR_1, 0);
   FUNC_6(VAR_1,0);
}
