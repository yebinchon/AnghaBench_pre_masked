
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {int erase; struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {TYPE_1__* cfiq; } ;
struct TYPE_2__ {int NumEraseRegions; int* EraseRegionInfo; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mtd_info *VAR_1, void *VAR_2)
{
 struct map_info *VAR_3 = VAR_1->priv;
 struct cfi_private *VAR_4 = VAR_3->fldrv_priv;
 if ((VAR_4->cfiq->NumEraseRegions == 1) &&
  ((VAR_4->cfiq->EraseRegionInfo[0] & 0xffff) == 0)) {
  VAR_1->erase = VAR_0;
 }

}
