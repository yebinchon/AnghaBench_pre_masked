
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {int name; struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {TYPE_1__* cfiq; } ;
struct TYPE_2__ {int* EraseRegionInfo; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_0, void *VAR_1)
{
 struct map_info *VAR_2 = VAR_0->priv;
 struct cfi_private *VAR_3 = VAR_2->fldrv_priv;

 if ((VAR_3->cfiq->EraseRegionInfo[0] & 0xffff) == 0x003f) {
  VAR_3->cfiq->EraseRegionInfo[0] |= 0x0040;
  FUNC_0("%s: Bad S29GL064N CFI data, adjust from 64 to 128 sectors\n", VAR_0->name);
 }
}
