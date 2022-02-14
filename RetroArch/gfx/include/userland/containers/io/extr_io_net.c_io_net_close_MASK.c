
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_5__ {TYPE_2__* module; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_6__ {scalar_t__ write_capture_file; scalar_t__ read_capture_file; scalar_t__ sock; } ;
typedef TYPE_2__ VC_CONTAINER_IO_MODULE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_IO_T *VAR_2 )
{
   VC_CONTAINER_IO_MODULE_T *VAR_3 = VAR_2->module;

   if (!VAR_3)
      return VAR_0;

   if (VAR_3->sock)
      FUNC_2(VAR_3->sock);






   FUNC_1(VAR_3);
   VAR_2->module = ((void*)0);

   return VAR_1;
}
