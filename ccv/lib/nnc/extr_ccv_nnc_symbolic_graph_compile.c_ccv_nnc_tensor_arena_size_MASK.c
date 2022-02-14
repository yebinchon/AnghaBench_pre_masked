
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int buffer_size; TYPE_1__* buffers; } ;
typedef TYPE_2__ ccv_nnc_tensor_arena_t ;
struct TYPE_4__ {scalar_t__ size; } ;



uint64_t FUNC_0(const ccv_nnc_tensor_arena_t* const VAR_0)
{
 uint64_t VAR_1 = 0;
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->buffer_size; VAR_2++)
  VAR_1 += VAR_0->buffers[VAR_2].size;
 return VAR_1;
}
