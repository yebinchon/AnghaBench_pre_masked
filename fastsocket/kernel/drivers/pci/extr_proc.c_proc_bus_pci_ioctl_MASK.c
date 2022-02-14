
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_dir_entry {struct pci_dev* data; } ;
struct pci_filp_private {int write_combine; int mmap_state; } ;
struct pci_dev {int bus; } ;
struct file {struct pci_filp_private* private_data; TYPE_1__* f_dentry; } ;
struct TYPE_2__ {int d_inode; } ;


 int VAR_0 ;




 struct proc_dir_entry* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;

__attribute__((used)) static long FUNC_4(struct file *VAR_3, unsigned int VAR_4,
          unsigned long VAR_5)
{
 const struct proc_dir_entry *VAR_6 = FUNC_0(VAR_3->f_dentry->d_inode);
 struct pci_dev *VAR_7 = VAR_6->data;



 int VAR_8 = 0;

 FUNC_1();

 switch (VAR_4) {
 case 131:
  VAR_8 = FUNC_2(VAR_7->bus);
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 };

 FUNC_3();
 return VAR_8;
}
