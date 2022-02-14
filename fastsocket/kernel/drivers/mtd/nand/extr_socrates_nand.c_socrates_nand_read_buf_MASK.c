
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct socrates_nand_host {int io_base; } ;
struct nand_chip {struct socrates_nand_host* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_3, uint8_t *VAR_4, int VAR_5)
{
 int VAR_6;
 struct nand_chip *VAR_7 = VAR_3->priv;
 struct socrates_nand_host *VAR_8 = VAR_7->priv;
 uint32_t VAR_9;

 VAR_9 = VAR_2 | VAR_0;

 FUNC_1(VAR_8->io_base, VAR_9);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_4[VAR_6] = (FUNC_0(VAR_8->io_base) >>
    VAR_1) & 0xff;
 }
}
