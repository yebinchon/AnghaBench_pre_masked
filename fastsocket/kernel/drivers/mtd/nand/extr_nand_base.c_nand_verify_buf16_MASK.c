
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u16 ;
struct nand_chip {int IO_ADDR_R; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
 int VAR_4;
 struct nand_chip *VAR_5 = VAR_1->priv;
 u16 *VAR_6 = (u16 *) VAR_2;
 VAR_3 >>= 1;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  if (VAR_6[VAR_4] != FUNC_0(VAR_5->IO_ADDR_R))
   return -VAR_0;

 return 0;
}
