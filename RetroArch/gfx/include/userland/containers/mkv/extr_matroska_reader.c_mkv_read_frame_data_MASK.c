
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_6__ {size_t level; scalar_t__ lacing_current_size; scalar_t__ header_size; TYPE_1__* levels; int header_data; scalar_t__ lacing_num_frames; } ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ data_start; scalar_t__ data_offset; } ;
typedef TYPE_2__ MKV_READER_STATE_T ;


 scalar_t__ FUNC_0 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int *,TYPE_2__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5(VC_CONTAINER_T *VAR_0,
      MKV_READER_STATE_T *VAR_1, uint8_t *VAR_2, uint32_t *VAR_3)
{
   uint64_t VAR_4;
   uint32_t VAR_5;

   VAR_4 = VAR_1->levels[VAR_1->level].size - VAR_1->levels[VAR_1->level].data_start -
      VAR_1->levels[VAR_1->level].data_offset;


   if(VAR_1->lacing_num_frames)
   {
      VAR_4 = VAR_1->lacing_current_size - VAR_1->levels[VAR_1->level].data_offset;

      if(!VAR_2)
      {
         VAR_4 = FUNC_1(VAR_0, VAR_4);
         VAR_1->levels[VAR_1->level].data_offset += VAR_4;
         return FUNC_2(VAR_0);
      }
   }

   VAR_4 += VAR_1->header_size;

   if(!VAR_2) return FUNC_4(VAR_0, VAR_1);
   if(VAR_4 > *VAR_3) VAR_4 = *VAR_3;

   VAR_5 = VAR_1->header_size;
   if(VAR_5)
   {
      if(VAR_5 > VAR_4) VAR_5 = VAR_4;
      FUNC_3(VAR_2, VAR_1->header_data, VAR_5);
      VAR_1->header_size -= VAR_5;
      VAR_1->header_data += VAR_5;
      VAR_4 -= VAR_5;
   }

   VAR_4 = FUNC_0(VAR_0, VAR_2 + VAR_5, VAR_4);
   VAR_1->levels[VAR_1->level].data_offset += VAR_4;
   *VAR_3 = VAR_4 + VAR_5;

   return FUNC_2(VAR_0);
}
