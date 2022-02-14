
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {TYPE_1__* sample_table; void* sample_size; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_MODULE_T ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_12__ {scalar_t__ status; int chunks; TYPE_2__* sample_table; void* next_sync_sample; void* samples_per_chunk; void* samples_in_chunk; void* offset; void* sample_composition_count; void* sample_composition_offset; void* sample_duration_count; void* sample_duration; void* sample_size; } ;
struct TYPE_10__ {scalar_t__ entry; } ;
struct TYPE_9__ {scalar_t__ entries; } ;
typedef int MP4_SAMPLE_TABLE_T ;
typedef TYPE_4__ MP4_READER_STATE_T ;
 void* FUNC_0 (int *) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*,TYPE_4__*,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5( VC_CONTAINER_T *VAR_2,
   VC_CONTAINER_TRACK_MODULE_T *VAR_3, MP4_READER_STATE_T *VAR_4,
   MP4_SAMPLE_TABLE_T VAR_5, unsigned int VAR_6)
{
   uint32_t VAR_7;

   if(VAR_5 == 129 && VAR_3->sample_size)
   {
      VAR_4->sample_size = VAR_3->sample_size;
      return VAR_4->status;
   }


   if(VAR_5 == 132 &&
      VAR_3->sample_table[134].entries)
      VAR_5 = 134;


   if(VAR_6)
   {
      VAR_4->status = FUNC_4( VAR_2, VAR_3, VAR_4, VAR_5 );
      if(VAR_4->status != VAR_1) return VAR_4->status;
   }

   switch(VAR_5)
   {
   case 129:
      VAR_4->sample_size = FUNC_1(VAR_2);
      VAR_4->status = FUNC_0(VAR_2);
      break;

   case 128:
      VAR_4->sample_duration_count = FUNC_1(VAR_2);
      VAR_4->sample_duration = FUNC_1(VAR_2);
      VAR_4->status = FUNC_0(VAR_2);
      if(VAR_4->status != VAR_1) break;
      if(!VAR_4->sample_duration_count) VAR_4->status = VAR_0;
      break;

   case 133:
      VAR_4->sample_composition_count = FUNC_1(VAR_2);
      VAR_4->sample_composition_offset = FUNC_1(VAR_2);
      VAR_4->status = FUNC_0(VAR_2);
      if(VAR_4->status != VAR_1) break;
      if(!VAR_4->sample_composition_count) VAR_4->status = VAR_0;
      break;

   case 131:
      VAR_4->chunks = FUNC_1(VAR_2);
      VAR_4->samples_per_chunk = FUNC_1(VAR_2);
      FUNC_3(VAR_2);
      VAR_4->status = FUNC_0(VAR_2);
      if(VAR_4->status != VAR_1) break;

      if(VAR_4->sample_table[VAR_5].entry + 1 <
         VAR_3->sample_table[131].entries) VAR_7 = FUNC_1(VAR_2);
      else VAR_7 = -1;

      if(!VAR_4->chunks || !VAR_4->samples_per_chunk || VAR_4->chunks >= VAR_7 )
      {VAR_4->status = VAR_0; break;}
      VAR_4->chunks = VAR_7 - VAR_4->chunks;
      VAR_4->samples_in_chunk = VAR_4->samples_per_chunk;
      break;

   case 132:
   case 134:
      VAR_4->offset = VAR_5 == 132 ? FUNC_1(VAR_2) : FUNC_2(VAR_2);
      VAR_4->status = FUNC_0(VAR_2);
      if(VAR_4->status != VAR_1) break;
      if(!VAR_4->offset) VAR_4->status = VAR_0;
      VAR_4->samples_in_chunk = VAR_4->samples_per_chunk;
      break;

   case 130:
      VAR_4->next_sync_sample = FUNC_1(VAR_2);
      VAR_4->status = FUNC_0(VAR_2);
      break;

   default: break;
   }

   VAR_4->sample_table[VAR_5].entry++;
   return VAR_4->status;
}
