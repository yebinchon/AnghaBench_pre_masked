
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vc_container_net_status_t ;
struct TYPE_5__ {TYPE_1__* module; int status; } ;
typedef TYPE_2__ VC_CONTAINER_IO_T ;
struct TYPE_4__ {int write_capture_file; int sock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int ,void const*,size_t) ;

__attribute__((used)) static size_t FUNC_4(VC_CONTAINER_IO_T *VAR_1, const void *VAR_2, size_t VAR_3)
{
   size_t VAR_4 = FUNC_3(VAR_1->module->sock, VAR_2, VAR_3);
   vc_container_net_status_t VAR_5;

   VAR_5 = FUNC_2(VAR_1->module->sock);
   VAR_1->status = FUNC_1(VAR_5);






   return VAR_4;
}
