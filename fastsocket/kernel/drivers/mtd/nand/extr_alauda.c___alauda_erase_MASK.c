
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtd_info {scalar_t__ erasesize; struct alauda* priv; } ;
struct erase_info {int addr; int len; } ;
struct alauda {int blockmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,int) ;
 int FUNC_1 (struct mtd_info*,int) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2, struct erase_info *VAR_3)
{
 struct alauda *VAR_4 = VAR_2->priv;
 u32 VAR_5 = VAR_3->addr;
 u32 VAR_6 = VAR_3->len;
 int VAR_7;

 if ((VAR_5 & VAR_4->blockmask) || (VAR_6 & VAR_4->blockmask))
  return -VAR_0;

 while (VAR_6) {

  VAR_7 = FUNC_1(VAR_2, VAR_5);
  if (VAR_7 > 0)
   VAR_7 = -VAR_1;
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_0(VAR_2, VAR_5);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_5 += VAR_2->erasesize;
  VAR_6 -= VAR_2->erasesize;
 }
 return 0;
}
