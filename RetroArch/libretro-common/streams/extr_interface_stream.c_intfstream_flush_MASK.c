
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fp; } ;
struct TYPE_5__ {int type; TYPE_1__ file; } ;
typedef TYPE_2__ intfstream_internal_t ;





 int FUNC_0 (int ) ;

int FUNC_1(intfstream_internal_t *VAR_0)
{
   if (!VAR_0)
      return -1;

   switch (VAR_0->type)
   {
      case 129:
         return FUNC_0(VAR_0->file.fp);
      case 128:
      case 130:

         break;
   }

   return 0;
}
