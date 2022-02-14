
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vga_switcheroo_client {int pwr_state; int pdev; TYPE_1__* ops; } ;
struct TYPE_4__ {int clients; } ;
struct TYPE_3__ {int (* set_gpu_state ) (int ,int) ;} ;


 int VAR_0 ;
 struct vga_switcheroo_client* FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_2(int VAR_2, int VAR_3)
{
 struct vga_switcheroo_client *VAR_4;

 VAR_4 = FUNC_0(&VAR_1.clients, VAR_2 | VAR_0);
 if (VAR_4 && VAR_4->pwr_state != VAR_3) {
  VAR_4->ops->set_gpu_state(VAR_4->pdev, VAR_3);
  VAR_4->pwr_state = VAR_3;
 }
}
