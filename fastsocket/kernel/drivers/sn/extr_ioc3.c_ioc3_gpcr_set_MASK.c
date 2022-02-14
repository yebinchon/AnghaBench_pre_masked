
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ioc3_driver_data {int gpio_lock; TYPE_1__* vma; } ;
struct TYPE_2__ {int gpcr_s; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (unsigned int,int *) ;

void FUNC_3(struct ioc3_driver_data *VAR_0, unsigned int VAR_1)
{
 unsigned long VAR_2;
 FUNC_0(&VAR_0->gpio_lock, VAR_2);
 FUNC_2(VAR_1, &VAR_0->vma->gpcr_s);
 FUNC_1(&VAR_0->gpio_lock, VAR_2);
}
