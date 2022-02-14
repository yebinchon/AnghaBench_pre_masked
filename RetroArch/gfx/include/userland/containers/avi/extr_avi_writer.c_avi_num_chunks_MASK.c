
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {unsigned int tracks_num; TYPE_3__** tracks; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {TYPE_1__* module; } ;
struct TYPE_6__ {scalar_t__ chunk_index; } ;



__attribute__((used)) static uint32_t FUNC_0( VC_CONTAINER_T *VAR_0 )
{
   unsigned int VAR_1;
   uint32_t VAR_2 = 0;
   for (VAR_1 = 0; VAR_1 < VAR_0->tracks_num; VAR_1++)
      VAR_2 += VAR_0->tracks[VAR_1]->priv->module->chunk_index;

   return VAR_2;
}
