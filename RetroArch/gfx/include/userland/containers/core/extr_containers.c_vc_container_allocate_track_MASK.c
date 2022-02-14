
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct VC_CONTAINER_TRACK_MODULE_T {int dummy; } ;
struct TYPE_7__ {TYPE_3__* format; TYPE_2__* priv; } ;
typedef TYPE_1__ VC_CONTAINER_TRACK_T ;
struct TYPE_8__ {struct VC_CONTAINER_TRACK_MODULE_T* module; } ;
typedef TYPE_2__ VC_CONTAINER_TRACK_PRIVATE_T ;
typedef int VC_CONTAINER_T ;
struct TYPE_9__ {void* type; } ;
typedef TYPE_3__ VC_CONTAINER_ES_FORMAT_T ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_1__*,int ,unsigned int) ;

VC_CONTAINER_TRACK_T *FUNC_3( VC_CONTAINER_T *VAR_0, unsigned int VAR_1 )
{
   VC_CONTAINER_TRACK_T *VAR_2;
   unsigned int VAR_3;
   FUNC_0(VAR_0);

   VAR_3 = sizeof(*VAR_2) + sizeof(*VAR_2->priv) + sizeof(*VAR_2->format) +
      sizeof(*VAR_2->format->type) + VAR_1;

   VAR_2 = FUNC_1(VAR_3);
   if(!VAR_2) return 0;

   FUNC_2(VAR_2, 0, VAR_3);
   VAR_2->priv = (VC_CONTAINER_TRACK_PRIVATE_T *)(VAR_2 + 1);
   VAR_2->format = (VC_CONTAINER_ES_FORMAT_T *)(VAR_2->priv + 1);
   VAR_2->format->type = (void *)(VAR_2->format + 1);
   VAR_2->priv->module = (struct VC_CONTAINER_TRACK_MODULE_T *)(VAR_2->format->type + 1);
   return VAR_2;
}
