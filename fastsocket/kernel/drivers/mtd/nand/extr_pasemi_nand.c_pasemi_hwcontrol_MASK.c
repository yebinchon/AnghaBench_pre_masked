
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {scalar_t__ IO_ADDR_W; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_5, int VAR_6,
        unsigned int VAR_7)
{
 struct nand_chip *VAR_8 = VAR_5->priv;

 if (VAR_6 == VAR_3)
  return;

 if (VAR_7 & VAR_2)
  FUNC_2(VAR_8->IO_ADDR_W + (1 << VAR_1), VAR_6);
 else
  FUNC_2(VAR_8->IO_ADDR_W + (1 << VAR_0), VAR_6);


 FUNC_0();
 FUNC_1(VAR_4);
}
