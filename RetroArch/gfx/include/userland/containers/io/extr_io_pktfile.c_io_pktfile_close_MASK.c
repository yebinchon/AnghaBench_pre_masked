
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_5__ {TYPE_2__* module; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_6__ {int stream; } ;
typedef TYPE_2__ VC_CONTAINER_IO_MODULE_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_IO_T *VAR_1 )
{
   VC_CONTAINER_IO_MODULE_T *VAR_2 = VAR_1->module;
   FUNC_0(VAR_2->stream);
   FUNC_1(VAR_2);
   return VAR_0;
}
