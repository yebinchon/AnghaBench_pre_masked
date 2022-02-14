
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int timeout; int camera_parameters; int preview_parameters; scalar_t__ onlyLuma; scalar_t__ burstCaptureMode; int frameNextMethod; scalar_t__ fullResPreview; int * linkname; scalar_t__ timelapse; int common_settings; } ;
typedef TYPE_1__ RASPISTILLYUV_STATE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(RASPISTILLYUV_STATE *VAR_1)
{
   if (!VAR_1)
   {
      FUNC_4(0);
      return;
   }


   FUNC_0(VAR_1, 0, sizeof(RASPISTILLYUV_STATE));

   FUNC_2(&VAR_1->common_settings);


   VAR_1->timeout = -1;
   VAR_1->timelapse = 0;
   VAR_1->linkname = ((void*)0);
   VAR_1->fullResPreview = 0;
   VAR_1->frameNextMethod = VAR_0;
   VAR_1->burstCaptureMode=0;
   VAR_1->onlyLuma = 0;


   FUNC_3(&VAR_1->preview_parameters);


   FUNC_1(&VAR_1->camera_parameters);
}
