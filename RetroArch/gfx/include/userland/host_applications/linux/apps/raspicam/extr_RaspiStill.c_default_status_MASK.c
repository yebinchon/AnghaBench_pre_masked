
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int enable; int width; int height; int quality; } ;
struct TYPE_6__ {int timeout; int quality; int demoInterval; int enableExifTags; int raspitex_state; int camera_parameters; int preview_parameters; scalar_t__ restart_interval; scalar_t__ timestamp; scalar_t__ datetime; scalar_t__ burstCaptureMode; scalar_t__ glCapture; scalar_t__ useGL; int frameNextMethod; scalar_t__ fullResPreview; scalar_t__ timelapse; scalar_t__ numExifTags; int encoding; int * encoder_pool; int * encoder_connection; int * preview_connection; int * encoder_component; int * camera_component; scalar_t__ demoMode; TYPE_1__ thumbnailConfig; scalar_t__ frameStart; int * linkname; scalar_t__ wantRAW; int common_settings; } ;
typedef TYPE_2__ RASPISTILL_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(RASPISTILL_STATE *VAR_2)
{
   if (!VAR_2)
   {
      FUNC_5(0);
      return;
   }

   FUNC_0(VAR_2, 0, sizeof(*VAR_2));

   FUNC_2(&VAR_2->common_settings);

   VAR_2->timeout = -1;
   VAR_2->quality = 85;
   VAR_2->wantRAW = 0;
   VAR_2->linkname = ((void*)0);
   VAR_2->frameStart = 0;
   VAR_2->thumbnailConfig.enable = 1;
   VAR_2->thumbnailConfig.width = 64;
   VAR_2->thumbnailConfig.height = 48;
   VAR_2->thumbnailConfig.quality = 35;
   VAR_2->demoMode = 0;
   VAR_2->demoInterval = 250;
   VAR_2->camera_component = ((void*)0);
   VAR_2->encoder_component = ((void*)0);
   VAR_2->preview_connection = ((void*)0);
   VAR_2->encoder_connection = ((void*)0);
   VAR_2->encoder_pool = ((void*)0);
   VAR_2->encoding = VAR_1;
   VAR_2->numExifTags = 0;
   VAR_2->enableExifTags = 1;
   VAR_2->timelapse = 0;
   VAR_2->fullResPreview = 0;
   VAR_2->frameNextMethod = VAR_0;
   VAR_2->useGL = 0;
   VAR_2->glCapture = 0;
   VAR_2->burstCaptureMode=0;
   VAR_2->datetime = 0;
   VAR_2->timestamp = 0;
   VAR_2->restart_interval = 0;


   FUNC_3(&VAR_2->preview_parameters);


   FUNC_1(&VAR_2->camera_parameters);


   FUNC_4(&VAR_2->raspitex_state);
}
