
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int options; int buffers; int bbt; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct mtd_info *VAR_1)
{
 struct nand_chip *VAR_2 = VAR_1->priv;






 FUNC_0(VAR_1);


 FUNC_2(VAR_2->bbt);
 if (!(VAR_2->options & VAR_0))
  FUNC_2(VAR_2->buffers);
}
