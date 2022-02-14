
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int page_buf; } ;
struct nand_bbt_descr {int options; } ;
struct mtd_info {struct onenand_chip* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int ,struct nand_bbt_descr*,int) ;

__attribute__((used)) static inline int FUNC_1 (struct mtd_info *VAR_1, struct nand_bbt_descr *VAR_2)
{
 struct onenand_chip *VAR_3 = VAR_1->priv;

        VAR_2->options &= ~VAR_0;
 return FUNC_0(VAR_1, VAR_3->page_buf, VAR_2, -1);
}
