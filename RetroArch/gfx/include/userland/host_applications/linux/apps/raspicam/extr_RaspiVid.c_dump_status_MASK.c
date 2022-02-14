
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nextWaitMethod; char* description; } ;
struct TYPE_4__ {int bitrate; int framerate; int timeout; int quantisationParameter; int intraperiod; int slices; int segmentSize; int segmentWrap; int segmentNumber; scalar_t__ waitMethod; int camera_parameters; int preview_parameters; int bCapturing; int raw_output_fmt; scalar_t__ raw_output; int intra_refresh_type; scalar_t__ addSPSTiming; scalar_t__ bInlineHeaders; int level; int profile; int common_settings; } ;
typedef TYPE_1__ RASPIVID_STATE ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 TYPE_2__* VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_6(RASPIVID_STATE *VAR_13)
{
   int VAR_14;

   if (!VAR_13)
   {
      FUNC_5(0);
      return;
   }

   FUNC_3(&VAR_13->common_settings);

   FUNC_0(VAR_10, "bitrate %d, framerate %d, time delay %d\n", VAR_13->bitrate, VAR_13->framerate, VAR_13->timeout);
   FUNC_0(VAR_10, "H264 Profile %s\n", FUNC_2(VAR_13->profile, VAR_6, VAR_7));
   FUNC_0(VAR_10, "H264 Level %s\n", FUNC_2(VAR_13->level, VAR_4, VAR_5));
   FUNC_0(VAR_10, "H264 Quantisation level %d, Inline headers %s\n", VAR_13->quantisationParameter, VAR_13->bInlineHeaders ? "Yes" : "No");
   FUNC_0(VAR_10, "H264 Fill SPS Timings %s\n", VAR_13->addSPSTiming ? "Yes" : "No");
   FUNC_0(VAR_10, "H264 Intra refresh type %s, period %d\n", FUNC_2(VAR_13->intra_refresh_type, VAR_2, VAR_3), VAR_13->intraperiod);
   FUNC_0(VAR_10, "H264 Slices %d\n", VAR_13->slices);


   if (VAR_13->segmentSize)
      FUNC_0(VAR_10, "Segment size %d, segment wrap value %d, initial segment number %d\n", VAR_13->segmentSize, VAR_13->segmentWrap, VAR_13->segmentNumber);

   if (VAR_13->raw_output)
      FUNC_0(VAR_10, "Raw output enabled, format %s\n", FUNC_2(VAR_13->raw_output_fmt, VAR_8, VAR_9));

   FUNC_0(VAR_10, "Wait method : ");
   for (VAR_14=0; VAR_14<VAR_12; VAR_14++)
   {
      if (VAR_13->waitMethod == VAR_11[VAR_14].nextWaitMethod)
         FUNC_0(VAR_10, "%s", VAR_11[VAR_14].description);
   }
   FUNC_0(VAR_10, "\nInitial state '%s'\n", FUNC_2(VAR_13->bCapturing, VAR_0, VAR_1));
   FUNC_0(VAR_10, "\n\n");

   FUNC_4(&VAR_13->preview_parameters);
   FUNC_1(&VAR_13->camera_parameters);
}
