
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct nand_chip {int IO_ADDR_R; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u_char FUNC_2(struct mtd_info *VAR_0)
{
 struct nand_chip *VAR_1 = VAR_0->priv;
 u_char VAR_2 = FUNC_1(VAR_1->IO_ADDR_R);
 FUNC_0();
 return VAR_2;
}
