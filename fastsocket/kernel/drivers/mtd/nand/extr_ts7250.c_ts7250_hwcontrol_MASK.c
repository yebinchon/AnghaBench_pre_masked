
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
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_6, int VAR_7, unsigned int VAR_8)
{
 struct nand_chip *VAR_9 = VAR_6->priv;

 if (VAR_8 & VAR_3) {
  unsigned long VAR_10 = VAR_5;
  unsigned char VAR_11;

  VAR_11 = (VAR_8 & VAR_4) << 2;
  VAR_11 |= VAR_8 & VAR_1;
  VAR_11 |= (VAR_8 & VAR_0) >> 2;

  FUNC_1((FUNC_0(VAR_10) & ~0x7) | VAR_11, VAR_10);
 }

 if (VAR_7 != VAR_2)
  FUNC_2(VAR_7, VAR_9->IO_ADDR_W);
}
