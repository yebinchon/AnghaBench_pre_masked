
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_19__ {int timescale; size_t samples_batch_size; TYPE_4__* sample_table; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_20__ {TYPE_2__** tracks; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_21__ {scalar_t__ status; scalar_t__ sample_offset; scalar_t__ sample_size; scalar_t__ sample; int pts; int dts; int duration; int sample_composition_offset; scalar_t__ next_sync_sample; int keyframe; scalar_t__ samples_in_chunk; scalar_t__ sample_duration; int sample_duration_count; TYPE_3__* sample_table; int sample_composition_count; int chunks; int offset; } ;
struct TYPE_18__ {scalar_t__ entries; } ;
struct TYPE_17__ {scalar_t__ entry; } ;
struct TYPE_16__ {TYPE_1__* priv; } ;
struct TYPE_15__ {TYPE_5__* module; } ;
typedef TYPE_7__ MP4_READER_STATE_T ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_6__*,TYPE_7__*) ;
 void* FUNC_1 (TYPE_6__*,TYPE_5__*,TYPE_7__*,size_t,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_T *VAR_7, uint32_t VAR_8,
   MP4_READER_STATE_T *VAR_9 )
{
   VC_CONTAINER_TRACK_MODULE_T *VAR_10 = VAR_7->tracks[VAR_8]->priv->module;

   if(VAR_9->status != VAR_6) return VAR_9->status;

   if(VAR_9->sample_offset < VAR_9->sample_size)
      return VAR_9->status;


   VAR_9->offset += VAR_9->sample_size;
   VAR_9->sample_offset = 0;
   VAR_9->sample_size = 0;
   VAR_9->sample++;

   if(!VAR_9->samples_in_chunk)
   {

      if(!VAR_9->chunks)
      {

         VAR_9->status = FUNC_1( VAR_7, VAR_10, VAR_9, VAR_2, 1 );
         if(VAR_9->status != VAR_6) goto error;
      }


      VAR_9->status = FUNC_1( VAR_7, VAR_10, VAR_9, VAR_1, 1 );
      if(VAR_9->status != VAR_6) goto error;

      VAR_9->chunks--;
   }
   VAR_9->samples_in_chunk--;


   VAR_9->status = FUNC_1( VAR_7, VAR_10, VAR_9, VAR_4, 1 );
   if(VAR_9->status != VAR_6) goto error;


   if(VAR_10->timescale)
      VAR_9->pts = VAR_9->dts = VAR_9->duration * 1000000 / VAR_10->timescale;
   if(!VAR_9->sample_duration_count)
   {
      VAR_9->status = FUNC_1( VAR_7, VAR_10, VAR_9, VAR_5, 1 );
      if(VAR_9->status != VAR_6) goto error;
   }
   VAR_9->sample_duration_count--;


   if(VAR_10->sample_table[VAR_0].entries)
   {
      if(!VAR_9->sample_composition_count)
      {
         VAR_9->status = FUNC_1( VAR_7, VAR_10, VAR_9, VAR_0, 1 );
         if(VAR_9->status != VAR_6) goto error;
      }
      if(VAR_10->timescale)
         VAR_9->pts = (VAR_9->duration + VAR_9->sample_composition_offset) * 1000000 / VAR_10->timescale;
      VAR_9->sample_composition_count--;
   }
   VAR_9->duration += VAR_9->sample_duration;


   if(VAR_9->sample_table[VAR_3].entry <
         VAR_10->sample_table[VAR_3].entries &&
      !VAR_9->next_sync_sample)
   {
      FUNC_1( VAR_7, VAR_10, VAR_9, VAR_3, 1 );
      VAR_9->status = VAR_6;
   }

   VAR_9->keyframe =
      VAR_10->sample_table[VAR_3].entries &&
      VAR_9->sample == VAR_9->next_sync_sample;
   if(VAR_9->keyframe)
      VAR_9->next_sync_sample = 0;


   if(VAR_10->samples_batch_size)
   {
      uint32_t VAR_11 = VAR_9->sample_size;
      while(VAR_9->samples_in_chunk && VAR_11 < VAR_10->samples_batch_size)
      {
         if(FUNC_1( VAR_7, VAR_10, VAR_9, VAR_4, 1 )) break;

         if(!VAR_9->sample_duration_count)
            if(FUNC_1( VAR_7, VAR_10, VAR_9, VAR_5, 1 )) break;

         VAR_9->sample_duration_count--;
         VAR_9->duration += VAR_9->sample_duration;

         VAR_11 += VAR_9->sample_size;
         VAR_9->samples_in_chunk--;
         VAR_9->sample++;
      }
      VAR_9->sample_size = VAR_11;
   }





 error:
   return VAR_9->status;
}
