
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {scalar_t__ IO_ADDR_W; } ;
struct mtd_info {struct nand_chip* priv; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_2, int VAR_3, unsigned int VAR_4)
{
 struct nand_chip *VAR_5 = VAR_2->priv;

 if (VAR_3 == VAR_1)
  return;

 if (VAR_4 & VAR_0)
  FUNC_0(VAR_3, VAR_5->IO_ADDR_W + (1 << 24));
 else
  FUNC_0(VAR_3, VAR_5->IO_ADDR_W + (1 << 23));
}
