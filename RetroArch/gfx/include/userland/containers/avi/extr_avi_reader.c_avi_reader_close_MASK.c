
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int tracks_num; TYPE_1__* priv; int * tracks; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_MODULE_T ;
struct TYPE_5__ {int * module; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_T *VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_1->priv->module;
   unsigned int VAR_3;

   for(VAR_3 = 0; VAR_3 < VAR_1->tracks_num; VAR_3++)
      FUNC_1(VAR_1, VAR_1->tracks[VAR_3]);
   VAR_1->tracks = ((void*)0);
   VAR_1->tracks_num = 0;
   FUNC_0(VAR_2);
   VAR_1->priv->module = 0;
   return VAR_0;
}
