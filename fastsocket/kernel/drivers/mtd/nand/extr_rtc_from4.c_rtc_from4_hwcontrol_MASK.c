
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int IO_ADDR_W; } ;
struct mtd_info {struct nand_chip* priv; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_4, int VAR_5,
    unsigned int VAR_6)
{
 struct nand_chip *VAR_7 = (VAR_4->priv);

 if (VAR_5 == VAR_1)
  return;

 if (VAR_6 & VAR_0)
  FUNC_0(VAR_5, VAR_7->IO_ADDR_W | VAR_3);
 else
  FUNC_0(VAR_5, VAR_7->IO_ADDR_W | VAR_2);
}
