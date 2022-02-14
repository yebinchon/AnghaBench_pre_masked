
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct DiskOnChip* priv; } ;
struct DiskOnChip {scalar_t__ interleave; } ;
typedef int loff_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(struct mtd_info *VAR_3, loff_t *VAR_4)
{
 struct DiskOnChip *VAR_5 = VAR_3->priv;

 if (VAR_5->interleave) {
  unsigned int VAR_6 = *VAR_4 & 0x3ff;
  unsigned int VAR_7;

  if (VAR_6 < 512) {
   VAR_7 = VAR_0;
   VAR_6 &= 0x1ff;
  } else if (VAR_6 < 1014) {
   VAR_7 = VAR_1;
   VAR_6 = (VAR_6 & 0x1ff) + 10;
  } else {
   VAR_7 = VAR_2;
   VAR_6 = VAR_6 - 1014;
  }

  *VAR_4 = (*VAR_4 & ~0x3ff) | VAR_6;
  return VAR_7;
 } else {

  if ((*VAR_4) & 0x100)
   return VAR_1;
  return VAR_0;
 }
}
