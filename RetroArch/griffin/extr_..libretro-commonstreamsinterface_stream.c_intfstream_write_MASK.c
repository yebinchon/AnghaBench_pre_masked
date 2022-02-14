
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int fp; } ;
struct TYPE_5__ {int fp; } ;
struct TYPE_7__ {int type; TYPE_2__ memory; TYPE_1__ file; } ;
typedef TYPE_3__ intfstream_internal_t ;
typedef int int64_t ;





 int FUNC_0 (int ,void const*,int ) ;
 int FUNC_1 (int ,void const*,int ) ;

int64_t FUNC_2(intfstream_internal_t *VAR_0,
      const void *VAR_1, uint64_t VAR_2)
{
   if (!VAR_0)
      return 0;

   switch (VAR_0->type)
   {
      case 129:
         return FUNC_0(VAR_0->file.fp, VAR_1, VAR_2);
      case 128:
         return FUNC_1(VAR_0->memory.fp, VAR_1, VAR_2);
      case 130:
         return -1;
   }

   return 0;
}
