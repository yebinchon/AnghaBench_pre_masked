
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int ptr; int max_ptr; int size; int writing; } ;
typedef TYPE_1__ memstream_t ;
typedef int int64_t ;






int64_t FUNC_0(memstream_t *VAR_0, int64_t VAR_1, int VAR_2)
{
   uint64_t VAR_3;

   switch (VAR_2)
   {
      case 128:
         VAR_3 = VAR_1;
         break;
      case 130:
         VAR_3 = VAR_0->ptr + VAR_1;
         break;
      case 129:
         VAR_3 = (VAR_0->writing ? VAR_0->max_ptr : VAR_0->size) + VAR_1;
         break;
      default:
         return -1;
   }

   if (VAR_3 <= VAR_0->size)
   {
      VAR_0->ptr = VAR_3;
      return 0;
   }

   return -1;
}
