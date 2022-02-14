
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int oob_poi; int (* read_buf ) (struct mtd_info*,int ,int ) ;int (* cmdfunc ) (struct mtd_info*,int ,int ,int) ;} ;
struct mtd_info {int oobsize; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int ,int ,int) ;
 int FUNC_1 (struct mtd_info*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, struct nand_chip *VAR_2,
        int VAR_3, int VAR_4)
{
 if (VAR_4) {
  VAR_2->cmdfunc(VAR_1, VAR_0, 0, VAR_3);
  VAR_4 = 0;
 }
 VAR_2->read_buf(VAR_1, VAR_2->oob_poi, VAR_1->oobsize);
 return VAR_4;
}
