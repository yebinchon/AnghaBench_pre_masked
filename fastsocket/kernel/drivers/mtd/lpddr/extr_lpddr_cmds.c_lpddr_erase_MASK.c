
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {unsigned long size; struct map_info* priv; } ;
struct map_info {struct lpddr_private* fldrv_priv; } ;
struct lpddr_private {TYPE_1__* qinfo; } ;
struct erase_info {unsigned long addr; unsigned long len; int state; } ;
struct TYPE_2__ {int UniformBlockSizeShift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,unsigned long) ;
 int FUNC_1 (struct erase_info*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2, struct erase_info *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 int VAR_6;
 struct map_info *VAR_7 = VAR_2->priv;
 struct lpddr_private *VAR_8 = VAR_7->fldrv_priv;
 int VAR_9 = 1 << VAR_8->qinfo->UniformBlockSizeShift;

 VAR_4 = VAR_3->addr;
 VAR_5 = VAR_3->len;

 if (VAR_4 > VAR_2->size || (VAR_5 + VAR_4) > VAR_2->size)
  return -VAR_0;

 while (VAR_5 > 0) {
  VAR_6 = FUNC_0(VAR_2, VAR_4);
  if (VAR_6)
   return VAR_6;
  VAR_4 += VAR_9;
  VAR_5 -= VAR_9;
 }
 VAR_3->state = VAR_1;
 FUNC_1(VAR_3);

 return 0;
}
