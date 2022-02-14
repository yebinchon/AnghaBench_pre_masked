
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int size; int data; } ;
struct TYPE_11__ {TYPE_4__ buf; } ;
struct TYPE_13__ {int type; TYPE_3__ memory; } ;
typedef TYPE_5__ intfstream_internal_t ;
struct TYPE_9__ {int size; int data; } ;
struct TYPE_10__ {TYPE_1__ buf; } ;
struct TYPE_14__ {TYPE_2__ memory; } ;
typedef TYPE_6__ intfstream_info_t ;





 int FUNC_0 (int ,int ) ;

bool FUNC_1(intfstream_internal_t *VAR_0, intfstream_info_t *VAR_1)
{
   if (!VAR_0 || !VAR_1)
      return 0;

   switch (VAR_0->type)
   {
      case 129:
         break;
      case 128:
         VAR_0->memory.buf.data = VAR_1->memory.buf.data;
         VAR_0->memory.buf.size = VAR_1->memory.buf.size;

         FUNC_0(VAR_0->memory.buf.data,
               VAR_0->memory.buf.size);
         break;
      case 130:


         break;
   }

   return 1;
}
