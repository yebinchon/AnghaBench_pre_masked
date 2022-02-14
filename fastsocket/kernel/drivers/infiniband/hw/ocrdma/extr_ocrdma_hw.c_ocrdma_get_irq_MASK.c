
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocrdma_eq {size_t vector; } ;
struct TYPE_5__ {int* vector_list; } ;
struct TYPE_6__ {scalar_t__ intr_mode; TYPE_2__ msix; TYPE_1__* pdev; } ;
struct ocrdma_dev {TYPE_3__ nic_info; } ;
struct TYPE_4__ {int irq; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ocrdma_dev *VAR_1, struct ocrdma_eq *VAR_2)
{
 int VAR_3;

 if (VAR_1->nic_info.intr_mode == VAR_0)
  VAR_3 = VAR_1->nic_info.pdev->irq;
 else
  VAR_3 = VAR_1->nic_info.msix.vector_list[VAR_2->vector];
 return VAR_3;
}
