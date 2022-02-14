
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_8__ {TYPE_1__* priv; int (* pf_close ) (TYPE_2__*) ;} ;
typedef TYPE_2__ VC_CONTAINER_FILTER_T ;
struct TYPE_7__ {scalar_t__ handle; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_FILTER_T *VAR_1 )
{
   if (VAR_1)
   {
      if(VAR_1->pf_close) VAR_1->pf_close(VAR_1);
      if(VAR_1->priv && VAR_1->priv->handle) FUNC_2(VAR_1);
      FUNC_0(VAR_1);
   }
   return VAR_0;
}
