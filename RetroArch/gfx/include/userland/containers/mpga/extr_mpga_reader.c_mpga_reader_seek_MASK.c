
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int int64_t ;
struct TYPE_12__ {int duration; TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef scalar_t__ VC_CONTAINER_SEEK_MODE_T ;
typedef int VC_CONTAINER_SEEK_FLAGS_T ;
struct TYPE_13__ {int sample_rate; int num_frames; int frame_size_samples; int* xing_toc; void* data_offset; int data_size; int frame_index; int frame_time_pos; void* frame_offset; scalar_t__ xing_toc_valid; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_11__ {TYPE_3__* module; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*,void*) ;
 void* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_9( VC_CONTAINER_T *VAR_4,
                                               int64_t *VAR_5,
                                               VC_CONTAINER_SEEK_MODE_T VAR_6,
                                               VC_CONTAINER_SEEK_FLAGS_T VAR_7)
{
   VC_CONTAINER_MODULE_T *VAR_8 = VAR_4->priv->module;
   VC_CONTAINER_STATUS_T VAR_9 = VAR_3;
   uint64_t VAR_10, VAR_11 = FUNC_3(VAR_4);
   FUNC_6(VAR_7);

   if (VAR_6 != VAR_2 || !FUNC_4(VAR_4))
      return VAR_1;

   if (*VAR_5 != FUNC_0(0))
   {
      if (!VAR_4->duration)
         return VAR_1;

      if (VAR_8->xing_toc_valid)
      {
         int64_t VAR_12;
         int VAR_13, VAR_14, VAR_15, VAR_16;

         VAR_12 = (*VAR_5 * VAR_8->sample_rate) / (VAR_8->num_frames * VAR_8->frame_size_samples);
         VAR_12 = FUNC_1(VAR_12, FUNC_0(999999));

         VAR_13 = VAR_12 / 10000;
         VAR_16 = VAR_12 % 10000;

         VAR_14 = VAR_8->xing_toc[VAR_13];
         VAR_15 = VAR_13 < 99 ? VAR_8->xing_toc[VAR_13 + 1] : 256;

         VAR_10 = VAR_8->data_offset +
            (((VAR_8->data_size * VAR_14) + (VAR_8->data_size * (VAR_15 - VAR_14) * VAR_16) / 10000) >> 8);
      }
      else
      {

         VAR_10 = VAR_8->data_offset + (*VAR_5 * VAR_8->data_size) / VAR_4->duration;
      }
   }
   else
   {
      VAR_10 = VAR_8->data_offset;
   }

   FUNC_2(VAR_4, VAR_10);
   VAR_9 = FUNC_8(VAR_4);
   if (VAR_9 && VAR_9 != VAR_0)
      goto error;

   VAR_8->frame_index = (*VAR_5 * VAR_8->num_frames + (VAR_4->duration >> 1)) / VAR_4->duration;
   VAR_8->frame_offset = FUNC_3(VAR_4) - VAR_8->data_offset;

   *VAR_5 = VAR_8->frame_time_pos = FUNC_7(VAR_4);

   return FUNC_5(VAR_4);

error:
   FUNC_2(VAR_4, VAR_11);
   return VAR_9;
}
