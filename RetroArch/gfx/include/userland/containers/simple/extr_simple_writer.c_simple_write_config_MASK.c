
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* format; TYPE_2__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_T ;
struct TYPE_15__ {TYPE_4__** tracks; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_16__ {unsigned int track; int flags; int pts; int data; scalar_t__ size; } ;
typedef TYPE_6__ VC_CONTAINER_PACKET_T ;
struct TYPE_13__ {int extradata; scalar_t__ extradata_size; } ;
struct TYPE_12__ {TYPE_1__* module; } ;
struct TYPE_11__ {int config_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,TYPE_6__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_T *VAR_3,
   unsigned int VAR_4, VC_CONTAINER_PACKET_T *VAR_5)
{
   VC_CONTAINER_TRACK_T *VAR_6 = VAR_3->tracks[VAR_4];
   VC_CONTAINER_STATUS_T VAR_7 = VAR_1;
   VC_CONTAINER_PACKET_T VAR_8;

   VAR_6->priv->module->config_done = 1;

   if (VAR_6->format->extradata_size)
   {
      VAR_8.size = VAR_6->format->extradata_size;
      VAR_8.data = VAR_6->format->extradata;
      VAR_8.track = VAR_4;
      VAR_8.pts = VAR_5 ? VAR_5->pts : VAR_2;
      VAR_8.flags = 0;
      VAR_8.flags |= VAR_0;

      VAR_7 = FUNC_0(VAR_3, &VAR_8);
   }

   return VAR_7;
}
