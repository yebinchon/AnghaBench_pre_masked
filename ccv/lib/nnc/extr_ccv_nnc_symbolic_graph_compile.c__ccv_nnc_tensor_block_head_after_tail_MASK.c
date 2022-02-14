
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_sparse_matrix_t ;
struct TYPE_4__ {int tail; int head; } ;
typedef TYPE_1__ ccv_nnc_tensor_block_t ;


 int FUNC_0 (int const* const,int ,int ) ;

__attribute__((used)) static int FUNC_1(const ccv_sparse_matrix_t* const VAR_0, const ccv_nnc_tensor_block_t VAR_1, const ccv_nnc_tensor_block_t VAR_2)
{
 return FUNC_0(VAR_0, VAR_1.head, VAR_2.tail);
}
