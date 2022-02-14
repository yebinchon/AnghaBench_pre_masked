
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {TYPE_1__* cfiq; } ;
struct TYPE_2__ {int* EraseRegionInfo; } ;



__attribute__((used)) static void FUNC_0(struct mtd_info *VAR_0, void* VAR_1)
{
 struct map_info *VAR_2 = VAR_0->priv;
 struct cfi_private *VAR_3 = VAR_2->fldrv_priv;


 VAR_3->cfiq->EraseRegionInfo[1] =
  (VAR_3->cfiq->EraseRegionInfo[1] & 0xffff0000) | 0x3e;
}
