
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_MODULE_T ;
struct TYPE_6__ {int * module; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_2, int64_t VAR_3 )
{
   VC_CONTAINER_MODULE_T *VAR_4 = VAR_2->priv->module;
   FUNC_1(VAR_4);

             if(1) return VAR_1;

   if(VAR_3 > 0)
      return FUNC_2( VAR_2, VAR_3, VAR_0 );

   return FUNC_0(VAR_2);
}
