
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fp; } ;
struct TYPE_5__ {int fp; } ;
struct TYPE_7__ {int type; TYPE_2__ memory; TYPE_1__ file; } ;
typedef TYPE_3__ intfstream_internal_t ;





 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(intfstream_internal_t *VAR_0, int VAR_1)
{
   if (!VAR_0)
      return;

   switch (VAR_0->type)
   {
      case 129:
         FUNC_0(VAR_0->file.fp, VAR_1);
         break;
      case 128:
         FUNC_1(VAR_0->memory.fp, VAR_1);
         break;
      case 130:
         break;
   }
}
