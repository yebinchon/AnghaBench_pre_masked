
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vga_switcheroo_client {int pwr_state; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int active; int clients; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vga_switcheroo_client* FUNC_0 (int *,struct pci_dev*) ;
 TYPE_1__ VAR_2 ;

int FUNC_1(struct pci_dev *VAR_3)
{
 struct vga_switcheroo_client *VAR_4;

 VAR_4 = FUNC_0(&VAR_2.clients, VAR_3);
 if (!VAR_4)
  return VAR_1;
 if (!VAR_2.active)
  return VAR_0;
 return VAR_4->pwr_state;
}
