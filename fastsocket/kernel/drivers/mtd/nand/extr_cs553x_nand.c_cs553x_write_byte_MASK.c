
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct nand_chip {scalar_t__ IO_ADDR_W; scalar_t__ IO_ADDR_R; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_2, u_char VAR_3)
{
 struct nand_chip *VAR_4 = VAR_2->priv;
 int VAR_5 = 100000;

 while (VAR_5 && FUNC_0(VAR_4->IO_ADDR_R + VAR_1) & VAR_0) {
  FUNC_1(1);
  VAR_5--;
 }
 FUNC_2(VAR_3, VAR_4->IO_ADDR_W + 0x801);
}
