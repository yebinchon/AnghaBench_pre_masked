
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int int64_t ;
struct TYPE_26__ {TYPE_4__* format; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
struct TYPE_27__ {long long duration; TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_28__ {int version; int channels; int xing_toc_valid; int data_size; int num_frames; int bitrate; int sample_rate; int frame_size_samples; scalar_t__* xing_toc; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_25__ {TYPE_3__* type; } ;
struct TYPE_23__ {long long gap_delay; scalar_t__ gap_padding; } ;
struct TYPE_24__ {TYPE_2__ audio; } ;
struct TYPE_22__ {TYPE_7__* module; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_6__*,int *,int) ;
 int FUNC_2 (TYPE_6__*,int ,int *,int) ;
 int FUNC_3 (TYPE_6__*,scalar_t__*,int) ;
 scalar_t__ FUNC_4 (TYPE_6__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_6__*,char*) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 int FUNC_8 (TYPE_6__*,char*) ;
 int FUNC_9 (TYPE_6__*,int,char*) ;
 int FUNC_10 (TYPE_6__*,char*) ;
 int FUNC_11 (TYPE_6__*,char*) ;
 int FUNC_12 (TYPE_6__*,char*) ;
 int FUNC_13 (TYPE_6__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_14 (char,char,char,char) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_15( VC_CONTAINER_T *VAR_7 )
{
   VC_CONTAINER_MODULE_T *VAR_8 = VAR_7->priv->module;
   VC_CONTAINER_TRACK_T *VAR_9 = VAR_7->tracks[0];
   VC_CONTAINER_STATUS_T VAR_10 = VAR_5;
   uint32_t VAR_11[1];
   int64_t VAR_12, VAR_13 = FUNC_13(VAR_7);


   VAR_12 = (VAR_8->version == 1) ? ((VAR_8->channels == 1) ? FUNC_0(21) : FUNC_0(36)) :
      ((VAR_8->channels == 1) ? FUNC_0(13) : FUNC_0(21));

   if (FUNC_2(VAR_7, VAR_12, (uint8_t*)VAR_11, 4) != 4)
      return VAR_4;

   if (VAR_11[0] == FUNC_14('X','i','n','g') || VAR_11[0] == FUNC_14('I','n','f','o'))
   {
      uint32_t VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;



      FUNC_7(VAR_7, VAR_12);

      FUNC_8(VAR_7, "XING");
      VAR_14 = FUNC_5(VAR_7, "XING flags");

      if (VAR_14 & VAR_1)
         VAR_15 = FUNC_5(VAR_7, "XING frames");

      if (VAR_14 & VAR_0)
         VAR_16 = FUNC_5(VAR_7, "XING bytes");

      if (VAR_14 & VAR_3)
      {
         FUNC_3(VAR_7, VAR_8->xing_toc, sizeof(VAR_8->xing_toc));

         if (VAR_15) VAR_8->xing_toc_valid = 1;

         VAR_8->xing_toc[0] = 0;
      }

      if (VAR_14 & VAR_2)
         FUNC_11(VAR_7, "XING quality");

      VAR_8->data_size = VAR_16;
      VAR_8->num_frames = VAR_15;

      if (VAR_8->num_frames && VAR_8->data_size)
      {

         VAR_8->bitrate =
            VAR_8->data_size * VAR_8->sample_rate * 8 / (VAR_8->num_frames * VAR_8->frame_size_samples);
      }

      VAR_7->duration = (VAR_8->num_frames * VAR_8->frame_size_samples * 1000000LL) / VAR_8->sample_rate;


      if (FUNC_1(VAR_7, (uint8_t*)VAR_11, 4) != 4)
         return VAR_4;

      if (VAR_11[0] == FUNC_14('L','A','M','E'))
      {
         uint32_t VAR_17;

         FUNC_8(VAR_7, "LAME");
         FUNC_9(VAR_7, 5, "LAME encoder version");
         FUNC_12(VAR_7, "LAME tag revision/VBR method");
         FUNC_12(VAR_7, "LAME LP filter value");
         FUNC_11(VAR_7, "LAME peak signal amplitude");
         FUNC_10(VAR_7, "LAME radio replay gain");
         FUNC_10(VAR_7, "LAME audiophile replay gain");
         FUNC_12(VAR_7, "LAME encoder flags");
         FUNC_12(VAR_7, "LAME ABR/minimal bitrate");
         VAR_17 = FUNC_4(VAR_7, "LAME encoder delay/padding");
         FUNC_12(VAR_7, "LAME misc");
         FUNC_12(VAR_7, "LAME MP3 gain");
         FUNC_10(VAR_7, "LAME presets and surround info");
         FUNC_11(VAR_7, "LAME music length");
         FUNC_10(VAR_7, "LAME music CRC");
         FUNC_10(VAR_7, "LAME tag CRC");
         VAR_9->format->type->audio.gap_delay = (VAR_17 >> 12) + VAR_8->frame_size_samples;
         VAR_9->format->type->audio.gap_padding = VAR_17 & 0xfff;
      }

      FUNC_6(VAR_7, VAR_13);
      VAR_10 = VAR_6;
   }



   return VAR_10;
}
