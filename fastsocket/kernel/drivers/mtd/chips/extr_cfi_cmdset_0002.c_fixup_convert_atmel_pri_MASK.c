
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {scalar_t__ id; TYPE_1__* cfiq; struct cfi_pri_amdstd* cmdset_priv; } ;
struct cfi_pri_atmel {int Features; scalar_t__ BottomBoot; } ;
struct cfi_pri_amdstd {int EraseSuspend; int TopBottom; } ;
typedef int atmel_pri ;
struct TYPE_2__ {scalar_t__ BufWriteTimeoutMax; scalar_t__ BufWriteTimeoutTyp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cfi_pri_atmel*,struct cfi_pri_amdstd*,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_1, void *VAR_2)
{
 struct map_info *VAR_3 = VAR_1->priv;
 struct cfi_private *VAR_4 = VAR_3->fldrv_priv;
 struct cfi_pri_amdstd *VAR_5 = VAR_4->cmdset_priv;
 struct cfi_pri_atmel VAR_6;

 FUNC_0(&VAR_6, VAR_5, sizeof(VAR_6));
 FUNC_1((char *)VAR_5 + 5, 0, sizeof(*VAR_5) - 5);

 if (VAR_6.Features & 0x02)
  VAR_5->EraseSuspend = 2;


 if (VAR_4->id == VAR_0) {
  if (VAR_6.BottomBoot)
   VAR_5->TopBottom = 3;
  else
   VAR_5->TopBottom = 2;
 } else {
  if (VAR_6.BottomBoot)
   VAR_5->TopBottom = 2;
  else
   VAR_5->TopBottom = 3;
 }


 VAR_4->cfiq->BufWriteTimeoutTyp = 0;
 VAR_4->cfiq->BufWriteTimeoutMax = 0;
}
