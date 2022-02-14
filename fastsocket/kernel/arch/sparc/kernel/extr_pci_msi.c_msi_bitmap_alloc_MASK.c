
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_pbm_info {unsigned long msi_num; int msi_bitmap; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_2(struct pci_pbm_info *VAR_2)
{
 unsigned long VAR_3, VAR_4;

 VAR_4 = sizeof(unsigned long) * 8;
 VAR_3 = (VAR_2->msi_num + (VAR_4 - 1)) & ~(VAR_4 - 1);
 VAR_3 /= 8;
 FUNC_0(VAR_3 % sizeof(unsigned long));

 VAR_2->msi_bitmap = FUNC_1(VAR_3, VAR_1);
 if (!VAR_2->msi_bitmap)
  return -VAR_0;

 return 0;
}
