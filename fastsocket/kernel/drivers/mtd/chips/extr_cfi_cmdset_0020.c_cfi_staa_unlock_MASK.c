
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;
struct mtd_info {scalar_t__ erasesize; struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {int interleave; int device_type; int chipshift; int * chips; } ;
typedef int loff_t ;


 int FUNC_0 (struct map_info*,unsigned long) ;
 int FUNC_1 (int,int,int ,struct map_info*,struct cfi_private*,int,int *) ;
 int FUNC_2 (struct map_info*,int *,unsigned long) ;
 int FUNC_3 (char*,unsigned long,...) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_0, loff_t VAR_1, uint64_t VAR_2)
{
 struct map_info *VAR_3 = VAR_0->priv;
 struct cfi_private *VAR_4 = VAR_3->fldrv_priv;
 unsigned long VAR_5;
 int VAR_6, VAR_7 = 0;




 VAR_6 = VAR_1 >> VAR_4->chipshift;
 VAR_5 = VAR_1 - (VAR_6 << VAR_4->chipshift);
 VAR_7 = FUNC_2(VAR_3, &VAR_4->chips[VAR_6], VAR_5);







 return VAR_7;
}
