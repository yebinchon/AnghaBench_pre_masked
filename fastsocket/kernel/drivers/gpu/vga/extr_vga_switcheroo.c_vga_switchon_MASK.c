
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vga_switcheroo_client {int pwr_state; int pdev; TYPE_2__* ops; int id; } ;
struct TYPE_6__ {TYPE_1__* handler; } ;
struct TYPE_5__ {int (* set_gpu_state ) (int ,int ) ;} ;
struct TYPE_4__ {int (* power_state ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static int FUNC_2(struct vga_switcheroo_client *VAR_2)
{
 if (VAR_1.handler->power_state)
  VAR_1.handler->power_state(VAR_2->id, VAR_0);

 VAR_2->ops->set_gpu_state(VAR_2->pdev, VAR_0);
 VAR_2->pwr_state = VAR_0;
 return 0;
}
