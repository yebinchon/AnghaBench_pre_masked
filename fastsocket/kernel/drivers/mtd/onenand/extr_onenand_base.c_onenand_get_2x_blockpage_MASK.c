
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int erase_shift; int writesize; int page_shift; int page_mask; } ;
struct mtd_info {struct onenand_chip* priv; } ;
typedef int loff_t ;



__attribute__((used)) static int FUNC_0(struct mtd_info *VAR_0, loff_t VAR_1)
{
 struct onenand_chip *VAR_2 = VAR_0->priv;
 int VAR_3, VAR_4, VAR_5;


 VAR_4 = (int) (VAR_1 >> VAR_2->erase_shift) & ~1;

 if (VAR_1 & VAR_2->writesize)
  VAR_4++;
 VAR_5 = (int) (VAR_1 >> (VAR_2->page_shift + 1)) & VAR_2->page_mask;
 VAR_3 = (VAR_4 << 7) | VAR_5;

 return VAR_3;
}
