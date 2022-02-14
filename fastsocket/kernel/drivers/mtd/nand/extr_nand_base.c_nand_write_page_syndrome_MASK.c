
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_2__ {int size; int bytes; int steps; int prepad; int postpad; int (* calculate ) (struct mtd_info*,int const*,int const*) ;int (* hwctl ) (struct mtd_info*,int ) ;} ;
struct nand_chip {int (* write_buf ) (struct mtd_info*,int const*,int) ;int const* oob_poi; TYPE_1__ ecc; } ;
struct mtd_info {int oobsize; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int ) ;
 int FUNC_1 (struct mtd_info*,int const*,int) ;
 int FUNC_2 (struct mtd_info*,int const*,int) ;
 int FUNC_3 (struct mtd_info*,int const*,int const*) ;
 int FUNC_4 (struct mtd_info*,int const*,int) ;
 int FUNC_5 (struct mtd_info*,int const*,int) ;
 int FUNC_6 (struct mtd_info*,int const*,int) ;

__attribute__((used)) static void FUNC_7(struct mtd_info *VAR_1,
        struct nand_chip *VAR_2, const uint8_t *VAR_3)
{
 int VAR_4, VAR_5 = VAR_2->ecc.size;
 int VAR_6 = VAR_2->ecc.bytes;
 int VAR_7 = VAR_2->ecc.steps;
 const uint8_t *VAR_8 = VAR_3;
 uint8_t *VAR_9 = VAR_2->oob_poi;

 for (VAR_4 = 0; VAR_7; VAR_7--, VAR_4 += VAR_6, VAR_8 += VAR_5) {

  VAR_2->ecc.hwctl(VAR_1, VAR_0);
  VAR_2->write_buf(VAR_1, VAR_8, VAR_5);

  if (VAR_2->ecc.prepad) {
   VAR_2->write_buf(VAR_1, VAR_9, VAR_2->ecc.prepad);
   VAR_9 += VAR_2->ecc.prepad;
  }

  VAR_2->ecc.calculate(VAR_1, VAR_8, VAR_9);
  VAR_2->write_buf(VAR_1, VAR_9, VAR_6);
  VAR_9 += VAR_6;

  if (VAR_2->ecc.postpad) {
   VAR_2->write_buf(VAR_1, VAR_9, VAR_2->ecc.postpad);
   VAR_9 += VAR_2->ecc.postpad;
  }
 }


 VAR_4 = VAR_1->oobsize - (VAR_9 - VAR_2->oob_poi);
 if (VAR_4)
  VAR_2->write_buf(VAR_1, VAR_9, VAR_4);
}
