
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct nand_chip {int IO_ADDR_R; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int FUNC_0 (int ,int const*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_0, const u_char *VAR_1, int VAR_2)
{
 struct nand_chip *VAR_3 = VAR_0->priv;

 while (FUNC_1(VAR_2 > 0x800)) {
  FUNC_0(VAR_3->IO_ADDR_R, VAR_1, 0x800);
  VAR_1 += 0x800;
  VAR_2 -= 0x800;
 }
 FUNC_0(VAR_3->IO_ADDR_R, VAR_1, VAR_2);
}
