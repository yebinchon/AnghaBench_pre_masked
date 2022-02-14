
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct soc_mbus_pixelfmt {int packing; int bits_per_sample; } ;
typedef int s32 ;


 int VAR_0 ;





s32 FUNC_0(u32 VAR_1, const struct soc_mbus_pixelfmt *VAR_2)
{
 switch (VAR_2->packing) {
 case 128:
  return VAR_1 * VAR_2->bits_per_sample / 8;
 case 131:
 case 130:
 case 129:
  return VAR_1 * 2;
 }
 return -VAR_0;
}
