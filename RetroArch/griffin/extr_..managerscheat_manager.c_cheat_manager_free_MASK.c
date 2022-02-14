
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int size; int memory_initialized; int memory_search_initialized; scalar_t__ total_memory_size; scalar_t__ num_memory_buffers; TYPE_1__* matches; TYPE_1__* memory_size_list; TYPE_1__* memory_buf_list; int * curr_memory_buf; TYPE_1__* prev_memory_buf; scalar_t__ buf_size; TYPE_1__* cheats; } ;
struct TYPE_3__ {struct TYPE_3__* code; struct TYPE_3__* desc; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(void)
{
   unsigned VAR_1 = 0;

   if (VAR_0.cheats)
   {
      for (VAR_1 = 0; VAR_1 < VAR_0.size; VAR_1++)
      {
         if (VAR_0.cheats[VAR_1].desc)
            FUNC_0(VAR_0.cheats[VAR_1].desc);
         if (VAR_0.cheats[VAR_1].code)
            FUNC_0(VAR_0.cheats[VAR_1].code);
      }

      FUNC_0(VAR_0.cheats);
   }

   if (VAR_0.prev_memory_buf)
      FUNC_0(VAR_0.prev_memory_buf);

   if (VAR_0.matches)
      FUNC_0(VAR_0.matches);

   if (VAR_0.memory_buf_list)
      FUNC_0(VAR_0.memory_buf_list);

   if (VAR_0.memory_size_list)
      FUNC_0(VAR_0.memory_size_list);

   VAR_0.cheats = ((void*)0);
   VAR_0.size = 0;
   VAR_0.buf_size = 0;
   VAR_0.prev_memory_buf = ((void*)0);
   VAR_0.curr_memory_buf = ((void*)0);
   VAR_0.memory_buf_list = ((void*)0);
   VAR_0.memory_size_list = ((void*)0);
   VAR_0.matches = ((void*)0);
   VAR_0.num_memory_buffers = 0;
   VAR_0.total_memory_size = 0;
   VAR_0.memory_initialized = 0;
   VAR_0.memory_search_initialized = 0;

}
