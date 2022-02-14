
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {int write; struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {TYPE_1__* cfiq; } ;
struct TYPE_2__ {scalar_t__ BufWriteTimeoutTyp; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_2, void *VAR_3)
{
 struct map_info *VAR_4 = VAR_2->priv;
 struct cfi_private *VAR_5 = VAR_4->fldrv_priv;
 if (VAR_5->cfiq->BufWriteTimeoutTyp) {
  FUNC_0(VAR_0, "Using buffer write method\n" );
  VAR_2->write = VAR_1;
 }
}
