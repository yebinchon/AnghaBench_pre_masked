
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_t ;
struct vga_device {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vga_device* FUNC_0 (struct vga_device*,unsigned int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 () ;
 struct pci_dev* FUNC_10 () ;
 int VAR_6 ;
 int VAR_7 ;
 struct vga_device* FUNC_11 (struct pci_dev*) ;

int FUNC_12(struct pci_dev *VAR_8, unsigned int VAR_9, int VAR_10)
{
 struct vga_device *VAR_11, *VAR_12;
 unsigned long VAR_13;
 wait_queue_t VAR_14;
 int VAR_15 = 0;

 FUNC_9();

 if (VAR_8 == ((void*)0))
  VAR_8 = FUNC_10();
 if (VAR_8 == ((void*)0))
  return 0;

 for (;;) {
  FUNC_7(&VAR_6, VAR_13);
  VAR_11 = FUNC_11(VAR_8);
  if (VAR_11 == ((void*)0)) {
   FUNC_8(&VAR_6, VAR_13);
   VAR_15 = -VAR_1;
   break;
  }
  VAR_12 = FUNC_0(VAR_11, VAR_9);
  FUNC_8(&VAR_6, VAR_13);
  if (VAR_12 == ((void*)0))
   break;
  FUNC_2(&VAR_14, VAR_5);
  FUNC_1(&VAR_7, &VAR_14);
  FUNC_5(VAR_10 ?
      VAR_2 :
      VAR_4);
  if (FUNC_6(VAR_5)) {
   VAR_15 = -VAR_0;
   break;
  }
  FUNC_4();
  FUNC_3(&VAR_7, &VAR_14);
  FUNC_5(VAR_3);
 }
 return VAR_15;
}
