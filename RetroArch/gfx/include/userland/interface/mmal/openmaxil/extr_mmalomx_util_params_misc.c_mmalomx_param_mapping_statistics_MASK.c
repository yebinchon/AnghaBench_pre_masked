
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int corrupt_macroblocks; int total_bytes; int maximum_frame_bytes; int eos_seen; int frames_discarded; int frames_skipped; scalar_t__ frame_count; int buffer_count; } ;
struct TYPE_3__ {int nCorruptMBs; int nByteCount; int nMaxFrameSize; int nEOS; int nDiscards; int nFrameSkips; scalar_t__ nImageCount; scalar_t__ nFrameCount; int nBufferCount; } ;
typedef scalar_t__ OMX_PTR ;
typedef TYPE_1__ OMX_CONFIG_BRCMPORTSTATSTYPE ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PARAMETER_STATISTICS_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef scalar_t__ MMALOMX_PARAM_MAPPING_DIRECTION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMALOMX_PARAM_MAPPING_DIRECTION VAR_2,
   MMAL_PARAMETER_HEADER_T *VAR_3, OMX_PTR VAR_4)
{
   OMX_CONFIG_BRCMPORTSTATSTYPE *VAR_5 = (OMX_CONFIG_BRCMPORTSTATSTYPE *)VAR_4;
   MMAL_PARAMETER_STATISTICS_T *VAR_6 = (MMAL_PARAMETER_STATISTICS_T *)VAR_3;

   if (VAR_2 == VAR_0)
   {
      VAR_6->buffer_count = VAR_5->nBufferCount;
      VAR_6->frame_count = VAR_5->nImageCount + VAR_5->nFrameCount;
      VAR_6->frames_skipped = VAR_5->nFrameSkips;
      VAR_6->frames_discarded = VAR_5->nDiscards;
      VAR_6->eos_seen = VAR_5->nEOS;
      VAR_6->maximum_frame_bytes = VAR_5->nMaxFrameSize;
      VAR_6->total_bytes = FUNC_1(VAR_5->nByteCount);
      VAR_6->corrupt_macroblocks = VAR_5->nCorruptMBs;
   }
   else
   {
      VAR_5->nBufferCount = VAR_6->buffer_count;
      VAR_5->nFrameCount = VAR_6->frame_count;
      VAR_5->nImageCount = 0;
      VAR_5->nFrameSkips = VAR_6->frames_skipped;
      VAR_5->nDiscards = VAR_6->frames_discarded;
      VAR_5->nEOS = VAR_6->eos_seen;
      VAR_5->nMaxFrameSize = VAR_6->maximum_frame_bytes;
      VAR_5->nByteCount = FUNC_0(VAR_6->total_bytes);
      VAR_5->nCorruptMBs = VAR_6->corrupt_macroblocks;
   }

   return VAR_1;
}
