
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
struct TYPE_16__ {int frames; int block_size; int frame_header_size; int status; scalar_t__ data_offset; scalar_t__ frame_header; scalar_t__ block_offset; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_14__ {TYPE_4__* format; } ;
struct TYPE_13__ {TYPE_3__* type; } ;
struct TYPE_11__ {int frame_rate_num; int frame_rate_den; } ;
struct TYPE_12__ {TYPE_2__ video; } ;
struct TYPE_10__ {TYPE_7__* module; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_1, int64_t *VAR_2,
   VC_CONTAINER_SEEK_MODE_T VAR_3, VC_CONTAINER_SEEK_FLAGS_T VAR_4)
{
   VC_CONTAINER_MODULE_T *VAR_5 = VAR_1->priv->module;
   FUNC_2(VAR_3);

   VAR_5->frames = *VAR_2 *
      VAR_1->tracks[0]->format->type->video.frame_rate_num /
      VAR_1->tracks[0]->format->type->video.frame_rate_den / FUNC_0(1000000);
   VAR_5->block_offset = 0;

   if ((VAR_4 & VAR_0) &&
      VAR_5->frames * FUNC_0(1000000) *
         VAR_1->tracks[0]->format->type->video.frame_rate_den /
         VAR_1->tracks[0]->format->type->video.frame_rate_num < *VAR_2)
      VAR_5->frames++;

   VAR_5->frame_header = 0;

   VAR_5->status =
      FUNC_1(VAR_1, VAR_5->data_offset + VAR_5->frames *
         (VAR_5->block_size + VAR_5->frame_header_size));

   return VAR_5->status;
}
