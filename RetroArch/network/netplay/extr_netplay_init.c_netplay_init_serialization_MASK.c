
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int size; } ;
typedef TYPE_2__ retro_ctx_size_info_t ;
struct TYPE_8__ {int state_size; unsigned int buffer_size; int zbuffer_size; int quirks; int * zbuffer; TYPE_1__* buffer; } ;
typedef TYPE_3__ netplay_t ;
struct TYPE_6__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;

bool FUNC_2(netplay_t *VAR_2)
{
   unsigned VAR_3;
   retro_ctx_size_info_t VAR_4;

   if (VAR_2->state_size)
      return 1;

   FUNC_1(&VAR_4);

   if (!VAR_4.size)
      return 0;

   VAR_2->state_size = VAR_4.size;

   for (VAR_3 = 0; VAR_3 < VAR_2->buffer_size; VAR_3++)
   {
      VAR_2->buffer[VAR_3].state = FUNC_0(VAR_2->state_size, 1);

      if (!VAR_2->buffer[VAR_3].state)
      {
         VAR_2->quirks |= VAR_0;
         return 0;
      }
   }

   VAR_2->zbuffer_size = VAR_2->state_size * 2;
   VAR_2->zbuffer = (uint8_t *) FUNC_0(VAR_2->zbuffer_size, 1);
   if (!VAR_2->zbuffer)
   {
      VAR_2->quirks |= VAR_1;
      VAR_2->zbuffer_size = 0;
      return 0;
   }

   return 1;
}
