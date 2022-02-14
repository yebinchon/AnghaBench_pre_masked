
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct pci_pbm_info {unsigned long ino_bitmap; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pci_pbm_info *VAR_1, u32 VAR_2)
{
 VAR_2 &= VAR_0;

 if (VAR_1->ino_bitmap & (1UL << VAR_2))
  return 1;

 return 0;
}
