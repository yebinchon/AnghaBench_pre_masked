
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_5__ {scalar_t__ status; TYPE_2__* module; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_6__ {char* comms_buffer; } ;
typedef TYPE_2__ VC_CONTAINER_IO_MODULE_T ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (TYPE_1__*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(VC_CONTAINER_IO_T *VAR_1)
{
   VC_CONTAINER_IO_MODULE_T *VAR_2 = VAR_1->module;
   size_t VAR_3;
   size_t VAR_4;
   const char *VAR_5 = VAR_2->comms_buffer;

   VAR_3 = FUNC_1(VAR_5);

   while (VAR_3)
   {
      VAR_4 = FUNC_0(VAR_1, VAR_5, VAR_3);
      if (VAR_1->status != VAR_0)
         break;

      VAR_3 -= VAR_4;
      VAR_5 += VAR_4;
   }

   return VAR_1->status;
}
