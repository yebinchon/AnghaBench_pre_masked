
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* int64_t ;
struct TYPE_10__ {TYPE_3__* state; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_11__ {TYPE_2__** tracks; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
struct TYPE_9__ {int tag_prev_size; int data_size; int flags; int track; int timestamp; scalar_t__ data_offset; void* data_position; void* tag_position; } ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {TYPE_4__* module; } ;



__attribute__((used)) static void FUNC_0(VC_CONTAINER_T *VAR_0, int VAR_1,
   int64_t VAR_2, int VAR_3, int64_t VAR_4,
   int VAR_5, uint32_t VAR_6, int VAR_7)
{
   VC_CONTAINER_TRACK_MODULE_T *VAR_8 = VAR_0->tracks[VAR_1]->priv->module;
   VAR_8->state->tag_position = VAR_2;
   VAR_8->state->tag_prev_size = VAR_3;
   VAR_8->state->data_position = VAR_4;
   VAR_8->state->data_size = VAR_5;
   VAR_8->state->data_offset = 0;
   VAR_8->state->timestamp = VAR_6;
   VAR_8->state->flags = VAR_7;
   VAR_8->state->track = VAR_1;
}
