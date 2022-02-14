
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int d; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_t ;
struct TYPE_6__ {unsigned int* v; } ;
struct TYPE_8__ {TYPE_1__ tensors_init; TYPE_4__* retainables; TYPE_4__* trainables; } ;
typedef TYPE_3__ ccv_cnnp_compiled_data_t ;
struct TYPE_9__ {int rnum; } ;


 scalar_t__ FUNC_0 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_1(const ccv_cnnp_compiled_data_t* const VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->trainables->rnum; VAR_1++)
 {
  const int VAR_2 = ((ccv_nnc_tensor_symbol_t*)FUNC_0(VAR_0->trainables, VAR_1))->d;
  if (!(VAR_0->tensors_init.v[VAR_2 >> 5] & (1u << (VAR_2 & 0x1f))))
   return 1;
 }
 for (VAR_1 = 0; VAR_1 < VAR_0->retainables->rnum; VAR_1++)
 {
  const int VAR_3 = ((ccv_nnc_tensor_symbol_t*)FUNC_0(VAR_0->retainables, VAR_1))->d;
  if (!(VAR_0->tensors_init.v[VAR_3 >> 5] & (1u << (VAR_3 & 0x1f))))
   return 1;
 }
 return 0;
}
