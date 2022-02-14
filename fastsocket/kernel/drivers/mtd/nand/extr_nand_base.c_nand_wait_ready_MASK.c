
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {scalar_t__ (* dev_ready ) (struct mtd_info*) ;} ;
struct mtd_info {struct nand_chip* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct mtd_info*) ;
 scalar_t__ FUNC_2 (int,unsigned long) ;
 int FUNC_3 () ;

void FUNC_4(struct mtd_info *VAR_4)
{
 struct nand_chip *VAR_5 = VAR_4->priv;
 unsigned long VAR_6 = VAR_2 + 2;

 FUNC_0(VAR_3, VAR_0);

 do {
  if (VAR_5->dev_ready(VAR_4))
   break;
  FUNC_3();
 } while (FUNC_2(VAR_2, VAR_6));
 FUNC_0(VAR_3, VAR_1);
}
