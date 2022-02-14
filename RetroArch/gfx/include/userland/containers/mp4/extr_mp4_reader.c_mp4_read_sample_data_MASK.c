
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_4__ {unsigned int sample_size; unsigned int sample_offset; scalar_t__ status; unsigned int offset; } ;
typedef TYPE_1__ MP4_READER_STATE_T ;


 unsigned int FUNC_0 (int *,int *,unsigned int) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_1, uint32_t VAR_2,
   MP4_READER_STATE_T *VAR_3, uint8_t *VAR_4, unsigned int *VAR_5 )
{
   VC_CONTAINER_STATUS_T VAR_6;
   unsigned int VAR_7 = VAR_3->sample_size - VAR_3->sample_offset;

   if(VAR_3->status != VAR_0) return VAR_3->status;

   if(VAR_5 && *VAR_5 < VAR_7) VAR_7 = *VAR_5;

   if(VAR_4)
   {
      VAR_3->status = FUNC_1(VAR_1, VAR_3->offset + VAR_3->sample_offset);
      if(VAR_3->status != VAR_0) return VAR_3->status;

      VAR_7 = FUNC_0(VAR_1, VAR_4, VAR_7);
   }
   VAR_3->sample_offset += VAR_7;

   if(VAR_5) *VAR_5 = VAR_7;
   VAR_3->status = FUNC_2(VAR_1);
   if(VAR_3->status != VAR_0) return VAR_3->status;

   VAR_6 = VAR_3->status;


   if(VAR_3->sample_offset >= VAR_3->sample_size)
      FUNC_3(VAR_1, VAR_2, VAR_3);

   return VAR_6;
}
