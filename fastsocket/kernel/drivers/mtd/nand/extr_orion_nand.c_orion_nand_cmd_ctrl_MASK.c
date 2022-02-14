
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct orion_nand_data {int cle; int ale; } ;
struct nand_chip {int options; scalar_t__ IO_ADDR_W; struct orion_nand_data* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_4, int VAR_5, unsigned int VAR_6)
{
 struct nand_chip *VAR_7 = VAR_4->priv;
 struct orion_nand_data *VAR_8 = VAR_7->priv;
 u32 VAR_9;

 if (VAR_5 == VAR_3)
  return;

 if (VAR_6 & VAR_2)
  VAR_9 = (1 << VAR_8->cle);
 else if (VAR_6 & VAR_0)
  VAR_9 = (1 << VAR_8->ale);
 else
  return;

 if (VAR_7->options & VAR_1)
  VAR_9 <<= 1;

 FUNC_0(VAR_5, VAR_7->IO_ADDR_W + VAR_9);
}
