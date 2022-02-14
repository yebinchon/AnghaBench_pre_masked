
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_9__ {TYPE_2__* sample_table; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_MODULE_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_10__ {TYPE_1__* sample_table; } ;
struct TYPE_8__ {int entries; int entry_size; scalar_t__ offset; } ;
struct TYPE_7__ {int entry; } ;
typedef size_t MP4_SAMPLE_TABLE_T ;
typedef TYPE_4__ MP4_READER_STATE_T ;


 int FUNC_0 (int *,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_T *VAR_1,
   VC_CONTAINER_TRACK_MODULE_T *VAR_2, MP4_READER_STATE_T *VAR_3,
   MP4_SAMPLE_TABLE_T VAR_4)
{
   int64_t VAR_5;


   if(VAR_3->sample_table[VAR_4].entry >= VAR_2->sample_table[VAR_4].entries)
      return VAR_0;

   VAR_5 = VAR_2->sample_table[VAR_4].offset +
      VAR_2->sample_table[VAR_4].entry_size * VAR_3->sample_table[VAR_4].entry;

   return FUNC_0(VAR_1, VAR_5);
}
