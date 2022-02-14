
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {unsigned int IO_ADDR_W; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_1, int VAR_2,
       unsigned int VAR_3)
{
 struct nand_chip *VAR_4 = VAR_1->priv;

 if (VAR_2 != VAR_0)
  FUNC_0(VAR_2, VAR_4->IO_ADDR_W | ((VAR_3 & 0x6) << 1));
}
