
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ x; } ;
typedef TYPE_1__ ccv_nnc_tensor_ref_t ;
struct TYPE_6__ {TYPE_3__* ref_version; } ;
typedef TYPE_2__ ccv_nnc_autograd_tensor_version_t ;
struct TYPE_7__ {int rnum; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_1(const ccv_nnc_autograd_tensor_version_t* const VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->ref_version->rnum; VAR_1++)
  if (((ccv_nnc_tensor_ref_t*)FUNC_0(VAR_0->ref_version, VAR_1))->x < 0)
   return VAR_1;
 return -1;
}
