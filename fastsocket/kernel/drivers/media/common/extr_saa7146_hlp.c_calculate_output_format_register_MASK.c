
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct saa7146_dev {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct saa7146_dev* VAR_0, u32 VAR_1, u32* VAR_2)
{

 *VAR_2 &= 0x0000ffff;

 *VAR_2 |= (( ((VAR_1&0xf00)>>8) << 30) | ((VAR_1&0x00f) << 24) | (((VAR_1&0x0f0)>>4) << 16));
}
