
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_pbm_info {scalar_t__ pci_first_busno; } ;


 int FUNC_0 (struct pci_pbm_info*) ;
 int FUNC_1 (unsigned char,unsigned int,int) ;

__attribute__((used)) static void *FUNC_2(struct pci_pbm_info *VAR_0,
          unsigned char VAR_1,
          unsigned int VAR_2,
          int VAR_3)
{
 if (!VAR_0)
  return ((void*)0);
 VAR_1 -= VAR_0->pci_first_busno;
 return (void *)
  (FUNC_0(VAR_0) |
   FUNC_1(VAR_1, VAR_2, VAR_3));
}
