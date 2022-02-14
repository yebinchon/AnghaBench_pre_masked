
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; } ;
struct TYPE_5__ {int timeout; int demoInterval; int onTime; int offTime; int camera_parameters; int preview_parameters; scalar_t__ onlyLuma; scalar_t__ bCapturing; int waitMethod; scalar_t__ demoMode; int framerate; TYPE_2__ common_settings; } ;
typedef TYPE_1__ RASPIVIDYUV_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(RASPIVIDYUV_STATE *VAR_2)
{
   if (!VAR_2)
   {
      FUNC_4(0);
      return;
   }


   FUNC_0(VAR_2, 0, sizeof(RASPIVIDYUV_STATE));

   FUNC_2(&VAR_2->common_settings);


   VAR_2->timeout = -1;
   VAR_2->common_settings.width = 1920;
   VAR_2->common_settings.height = 1080;
   VAR_2->framerate = VAR_0;
   VAR_2->demoMode = 0;
   VAR_2->demoInterval = 250;
   VAR_2->waitMethod = VAR_1;
   VAR_2->onTime = 5000;
   VAR_2->offTime = 5000;
   VAR_2->bCapturing = 0;
   VAR_2->onlyLuma = 0;


   FUNC_3(&VAR_2->preview_parameters);


   FUNC_1(&VAR_2->camera_parameters);
}
