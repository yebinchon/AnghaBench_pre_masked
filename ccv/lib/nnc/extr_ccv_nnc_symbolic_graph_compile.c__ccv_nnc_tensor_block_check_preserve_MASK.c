
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int flags; int const tensor_symbol_info_size; int exec_idx; TYPE_3__* alloc_prep; TYPE_1__* p; TYPE_7__* tensor_blocks; } ;
typedef TYPE_4__ ccv_nnc_symbolic_graph_prep_t ;
struct TYPE_13__ {int* p_refs; } ;
struct TYPE_12__ {int* p_refs; } ;
struct TYPE_10__ {int* vt_blocks; TYPE_6__* buffers; TYPE_2__* blocks; } ;
struct TYPE_9__ {int const block_ref; int buffer_ref; } ;
struct TYPE_8__ {int exec_symbol_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_7__) ;
 scalar_t__ FUNC_1 (TYPE_6__) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const ccv_nnc_symbolic_graph_prep_t* const VAR_2, const int VAR_3)
{

 if (!(VAR_2->flags & VAR_0))
  return 0;
 FUNC_3(VAR_3 >= 0 && VAR_3 < VAR_2->tensor_symbol_info_size);

 if (FUNC_0(VAR_2->tensor_blocks[VAR_3]))
  return 0;
 const int VAR_4 = VAR_2->tensor_blocks[VAR_3].p_refs[0] - 1;

 if (-1 != FUNC_2(VAR_4, VAR_2->p->exec_symbol_info + (VAR_2->exec_idx - 1)))
  return 0;
 const int VAR_5 = VAR_2->alloc_prep->vt_blocks[VAR_3];
 FUNC_3(VAR_5 >= 0);
 FUNC_3(VAR_3 == VAR_2->alloc_prep->blocks[VAR_5].block_ref);
 const int VAR_6 = VAR_2->alloc_prep->blocks[VAR_5].buffer_ref;

 if (FUNC_1(VAR_2->alloc_prep->buffers[VAR_6]) == VAR_1)
  return 0;
 if (VAR_2->alloc_prep->buffers[VAR_6].p_refs[0] - 1 == VAR_4)
  return 0;

 return 1;
}
