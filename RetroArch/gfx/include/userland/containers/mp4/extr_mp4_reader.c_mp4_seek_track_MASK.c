
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_20__ {TYPE_4__* sample_table; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_21__ {TYPE_2__** tracks; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef void* VC_CONTAINER_STATUS_T ;
struct TYPE_22__ {size_t chunks; size_t samples_per_chunk; size_t sample_duration_count; int duration; int sample_duration; size_t sample_composition_count; size_t next_sync_sample; size_t sample; void* status; scalar_t__ sample_size; int samples_in_chunk; int offset; TYPE_3__* sample_table; } ;
struct TYPE_19__ {unsigned int entries; } ;
struct TYPE_18__ {size_t entry; } ;
struct TYPE_17__ {TYPE_1__* priv; } ;
struct TYPE_16__ {TYPE_5__* module; } ;
typedef TYPE_7__ MP4_READER_STATE_T ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (TYPE_7__*,int ,int) ;
 int FUNC_1 (TYPE_6__*,size_t,TYPE_7__*) ;
 void* FUNC_2 (TYPE_6__*,TYPE_5__*,TYPE_7__*,size_t,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_8, uint32_t VAR_9,
   MP4_READER_STATE_T *VAR_10, uint32_t VAR_11 )
{
   VC_CONTAINER_TRACK_MODULE_T *VAR_12 = VAR_8->tracks[VAR_9]->priv->module;
   uint32_t VAR_13 = 0, VAR_14;
   unsigned int VAR_15;

   FUNC_0(VAR_10, 0, sizeof(*VAR_10));


   for(VAR_15 = 0, VAR_14 = VAR_11; VAR_15 < VAR_12->sample_table[VAR_3].entries; VAR_15++)
   {
      VAR_10->status = FUNC_2( VAR_8, VAR_12, VAR_10, VAR_3, 1 );
      if(VAR_10->status != VAR_7) goto error;

      if(VAR_10->chunks * VAR_10->samples_per_chunk <= VAR_14)
      {
         VAR_14 -= VAR_10->chunks * VAR_10->samples_per_chunk;
         VAR_13 += VAR_10->chunks;
         continue;
      }

      while(VAR_14 >= VAR_10->samples_per_chunk)
      {
         VAR_14 -= VAR_10->samples_per_chunk;
         VAR_10->chunks--;
         VAR_13++;
      }

      VAR_10->chunks--;
      break;
   }


   VAR_10->sample_table[VAR_2].entry = VAR_13;
   VAR_10->sample_table[VAR_0].entry = VAR_13;
   VAR_10->status = FUNC_2( VAR_8, VAR_12, VAR_10, VAR_2, 1 );
   if(VAR_10->status != VAR_7) goto error;


   VAR_10->sample_table[VAR_5].entry = VAR_11 - VAR_14;
   for(VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
   {
      VAR_10->status = FUNC_2( VAR_8, VAR_12, VAR_10, VAR_5, !VAR_15 );
      if(VAR_10->status != VAR_7) goto error;
      VAR_10->offset += VAR_10->sample_size;
      VAR_10->samples_in_chunk--;
   }


   for(VAR_15 = 0, VAR_14 = VAR_11; VAR_15 < VAR_12->sample_table[VAR_6].entries; VAR_15++)
   {
      VAR_10->status = FUNC_2( VAR_8, VAR_12, VAR_10, VAR_6, !VAR_15 );
      if(VAR_10->status != VAR_7) goto error;

      if(VAR_10->sample_duration_count <= VAR_14)
      {
         VAR_14 -= VAR_10->sample_duration_count;
         VAR_10->duration += VAR_10->sample_duration * VAR_10->sample_duration_count;
         continue;
      }

      VAR_10->sample_duration_count -= VAR_14;
      VAR_10->duration += VAR_14 * VAR_10->sample_duration;
      break;
   }


   for(VAR_15 = 0, VAR_14 = VAR_11; VAR_15 < VAR_12->sample_table[VAR_1].entries; VAR_15++)
   {
      VAR_10->status = FUNC_2( VAR_8, VAR_12, VAR_10, VAR_1, !VAR_15 );
      if(VAR_10->status != VAR_7) goto error;

      if(VAR_10->sample_composition_count <= VAR_14)
      {
         VAR_14 -= VAR_10->sample_composition_count;
         continue;
      }

      VAR_10->sample_composition_count -= VAR_14;
      break;
   }


   for(VAR_15 = 0; VAR_15 < VAR_12->sample_table[VAR_4].entries; VAR_15++)
   {
      VAR_10->status = FUNC_2( VAR_8, VAR_12, VAR_10, VAR_4, !VAR_15 );
      if(VAR_10->status != VAR_7) goto error;

      if(VAR_10->next_sync_sample >= VAR_11 + 1) break;
   }

   VAR_10->sample = VAR_11;
   VAR_10->sample_size = 0;
   FUNC_1(VAR_8, VAR_9, VAR_10);

 error:
   return VAR_10->status;
}
