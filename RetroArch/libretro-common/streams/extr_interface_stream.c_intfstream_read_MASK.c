
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int fp; } ;
struct TYPE_7__ {int fp; } ;
struct TYPE_6__ {int fp; } ;
struct TYPE_9__ {int type; TYPE_3__ chd; TYPE_2__ memory; TYPE_1__ file; } ;
typedef TYPE_4__ intfstream_internal_t ;
typedef int int64_t ;





 int FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (int ,void*,int ) ;

int64_t FUNC_3(intfstream_internal_t *VAR_0, void *VAR_1, uint64_t VAR_2)
{
   if (!VAR_0)
      return 0;

   switch (VAR_0->type)
   {
      case 129:
         return FUNC_1(VAR_0->file.fp, VAR_1, VAR_2);
      case 128:
         return FUNC_2(VAR_0->memory.fp, VAR_1, VAR_2);
      case 130:



         break;

   }

   return -1;
}
