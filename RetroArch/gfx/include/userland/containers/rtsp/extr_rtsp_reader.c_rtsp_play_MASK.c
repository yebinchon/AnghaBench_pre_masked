
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_8__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_9__ {int header_list; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_7__ {TYPE_3__* module; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_1,
      VC_CONTAINER_TRACK_MODULE_T *VAR_2 )
{
   VC_CONTAINER_STATUS_T VAR_3 = VAR_0;
   VC_CONTAINER_MODULE_T *VAR_4 = VAR_1->priv->module;

   VAR_3 = FUNC_1(VAR_1, VAR_2);
   if (VAR_3 != VAR_0) return VAR_3;
   VAR_3 = FUNC_0(VAR_1);
   if (VAR_3 != VAR_0) return VAR_3;

   FUNC_2(VAR_4->header_list, VAR_2);

   return VAR_3;
}
