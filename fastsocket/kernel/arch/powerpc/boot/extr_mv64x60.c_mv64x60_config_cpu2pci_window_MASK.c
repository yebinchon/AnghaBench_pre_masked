
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct mv64x60_cpu2pci_win {int lo; scalar_t__ remap_hi; int remap_lo; int size; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;

void FUNC_1(u8 *VAR_1, u8 VAR_2, u32 VAR_3,
  u32 VAR_4, u32 VAR_5, u32 VAR_6,
  struct mv64x60_cpu2pci_win *VAR_7)
{
 VAR_5 >>= 16;
 VAR_5 |= VAR_0;
 FUNC_0((u32 *)(VAR_1 + VAR_7[VAR_2].lo), VAR_5);

 if (VAR_7[VAR_2].remap_hi != 0)
  FUNC_0((u32 *)(VAR_1 + VAR_7[VAR_2].remap_hi),
    VAR_3);
 FUNC_0((u32 *)(VAR_1 + VAR_7[VAR_2].remap_lo),
   VAR_4 >> 16);

 VAR_6 = (VAR_6 - 1) >> 16;
 FUNC_0((u32 *)(VAR_1 + VAR_7[VAR_2].size), VAR_6);
}
