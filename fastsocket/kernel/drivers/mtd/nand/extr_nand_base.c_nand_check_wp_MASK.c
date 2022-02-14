
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int (* read_byte ) (struct mtd_info*) ;int (* cmdfunc ) (struct mtd_info*,int ,int,int) ;} ;
struct mtd_info {struct nand_chip* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,int ,int,int) ;
 int FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2)
{
 struct nand_chip *VAR_3 = VAR_2->priv;

 VAR_3->cmdfunc(VAR_2, VAR_0, -1, -1);
 return (VAR_3->read_byte(VAR_2) & VAR_1) ? 0 : 1;
}
