
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef void* VC_CONTAINER_STATUS_T ;
struct TYPE_4__ {scalar_t__ size; void* status; TYPE_2__* module; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_5__ {scalar_t__ cur_offset; } ;
typedef TYPE_2__ VC_CONTAINER_IO_MODULE_T ;


 void* VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_0(VC_CONTAINER_IO_T *VAR_2, int64_t VAR_3)
{
   VC_CONTAINER_IO_MODULE_T *VAR_4 = VAR_2->module;





   if (VAR_3 < 0 || VAR_3 > VAR_2->size)
   {
      VAR_2->status = VAR_0;
      return VAR_0;
   }

   VAR_4->cur_offset = VAR_3;
   VAR_2->status = VAR_1;

   return VAR_1;
}
