
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int IO_ADDR_R; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_0, uint8_t *VAR_1, int VAR_2)
{
 int VAR_3;
 struct nand_chip *VAR_4 = VAR_0->priv;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_1[VAR_3] = FUNC_0(VAR_4->IO_ADDR_R);
}
