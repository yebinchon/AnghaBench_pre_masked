
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ioc3_submodule {unsigned int irq_mask; } ;
struct ioc3_driver_data {TYPE_1__* vma; } ;
struct TYPE_2__ {int sio_ir; } ;


 int FUNC_0 (unsigned int,int *) ;

void FUNC_1(struct ioc3_submodule *VAR_0, struct ioc3_driver_data *VAR_1,
    unsigned int VAR_2)
{
 FUNC_0(VAR_2 & VAR_0->irq_mask, &VAR_1->vma->sio_ir);
}
