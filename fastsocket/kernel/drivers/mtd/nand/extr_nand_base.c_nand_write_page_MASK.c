
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int (* write_page ) (struct mtd_info*,struct nand_chip*,int const*) ;int (* write_page_raw ) (struct mtd_info*,struct nand_chip*,int const*) ;} ;
struct nand_chip {int options; int (* waitfunc ) (struct mtd_info*,struct nand_chip*) ;int (* errstat ) (struct mtd_info*,struct nand_chip*,int ,int,int) ;scalar_t__ (* verify_buf ) (struct mtd_info*,int const*,int ) ;int (* cmdfunc ) (struct mtd_info*,int ,int,int) ;TYPE_1__ ecc; } ;
struct mtd_info {int writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mtd_info*,int ,int,int) ;
 scalar_t__ FUNC_1 (struct mtd_info*,int const*,int ) ;
 int FUNC_2 (struct mtd_info*,struct nand_chip*,int const*) ;
 int FUNC_3 (struct mtd_info*,struct nand_chip*,int const*) ;
 int FUNC_4 (struct mtd_info*,int ,int,int) ;
 int FUNC_5 (struct mtd_info*,struct nand_chip*) ;
 int FUNC_6 (struct mtd_info*,struct nand_chip*,int ,int,int) ;
 int FUNC_7 (struct mtd_info*,int ,int,int) ;
 int FUNC_8 (struct mtd_info*,struct nand_chip*) ;
 int FUNC_9 (struct mtd_info*,int ,int,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct mtd_info *VAR_8, struct nand_chip *VAR_9,
      const uint8_t *VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 int VAR_14;

 VAR_9->cmdfunc(VAR_8, VAR_6, 0x00, VAR_11);

 if (FUNC_10(VAR_13))
  VAR_9->ecc.write_page_raw(VAR_8, VAR_9, VAR_10);
 else
  VAR_9->ecc.write_page(VAR_8, VAR_9, VAR_10);





 VAR_12 = 0;

 if (!VAR_12 || !(VAR_9->options & VAR_2)) {

  VAR_9->cmdfunc(VAR_8, VAR_4, -1, -1);
  VAR_14 = VAR_9->waitfunc(VAR_8, VAR_9);




  if ((VAR_14 & VAR_7) && (VAR_9->errstat))
   VAR_14 = VAR_9->errstat(VAR_8, VAR_9, VAR_1, VAR_14,
            VAR_11);

  if (VAR_14 & VAR_7)
   return -VAR_0;
 } else {
  VAR_9->cmdfunc(VAR_8, VAR_3, -1, -1);
  VAR_14 = VAR_9->waitfunc(VAR_8, VAR_9);
 }
 return 0;
}
