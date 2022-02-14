
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparc64_msiq_ops {int dummy; } ;
struct pci_pbm_info {int msiq_num; int msiq_first; int msiq_first_devino; } ;


 int FUNC_0 (struct pci_pbm_info*,struct sparc64_msiq_ops const*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct pci_pbm_info *VAR_0,
          const struct sparc64_msiq_ops *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->msiq_num; VAR_2++) {
  unsigned long VAR_3 = VAR_2 + VAR_0->msiq_first;
  unsigned long VAR_4 = VAR_2 + VAR_0->msiq_first_devino;
  int VAR_5;

  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
