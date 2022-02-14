
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int IO_ADDR_R; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (int ,int const*,int) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_0,
  const uint8_t *VAR_1, int VAR_2)
{
 struct nand_chip *VAR_3 = VAR_0->priv;

 if ((0x03 & ((unsigned)VAR_1)) == 0 && (0x03 & VAR_2) == 0)
  FUNC_1(VAR_3->IO_ADDR_R, VAR_1, VAR_2 >> 2);
 else if ((0x01 & ((unsigned)VAR_1)) == 0 && (0x01 & VAR_2) == 0)
  FUNC_0(VAR_3->IO_ADDR_R, VAR_1, VAR_2 >> 1);
 else
  FUNC_2(VAR_3->IO_ADDR_R, VAR_1, VAR_2);
}
