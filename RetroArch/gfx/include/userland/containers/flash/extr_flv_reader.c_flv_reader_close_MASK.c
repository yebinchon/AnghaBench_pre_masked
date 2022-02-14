
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {unsigned int tracks_num; int * tracks; TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_9__ {scalar_t__ index; } ;
struct TYPE_11__ {TYPE_2__ state; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_8__ {TYPE_4__* module; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_1->priv->module;
   unsigned int VAR_3;

   for(VAR_3 = 0; VAR_3 < VAR_1->tracks_num; VAR_3++)
      FUNC_1(VAR_1, VAR_1->tracks[VAR_3]);

   if(VAR_2->state.index)
      FUNC_2(VAR_2->state.index);

   FUNC_0(VAR_2);
   return VAR_0;
}
