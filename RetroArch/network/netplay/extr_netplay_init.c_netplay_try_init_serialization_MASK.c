
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {scalar_t__ size; int data; int * data_const; } ;
typedef TYPE_2__ retro_ctx_serialize_info_t ;
struct TYPE_10__ {size_t run_ptr; int quirks; scalar_t__ state_size; TYPE_1__* buffer; } ;
typedef TYPE_3__ netplay_t ;
struct TYPE_8__ {int state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

bool FUNC_3(netplay_t *VAR_1)
{
   retro_ctx_serialize_info_t VAR_2;

   if (VAR_1->state_size)
      return 1;

   if (!FUNC_1(VAR_1))
      return 0;


   VAR_2.data_const = ((void*)0);
   VAR_2.data = VAR_1->buffer[VAR_1->run_ptr].state;
   VAR_2.size = VAR_1->state_size;

   if (!FUNC_0(&VAR_2))
      return 0;


   VAR_1->quirks &= ~((uint64_t) VAR_0);

   return FUNC_2(VAR_1);
}
