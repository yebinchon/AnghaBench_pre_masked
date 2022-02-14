
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int buffer_size; TYPE_1__* buffers; } ;
typedef TYPE_2__ ccv_nnc_tensor_arena_t ;
struct TYPE_5__ {int type; int ptr; scalar_t__ pin_mem; } ;


 int const VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int const VAR_1 ;
 int FUNC_2 (TYPE_2__* const) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int const,int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(ccv_nnc_tensor_arena_t* const VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2->buffer_size; VAR_3++)
 {
  const int VAR_4 = VAR_2->buffers[VAR_3].type;;
  const int VAR_5 = FUNC_1(VAR_4);
  FUNC_3(VAR_5 == VAR_0);
  FUNC_4(VAR_2->buffers[VAR_3].ptr);

 }
 FUNC_2(VAR_2);
}
