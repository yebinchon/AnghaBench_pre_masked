
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef unsigned int uint32_t ;
typedef scalar_t__ int64_t ;
typedef unsigned int int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_29__ {unsigned int number; int timecode_scale; int frame_duration; TYPE_4__* encodings; scalar_t__ encodings_num; } ;
typedef TYPE_7__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_30__ {unsigned int tracks_num; TYPE_6__* priv; TYPE_3__** tracks; } ;
typedef TYPE_8__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_31__ {scalar_t__ timecode_scale; } ;
typedef TYPE_9__ VC_CONTAINER_MODULE_T ;
struct TYPE_28__ {int io; TYPE_9__* module; } ;
struct TYPE_27__ {scalar_t__ id; scalar_t__ data_start; scalar_t__ data_offset; scalar_t__ size; scalar_t__ offset; } ;
struct TYPE_26__ {unsigned int data_size; int data; } ;
struct TYPE_25__ {TYPE_2__* format; TYPE_1__* priv; } ;
struct TYPE_24__ {scalar_t__ es_type; } ;
struct TYPE_23__ {TYPE_7__* module; } ;
struct TYPE_22__ {size_t level; unsigned int lacing_num_frames; scalar_t__ lacing_size; unsigned int* lacing_sizes; scalar_t__ lacing_current_size; unsigned int track; int pts; scalar_t__ cluster_timecode; unsigned int flags; int frame_duration; unsigned int header_size; unsigned int header_size_backup; TYPE_5__* levels; int header_data; int seen_ref_block; } ;
typedef TYPE_10__ MKV_READER_STATE_T ;


 int FUNC_0 (TYPE_8__*,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (TYPE_8__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_8__*,char*) ;
 void* FUNC_3 (TYPE_8__*,char*) ;
 unsigned int FUNC_4 (TYPE_8__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_8__*) ;
 scalar_t__ FUNC_6 (TYPE_8__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (TYPE_8__*,TYPE_10__*) ;
 unsigned int FUNC_8 (int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_9(VC_CONTAINER_T *VAR_7,
      MKV_READER_STATE_T *VAR_8, uint32_t *VAR_9, uint32_t *VAR_10)
{
   VC_CONTAINER_STATUS_T VAR_11 = VAR_5;
   VC_CONTAINER_MODULE_T *VAR_12 = VAR_7->priv->module;
   VC_CONTAINER_TRACK_MODULE_T *VAR_13 = 0;
   unsigned int VAR_14, VAR_15, VAR_16, VAR_17 = 0;
   int64_t VAR_18, VAR_19;

   if ((VAR_8->levels[VAR_8->level].id == VAR_0 ||
        VAR_8->levels[VAR_8->level].id == VAR_1) &&
       VAR_8->levels[VAR_8->level].data_start + VAR_8->levels[VAR_8->level].data_offset <
          VAR_8->levels[VAR_8->level].size)
      goto end;

   VAR_11 = FUNC_7(VAR_7, VAR_8);
   if (VAR_11 != VAR_5) return VAR_11;


   VAR_18 = VAR_8->levels[VAR_8->level].size;
   VAR_15 = FUNC_4(VAR_7, "Track Number"); FUNC_0(VAR_7, "Track Number: %u", VAR_15);
   VAR_19 = (int16_t)FUNC_2(VAR_7, "Timecode");
   VAR_16 = FUNC_3(VAR_7, "Flags");
   if(VAR_8->levels[VAR_8->level].id == VAR_0) VAR_16 &= 0x0F;



   if(VAR_18 < 0) return VAR_3;
   if(FUNC_6(VAR_7)) return FUNC_6(VAR_7);

   for (VAR_14 = 0; VAR_14 < VAR_7->tracks_num; VAR_14++)
      if (VAR_7->tracks[VAR_14]->priv->module->number == VAR_15)
      { VAR_13 = VAR_7->tracks[VAR_14]->priv->module; break; }


   if(VAR_8->levels[VAR_8->level].id == VAR_0 &&
      VAR_14 < VAR_7->tracks_num && VAR_7->tracks[VAR_14]->format->es_type == VAR_4)
   {



      if(!VAR_8->seen_ref_block && VAR_8->level &&
         VAR_8->levels[VAR_8->level].offset + VAR_8->levels[VAR_8->level].size >=
            VAR_8->levels[VAR_8->level-1].offset + VAR_8->levels[VAR_8->level-1].size)
         VAR_16 |= 0x80;
   }


   VAR_8->lacing_num_frames = 0;
   if(VAR_14 < VAR_7->tracks_num && (VAR_16 & 0x06))
   {
      unsigned int VAR_20, VAR_21 = 0;
      int32_t VAR_22 = 0;

      VAR_8->lacing_num_frames = FUNC_3(VAR_7, "Lacing Head");
      VAR_8->lacing_size = 0;
      switch((VAR_16 & 0x06)>>1)
      {
      case 1:
         for(VAR_20 = 0; VAR_20 < VAR_8->lacing_num_frames; VAR_20++, VAR_22 = 0)
         {
            do {
               VAR_21 = FUNC_8(VAR_7->priv->io);
               VAR_22 += VAR_21; VAR_18--;
            } while(VAR_21 == 255);
            FUNC_0(VAR_7, "Frame Size: %i", (int)VAR_22);
            if(VAR_8->lacing_num_frames > VAR_2) continue;
            VAR_8->lacing_sizes[VAR_8->lacing_num_frames-(VAR_20+1)] = VAR_22;
         }
         break;
      case 3:
         for(VAR_20 = 0; VAR_20 < VAR_8->lacing_num_frames; VAR_20++)
         {
            if(!VAR_20) VAR_22 = FUNC_4(VAR_7, "Frame Size");
            else VAR_22 += FUNC_1(VAR_7, "Frame Size");
            FUNC_0(VAR_7, "Frame Size: %i", (int)VAR_22);
            if(VAR_8->lacing_num_frames > VAR_2) continue;
            VAR_8->lacing_sizes[VAR_8->lacing_num_frames-(VAR_20+1)] = VAR_22;
         }
         break;
      default:
         VAR_8->lacing_size = VAR_18 / (VAR_8->lacing_num_frames+1);
         break;
      }



      if(VAR_8->lacing_num_frames > VAR_2)
         VAR_8->lacing_num_frames = VAR_2;


      if(VAR_18 < 0) return VAR_3;
      if(FUNC_6(VAR_7)) return FUNC_6(VAR_7);
      VAR_8->lacing_current_size = VAR_8->lacing_size;
      if(!VAR_8->lacing_size)
      {
         int64_t VAR_23 = 0;
         for(VAR_20 = VAR_8->lacing_num_frames; VAR_20 > 0; VAR_20--)
         {
            if(VAR_23 + VAR_8->lacing_sizes[VAR_20-1] > VAR_18)
               VAR_8->lacing_sizes[VAR_20-1] = VAR_18 - VAR_23;
            VAR_23 += VAR_8->lacing_sizes[VAR_20-1];
         }
      }
      VAR_8->lacing_current_size = 0;
      VAR_8->lacing_num_frames++;
      VAR_17 = 1;
   }

   VAR_8->track = VAR_14;
   VAR_8->pts = (VAR_8->cluster_timecode + VAR_19) * VAR_12->timecode_scale;
   if(VAR_13) VAR_8->pts *= VAR_13->timecode_scale;
   VAR_8->pts /= 1000;
   VAR_8->flags = VAR_16;

   VAR_8->frame_duration = VAR_8->frame_duration * VAR_12->timecode_scale / 1000;
   if(VAR_8->lacing_num_frames) VAR_8->frame_duration /= VAR_8->lacing_num_frames;
   if(!VAR_8->frame_duration && VAR_13)
      VAR_8->frame_duration = VAR_13->frame_duration / 1000;

   VAR_8->levels[VAR_8->level].data_start = FUNC_5(VAR_7) -
      VAR_8->levels[VAR_8->level].offset;
   VAR_8->levels[VAR_8->level].data_offset = 0;


   VAR_8->header_size = 0;
   if(VAR_13 && VAR_13->encodings_num)
   {
      VAR_8->header_size = VAR_13->encodings[0].data_size;
      VAR_8->header_data = VAR_13->encodings[0].data;
   }
   VAR_8->header_size_backup = VAR_8->header_size;

 end:
   *VAR_10 = VAR_8->levels[VAR_8->level].size - VAR_8->levels[VAR_8->level].data_start -
      VAR_8->levels[VAR_8->level].data_offset + VAR_8->header_size;
   *VAR_9 = VAR_8->track;


   if(VAR_8->lacing_num_frames &&
      VAR_8->levels[VAR_8->level].data_offset >= VAR_8->lacing_current_size)
   {

      if(--VAR_8->lacing_num_frames)
      {
         unsigned int VAR_24 = VAR_8->lacing_size;
         if(!VAR_8->lacing_size) VAR_24 = VAR_8->lacing_sizes[VAR_8->lacing_num_frames-1];
         VAR_8->lacing_current_size = VAR_24;
      }
      VAR_8->levels[VAR_8->level].data_start += VAR_8->levels[VAR_8->level].data_offset;
      VAR_8->levels[VAR_8->level].data_offset = 0;
      if(!VAR_17 && VAR_8->frame_duration)
         VAR_8->pts += VAR_8->frame_duration;
      else if(!VAR_17)
         VAR_8->pts = VAR_6;


      VAR_8->header_data -= (VAR_8->header_size_backup - VAR_8->header_size);
      VAR_8->header_size = VAR_8->header_size_backup;
   }
   if(VAR_8->lacing_num_frames)
      *VAR_10 = VAR_8->lacing_current_size - VAR_8->levels[VAR_8->level].data_offset + VAR_8->header_size;

   return VAR_11 == VAR_5 ? FUNC_6(VAR_7) : VAR_11;
}
