
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num_memory_buffers; unsigned int* memory_size_list; unsigned char** memory_buf_list; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(unsigned VAR_1, unsigned char **VAR_2)
{
   unsigned VAR_3 = 0;
   unsigned VAR_4 = 0;

   for (VAR_4 = 0; VAR_4 < VAR_0.num_memory_buffers; VAR_4++)
   {
      if ((VAR_1 >= VAR_3) && (VAR_1 < VAR_3 + VAR_0.memory_size_list[VAR_4]))
      {
         *VAR_2 = VAR_0.memory_buf_list[VAR_4];
         break;
      }
      else
         VAR_3 += VAR_0.memory_size_list[VAR_4];
   }

   return VAR_3;
}
