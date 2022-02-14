
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int (* waitfunc ) (struct mtd_info*,struct nand_chip*) ;int (* cmdfunc ) (struct mtd_info*,int ,int,int) ;int (* write_buf ) (struct mtd_info*,int const*,int) ;int * oob_poi; } ;
struct mtd_info {int oobsize; int writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtd_info*,int ,int,int) ;
 int FUNC_1 (struct mtd_info*,int const*,int) ;
 int FUNC_2 (struct mtd_info*,int ,int,int) ;
 int FUNC_3 (struct mtd_info*,struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_4, struct nand_chip *VAR_5,
         int VAR_6)
{
 int VAR_7 = 0;
 const uint8_t *VAR_8 = VAR_5->oob_poi;
 int VAR_9 = VAR_4->oobsize;

 VAR_5->cmdfunc(VAR_4, VAR_2, VAR_4->writesize, VAR_6);
 VAR_5->write_buf(VAR_4, VAR_8, VAR_9);

 VAR_5->cmdfunc(VAR_4, VAR_1, -1, -1);

 VAR_7 = VAR_5->waitfunc(VAR_4, VAR_5);

 return VAR_7 & VAR_3 ? -VAR_0 : 0;
}
