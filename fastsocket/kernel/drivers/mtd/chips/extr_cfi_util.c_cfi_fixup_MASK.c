
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {scalar_t__ mfr; scalar_t__ id; } ;
struct cfi_fixup {scalar_t__ mfr; scalar_t__ id; int param; int (* fixup ) (struct mtd_info*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mtd_info*,int ) ;

void FUNC_1(struct mtd_info *VAR_2, struct cfi_fixup *VAR_3)
{
 struct map_info *VAR_4 = VAR_2->priv;
 struct cfi_private *VAR_5 = VAR_4->fldrv_priv;
 struct cfi_fixup *VAR_6;

 for (VAR_6=VAR_3; VAR_6->fixup; VAR_6++) {
  if (((VAR_6->mfr == VAR_1) || (VAR_6->mfr == VAR_5->mfr)) &&
      ((VAR_6->id == VAR_0) || (VAR_6->id == VAR_5->id))) {
   VAR_6->fixup(VAR_2, VAR_6->param);
  }
 }
}
