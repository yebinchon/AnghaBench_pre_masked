
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_pbm_info {struct pci_pbm_info* sibling; } ;
typedef enum schizo_error_type { ____Placeholder_schizo_error_type } schizo_error_type ;


 int FUNC_0 (struct pci_pbm_info*,int) ;

__attribute__((used)) static void FUNC_1(struct pci_pbm_info *VAR_0,
         enum schizo_error_type VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 if (VAR_0->sibling)
  FUNC_0(VAR_0->sibling, VAR_1);
}
