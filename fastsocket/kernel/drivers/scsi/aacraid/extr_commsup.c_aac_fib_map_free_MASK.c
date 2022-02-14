
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aac_dev {int max_fib_size; scalar_t__ hw_fib_pa; int * hw_fib_va; TYPE_1__* scsi_host_ptr; int pdev; } ;
struct TYPE_2__ {int can_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *,scalar_t__) ;

void FUNC_1(struct aac_dev *VAR_1)
{
 FUNC_0(VAR_1->pdev,
   VAR_1->max_fib_size * (VAR_1->scsi_host_ptr->can_queue + VAR_0),
   VAR_1->hw_fib_va, VAR_1->hw_fib_pa);
 VAR_1->hw_fib_va = ((void*)0);
 VAR_1->hw_fib_pa = 0;
}
