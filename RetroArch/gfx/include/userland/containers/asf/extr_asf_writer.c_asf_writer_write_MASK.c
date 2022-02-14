
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_PACKET_T ;
struct TYPE_8__ {int b_header_done; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_6__ {TYPE_3__* module; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_T *VAR_1,
                                               VC_CONTAINER_PACKET_T *VAR_2 )
{
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_1->priv->module;
   VC_CONTAINER_STATUS_T VAR_4 = VAR_0;
   FUNC_0(VAR_2);

   if(!VAR_3->b_header_done)
   {
      VAR_3->b_header_done = 1;
      VAR_4 = FUNC_1(VAR_1);
   }

   return VAR_4;
}
