
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; } ;
struct TYPE_5__ {int timeout; int bitrate; int intraperiod; int demoInterval; int immutableInput; int onTime; int offTime; int segmentNumber; int intra_refresh_type; int netListen; int slices; int camera_parameters; int preview_parameters; int addSPSTiming; scalar_t__ save_pts; scalar_t__ frame; scalar_t__ inlineMotionVectors; scalar_t__ splitWait; scalar_t__ splitNow; scalar_t__ segmentWrap; scalar_t__ segmentSize; scalar_t__ bInlineHeaders; scalar_t__ bCapturing; int waitMethod; int level; int profile; scalar_t__ demoMode; scalar_t__ quantisationParameter; int framerate; int encoding; TYPE_2__ common_settings; } ;
typedef TYPE_1__ RASPIVID_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(RASPIVID_STATE *VAR_6)
{
   if (!VAR_6)
   {
      FUNC_4(0);
      return;
   }


   FUNC_0(VAR_6, 0, sizeof(RASPIVID_STATE));

   FUNC_2(&VAR_6->common_settings);


   VAR_6->timeout = -1;
   VAR_6->common_settings.width = 1920;
   VAR_6->common_settings.height = 1080;
   VAR_6->encoding = VAR_0;
   VAR_6->bitrate = 17000000;
   VAR_6->framerate = VAR_4;
   VAR_6->intraperiod = -1;
   VAR_6->quantisationParameter = 0;
   VAR_6->demoMode = 0;
   VAR_6->demoInterval = 250;
   VAR_6->immutableInput = 1;
   VAR_6->profile = VAR_3;
   VAR_6->level = VAR_2;
   VAR_6->waitMethod = VAR_5;
   VAR_6->onTime = 5000;
   VAR_6->offTime = 5000;
   VAR_6->bCapturing = 0;
   VAR_6->bInlineHeaders = 0;
   VAR_6->segmentSize = 0;
   VAR_6->segmentNumber = 1;
   VAR_6->segmentWrap = 0;
   VAR_6->splitNow = 0;
   VAR_6->splitWait = 0;
   VAR_6->inlineMotionVectors = 0;
   VAR_6->intra_refresh_type = -1;
   VAR_6->frame = 0;
   VAR_6->save_pts = 0;
   VAR_6->netListen = 0;
   VAR_6->addSPSTiming = VAR_1;
   VAR_6->slices = 1;


   FUNC_3(&VAR_6->preview_parameters);


   FUNC_1(&VAR_6->camera_parameters);
}
