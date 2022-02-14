
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {int exec_data; } ;
typedef TYPE_1__ ccv_nnc_tensor_tape_t ;
struct TYPE_12__ {int const dim_count; int* dim; int* data; } ;
typedef TYPE_2__ ccv_nnc_tape_exec_data_array_t ;
struct TYPE_13__ {int while_count; struct TYPE_13__* p; int exec_info; } ;
typedef TYPE_3__ ccv_nnc_graph_t ;
struct TYPE_14__ {scalar_t__ d; TYPE_3__ const* const graph; } ;
typedef TYPE_4__ ccv_nnc_graph_exec_t ;
struct TYPE_15__ {scalar_t__ alias_ref; scalar_t__ pair_ref; } ;
typedef TYPE_5__ ccv_nnc_graph_exec_info_t ;


 TYPE_2__* FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 TYPE_5__* FUNC_2 (int ,scalar_t__) ;

uint64_t FUNC_3(ccv_nnc_tensor_tape_t* const VAR_0, const ccv_nnc_graph_t* const VAR_1, const ccv_nnc_graph_exec_t VAR_2)
{
 FUNC_1(VAR_2.graph == VAR_1);
 ccv_nnc_graph_exec_info_t* VAR_3 = FUNC_2(VAR_1->exec_info, VAR_2.d);
 if (!VAR_3->alias_ref && VAR_3->pair_ref)
  VAR_3 = FUNC_2(VAR_1->exec_info, VAR_3->pair_ref - 1);
 ccv_nnc_tape_exec_data_array_t* const VAR_4 = FUNC_0(VAR_0->exec_data, (int)VAR_3->alias_ref);
 const ccv_nnc_graph_t* VAR_5 = VAR_1;
 int VAR_6;
 for (VAR_6 = 0; VAR_5; VAR_6++)
  VAR_5 = VAR_5->p;
 VAR_5 = VAR_1;
 const int VAR_7 = VAR_6;
 uint64_t VAR_8[VAR_7];
 for (VAR_6 = VAR_7 - 1; VAR_5; VAR_6--, VAR_5 = VAR_5->p)
  VAR_8[VAR_6] = VAR_5->while_count;
 FUNC_1(VAR_7 <= VAR_4->dim_count);
 int VAR_9 = 0, VAR_10 = 1;
 for (VAR_6 = VAR_7 - 1; VAR_6 >= 0; VAR_6--)
 {
  FUNC_1(VAR_8[VAR_6] < VAR_4->dim[VAR_6]);
  VAR_9 += VAR_8[VAR_6] * VAR_10;
  VAR_10 *= VAR_4->dim[VAR_6];
 }
 return VAR_4->data[VAR_9];
}
