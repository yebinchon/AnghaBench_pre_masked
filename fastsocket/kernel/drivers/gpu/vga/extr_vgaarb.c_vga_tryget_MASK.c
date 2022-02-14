
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vga_device {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vga_device*,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 () ;
 struct pci_dev* FUNC_4 () ;
 int VAR_2 ;
 struct vga_device* FUNC_5 (struct pci_dev*) ;

int FUNC_6(struct pci_dev *VAR_3, unsigned int VAR_4)
{
 struct vga_device *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;

 FUNC_3();


 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_4();
 if (VAR_3 == ((void*)0))
  return 0;
 FUNC_1(&VAR_2, VAR_6);
 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5 == ((void*)0)) {
  VAR_7 = -VAR_1;
  goto bail;
 }
 if (FUNC_0(VAR_5, VAR_4))
  VAR_7 = -VAR_0;
bail:
 FUNC_2(&VAR_2, VAR_6);
 return VAR_7;
}
