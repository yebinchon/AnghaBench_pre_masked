
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fp; int track; } ;
struct TYPE_6__ {int fp; int writable; } ;
struct TYPE_8__ {int fp; } ;
struct TYPE_9__ {int type; TYPE_2__ chd; TYPE_1__ memory; TYPE_3__ file; } ;
typedef TYPE_4__ intfstream_internal_t ;





 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*,unsigned int,unsigned int) ;
 int FUNC_2 (int ) ;

bool FUNC_3(intfstream_internal_t *VAR_0, const char *VAR_1,
      unsigned VAR_2, unsigned VAR_3)
{
   if (!VAR_0)
      return 0;

   switch (VAR_0->type)
   {
      case 129:
         VAR_0->file.fp = FUNC_1(VAR_1, VAR_2, VAR_3);
         if (!VAR_0->file.fp)
            return 0;
         break;
      case 128:
         VAR_0->memory.fp = FUNC_2(VAR_0->memory.writable);
         if (!VAR_0->memory.fp)
            return 0;
         break;
      case 130:






         return 0;

   }

   return 1;
}
