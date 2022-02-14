
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vc_container_net_status_t ;
struct TYPE_5__ {int status; TYPE_1__* module; } ;
typedef TYPE_2__ VC_CONTAINER_IO_T ;
struct TYPE_4__ {int sock; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ,void*,size_t) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static size_t FUNC_3(VC_CONTAINER_IO_T *VAR_0, void *VAR_1, size_t VAR_2)
{
   size_t VAR_3;
   vc_container_net_status_t VAR_4;

   VAR_3 = FUNC_1(VAR_0->module->sock, VAR_1, VAR_2);
   VAR_4 = FUNC_2(VAR_0->module->sock);
   VAR_0->status = FUNC_0(VAR_4);

   return VAR_3;
}
