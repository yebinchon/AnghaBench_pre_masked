
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sharpsl_nand {scalar_t__ io; } ;
struct nand_chip {scalar_t__ IO_ADDR_W; } ;
struct mtd_info {struct nand_chip* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct sharpsl_nand* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_3, int VAR_4,
       unsigned int VAR_5)
{
 struct sharpsl_nand *VAR_6 = FUNC_0(VAR_3);
 struct nand_chip *VAR_7 = VAR_3->priv;

 if (VAR_5 & VAR_2) {
  unsigned char VAR_8 = VAR_5 & 0x07;

  VAR_8 |= (VAR_5 & 0x01) << 4;

  VAR_8 ^= 0x11;

  FUNC_2((FUNC_1(VAR_6->io + VAR_0) & ~0x17) | VAR_8, VAR_6->io + VAR_0);
 }

 if (VAR_4 != VAR_1)
  FUNC_2(VAR_4, VAR_7->IO_ADDR_W);
}
