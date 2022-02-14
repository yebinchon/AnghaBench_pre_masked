
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct pcf50633 {size_t* mask_regs; } ;



int FUNC_0(struct pcf50633 *VAR_0, int VAR_1)
{
 u8 VAR_2, VAR_3;

 VAR_2 = VAR_1 >> 3;
 VAR_3 = 1 << (VAR_1 & 0x07);

 return VAR_0->mask_regs[VAR_2] & VAR_3;
}
