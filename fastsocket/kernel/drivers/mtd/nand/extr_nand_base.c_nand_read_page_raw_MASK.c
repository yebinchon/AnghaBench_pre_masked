
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int * oob_poi; int (* read_buf ) (struct mtd_info*,int *,int ) ;} ;
struct mtd_info {int oobsize; int writesize; } ;


 int FUNC_0 (struct mtd_info*,int *,int ) ;
 int FUNC_1 (struct mtd_info*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, struct nand_chip *VAR_1,
         uint8_t *VAR_2, int VAR_3)
{
 VAR_1->read_buf(VAR_0, VAR_2, VAR_0->writesize);
 VAR_1->read_buf(VAR_0, VAR_1->oob_poi, VAR_0->oobsize);
 return 0;
}
