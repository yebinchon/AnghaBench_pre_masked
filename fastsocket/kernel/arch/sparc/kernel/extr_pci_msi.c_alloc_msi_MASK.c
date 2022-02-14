
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_pbm_info {int msi_num; int msi_first; int msi_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct pci_pbm_info *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->msi_num; VAR_2++) {
  if (!FUNC_0(VAR_2, VAR_1->msi_bitmap))
   return VAR_2 + VAR_1->msi_first;
 }

 return -VAR_0;
}
