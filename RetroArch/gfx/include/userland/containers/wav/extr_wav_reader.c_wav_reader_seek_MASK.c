
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_15__ {TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_SEEK_MODE_T ;
typedef int VC_CONTAINER_SEEK_FLAGS_T ;
struct TYPE_16__ {int data_size; int position; scalar_t__ data_offset; scalar_t__ frame_data_left; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_14__ {TYPE_4__* format; } ;
struct TYPE_13__ {int bitrate; TYPE_3__* type; } ;
struct TYPE_11__ {int block_align; } ;
struct TYPE_12__ {TYPE_2__ audio; } ;
struct TYPE_10__ {TYPE_7__* module; } ;


 int FUNC_0 (TYPE_6__*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_T *VAR_1, int64_t *VAR_2,
   VC_CONTAINER_SEEK_MODE_T VAR_3, VC_CONTAINER_SEEK_FLAGS_T VAR_4)
{
   VC_CONTAINER_MODULE_T *VAR_5 = VAR_1->priv->module;
   int64_t VAR_6;
   FUNC_1(VAR_3);
   FUNC_1(VAR_4);

   VAR_6 = *VAR_2 * VAR_1->tracks[0]->format->bitrate / 8000000;
   if(VAR_1->tracks[0]->format->type->audio.block_align)
      VAR_6 = VAR_6 / VAR_1->tracks[0]->format->type->audio.block_align *
         VAR_1->tracks[0]->format->type->audio.block_align;
   if(VAR_6 > VAR_5->data_size) VAR_6 = VAR_5->data_size;

   VAR_5->position = VAR_6;
   VAR_5->frame_data_left = 0;

   if(VAR_6 >= VAR_5->data_size) return VAR_0;
   return FUNC_0(VAR_1, VAR_5->data_offset + VAR_6);
}
