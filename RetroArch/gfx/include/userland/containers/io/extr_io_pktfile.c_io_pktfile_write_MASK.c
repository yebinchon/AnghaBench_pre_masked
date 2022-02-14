
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int size_word ;
struct TYPE_5__ {void* status; TYPE_1__* module; } ;
typedef TYPE_2__ VC_CONTAINER_IO_T ;
struct TYPE_4__ {int stream; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (void const*,int,size_t,int ) ;

__attribute__((used)) static size_t FUNC_2(VC_CONTAINER_IO_T *VAR_1, const void *VAR_2, size_t VAR_3)
{
   uint32_t VAR_4;
   size_t VAR_5;

   if (VAR_3 >= 0xFFFFFFFFUL)
      VAR_4 = 0xFFFFFFFFUL;
   else
      VAR_4 = (uint32_t)VAR_3;

   VAR_5 = FUNC_1(&VAR_4, 1, sizeof(VAR_4), VAR_1->module->stream);
   if (VAR_5 != sizeof(VAR_4))
   {
      VAR_1->status = VAR_0;
      return 0;
   }

   VAR_5 = FUNC_1(VAR_2, 1, VAR_4, VAR_1->module->stream);
   if (VAR_5 != VAR_4)
      VAR_1->status = VAR_0;
   if (FUNC_0(VAR_1->module->stream) != 0)
      VAR_1->status = VAR_0;

   return VAR_5;
}
