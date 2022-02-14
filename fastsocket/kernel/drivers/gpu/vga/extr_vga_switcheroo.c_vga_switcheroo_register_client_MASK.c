
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vga_switcheroo_client_ops {int dummy; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,struct vga_switcheroo_client_ops const*,int,int) ;
 struct pci_dev* FUNC_1 () ;

int FUNC_2(struct pci_dev *VAR_0,
       const struct vga_switcheroo_client_ops *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1, -1,
          VAR_0 == FUNC_1());
}
