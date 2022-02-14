
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {scalar_t__ IO_ADDR_W; } ;
struct mtd_info {struct nand_chip* priv; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_5, int VAR_6,
     unsigned int VAR_7)
{
 struct nand_chip *VAR_8 = VAR_5->priv;
 unsigned long VAR_9 = (unsigned long)VAR_8->IO_ADDR_W;

 if (VAR_6 == VAR_2)
  return;

 if (VAR_7 & VAR_1)
  FUNC_0(VAR_6, VAR_4);
 else if (VAR_7 & VAR_0)
  FUNC_0(VAR_6, VAR_3);
 else
  FUNC_0(VAR_6, VAR_9);
}
