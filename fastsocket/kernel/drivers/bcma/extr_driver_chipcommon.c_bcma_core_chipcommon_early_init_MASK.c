
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bcma_drv_cc {int early_setup_done; int capabilities; void* capabilities_ext; TYPE_2__* core; void* status; int gpio_lock; } ;
struct TYPE_3__ {int rev; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct bcma_drv_cc*,int ) ;
 int FUNC_1 (struct bcma_drv_cc*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct bcma_drv_cc *VAR_4)
{
 if (VAR_4->early_setup_done)
  return;

 FUNC_2(&VAR_4->gpio_lock);

 if (VAR_4->core->id.rev >= 11)
  VAR_4->status = FUNC_0(VAR_4, VAR_3);
 VAR_4->capabilities = FUNC_0(VAR_4, VAR_0);
 if (VAR_4->core->id.rev >= 35)
  VAR_4->capabilities_ext = FUNC_0(VAR_4, VAR_1);

 if (VAR_4->capabilities & VAR_2)
  FUNC_1(VAR_4);

 VAR_4->early_setup_done = 1;
}
