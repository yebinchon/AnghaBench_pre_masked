
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {int dummy; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {TYPE_1__* cfiq; } ;
typedef int __u16 ;
struct TYPE_2__ {int P_ID; int A_ID; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtd_info* FUNC_0 (struct map_info*,int) ;
 struct mtd_info* FUNC_1 (struct map_info*,int) ;
 struct mtd_info* FUNC_2 (struct map_info*,int) ;
 struct mtd_info* FUNC_3 (struct map_info*,int) ;

__attribute__((used)) static struct mtd_info *FUNC_4(struct map_info *VAR_2, int VAR_3)
{
 struct cfi_private *VAR_4 = VAR_2->fldrv_priv;
 __u16 VAR_5 = VAR_3?VAR_4->cfiq->P_ID:VAR_4->cfiq->A_ID;

 if (VAR_5 == VAR_0 || VAR_5 == VAR_1)
  return ((void*)0);

 switch(VAR_5){
 default:
  return FUNC_3(VAR_2, VAR_3);
 }
}
