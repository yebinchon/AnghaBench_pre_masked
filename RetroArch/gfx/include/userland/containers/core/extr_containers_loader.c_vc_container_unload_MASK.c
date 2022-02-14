
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
struct TYPE_4__ {int * module_handle; } ;


 int FUNC_0 (int *) ;

void FUNC_1(VC_CONTAINER_T *VAR_0)
{
   if (VAR_0->priv->module_handle)
   {
      FUNC_0(VAR_0->priv->module_handle);
      VAR_0->priv->module_handle = ((void*)0);
   }
}
