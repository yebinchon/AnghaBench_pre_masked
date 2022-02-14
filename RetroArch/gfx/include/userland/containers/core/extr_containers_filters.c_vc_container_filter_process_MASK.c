
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_PACKET_T ;
struct TYPE_4__ {int (* pf_process ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ VC_CONTAINER_FILTER_T ;


 int FUNC_0 (TYPE_1__*,int *) ;

VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_FILTER_T *VAR_0, VC_CONTAINER_PACKET_T *VAR_1 )
{
   VC_CONTAINER_STATUS_T VAR_2;
   VAR_2 = VAR_0->pf_process(VAR_0, VAR_1);
   return VAR_2;
}
