
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int IO_ADDR_W; } ;
struct mtd_info {struct nand_chip* priv; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned char,unsigned char) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_4, int VAR_5, unsigned int VAR_6)
{
 struct nand_chip *VAR_7 = VAR_4->priv;
 unsigned char VAR_8, VAR_9;

 if (VAR_6 & VAR_3) {
  VAR_8 = (VAR_6 & VAR_1) << 1;
  VAR_8 |= (VAR_6 & VAR_0) >> 1;

  VAR_9 = (~VAR_6 & VAR_1) << 1;
  VAR_9 |= (~VAR_6 & VAR_0) >> 1;

  FUNC_0(VAR_8, VAR_9);
 }
 if (VAR_5 != VAR_2)
  FUNC_1(VAR_5, VAR_7->IO_ADDR_W);
}
