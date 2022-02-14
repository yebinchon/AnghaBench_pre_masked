
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct nand_chip {int IO_ADDR_W; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_0, u_char VAR_1)
{
 struct nand_chip *VAR_2 = VAR_0->priv;
 FUNC_1(VAR_1, VAR_2->IO_ADDR_W);
 FUNC_0();
}
