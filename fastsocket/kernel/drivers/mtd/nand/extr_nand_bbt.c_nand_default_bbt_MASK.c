
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int options; int * badblock_pattern; int * bbt_md; int * bbt_td; } ;
struct mtd_info {int writesize; struct nand_chip* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mtd_info*,int *) ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_1(struct mtd_info *VAR_9)
{
 struct nand_chip *VAR_10 = VAR_9->priv;
 if (VAR_10->options & VAR_0) {

  if (!VAR_10->bbt_td) {
   VAR_10->bbt_td = &VAR_3;
   VAR_10->bbt_md = &VAR_4;
  }
  VAR_10->options |= VAR_1;
  return FUNC_0(VAR_9, &VAR_2);
 }


 if (VAR_10->options & VAR_1) {

  if (!VAR_10->bbt_td) {
   VAR_10->bbt_td = &VAR_3;
   VAR_10->bbt_md = &VAR_4;
  }
  if (!VAR_10->badblock_pattern) {
   VAR_10->badblock_pattern = (VAR_9->writesize > 512) ? &VAR_5 : &VAR_7;
  }
 } else {
  VAR_10->bbt_td = ((void*)0);
  VAR_10->bbt_md = ((void*)0);
  if (!VAR_10->badblock_pattern) {
   VAR_10->badblock_pattern = (VAR_9->writesize > 512) ?
       &VAR_6 : &VAR_8;
  }
 }
 return FUNC_0(VAR_9, VAR_10->badblock_pattern);
}
