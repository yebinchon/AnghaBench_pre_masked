
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* tail; } ;
typedef TYPE_1__ ccv_nnc_tensor_block_t ;
struct TYPE_6__ {int rnum; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(const ccv_nnc_tensor_block_t* const VAR_0, const int VAR_1)
{
 FUNC_0(VAR_0->tail);
 return (VAR_0->tail->rnum == 1 && *(int*)FUNC_1(VAR_0->tail, 0) == VAR_1);
}
