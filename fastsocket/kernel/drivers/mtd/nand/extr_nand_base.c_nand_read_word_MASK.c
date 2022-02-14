
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nand_chip {int IO_ADDR_R; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u16 FUNC_1(struct mtd_info *VAR_0)
{
 struct nand_chip *VAR_1 = VAR_0->priv;
 return FUNC_0(VAR_1->IO_ADDR_R);
}
