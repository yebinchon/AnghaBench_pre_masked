
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_3__ {int (* set_title ) (int *,char*) ;} ;
typedef TYPE_1__ ui_window_t ;
typedef int title ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(video_frame_info_t *VAR_1)
{

   const ui_window_t *VAR_2 = FUNC_1();

   if (VAR_2)
   {
      char VAR_3[128];

      VAR_3[0] = '\0';

      FUNC_2(VAR_3, sizeof(VAR_3));

      if (VAR_3[0])
         VAR_2->set_title(&VAR_0, VAR_3);
   }

}
