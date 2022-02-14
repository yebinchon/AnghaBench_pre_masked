
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_pbm_info {unsigned long config_space_reg_bits; unsigned long config_space; } ;


 scalar_t__ FUNC_0 (struct pci_pbm_info*,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static void *FUNC_1(struct pci_pbm_info *VAR_0,
     unsigned long VAR_1,
     unsigned long VAR_2,
     unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_0->config_space_reg_bits;

 if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3))
  return ((void*)0);

 VAR_3 = (VAR_3 & ((1 << VAR_4) - 1));
 VAR_2 <<= VAR_4;
 VAR_1 <<= VAR_4 + 8;

 return (void *) (VAR_0->config_space | VAR_1 | VAR_2 | VAR_3);
}
