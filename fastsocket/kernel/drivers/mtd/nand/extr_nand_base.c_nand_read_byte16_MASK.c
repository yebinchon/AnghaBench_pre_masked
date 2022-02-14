
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int IO_ADDR_R; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint8_t FUNC_2(struct mtd_info *VAR_0)
{
 struct nand_chip *VAR_1 = VAR_0->priv;
 return (uint8_t) FUNC_0(FUNC_1(VAR_1->IO_ADDR_R));
}
