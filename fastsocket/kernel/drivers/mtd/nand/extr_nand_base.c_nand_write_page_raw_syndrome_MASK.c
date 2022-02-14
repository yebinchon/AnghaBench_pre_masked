
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_2__ {int size; int bytes; int steps; int prepad; int postpad; } ;
struct nand_chip {int (* write_buf ) (struct mtd_info*,int const*,int) ;int const* oob_poi; TYPE_1__ ecc; int (* read_buf ) (struct mtd_info*,int const*,int) ;} ;
struct mtd_info {int oobsize; } ;


 int FUNC_0 (struct mtd_info*,int const*,int) ;
 int FUNC_1 (struct mtd_info*,int const*,int) ;
 int FUNC_2 (struct mtd_info*,int const*,int) ;
 int FUNC_3 (struct mtd_info*,int const*,int) ;
 int FUNC_4 (struct mtd_info*,int const*,int) ;

__attribute__((used)) static void FUNC_5(struct mtd_info *VAR_0, struct nand_chip *VAR_1,
    const uint8_t *VAR_2)
{
 int VAR_3 = VAR_1->ecc.size;
 int VAR_4 = VAR_1->ecc.bytes;
 uint8_t *VAR_5 = VAR_1->oob_poi;
 int VAR_6, VAR_7;

 for (VAR_6 = VAR_1->ecc.steps; VAR_6 > 0; VAR_6--) {
  VAR_1->write_buf(VAR_0, VAR_2, VAR_3);
  VAR_2 += VAR_3;

  if (VAR_1->ecc.prepad) {
   VAR_1->write_buf(VAR_0, VAR_5, VAR_1->ecc.prepad);
   VAR_5 += VAR_1->ecc.prepad;
  }

  VAR_1->read_buf(VAR_0, VAR_5, VAR_4);
  VAR_5 += VAR_4;

  if (VAR_1->ecc.postpad) {
   VAR_1->write_buf(VAR_0, VAR_5, VAR_1->ecc.postpad);
   VAR_5 += VAR_1->ecc.postpad;
  }
 }

 VAR_7 = VAR_0->oobsize - (VAR_5 - VAR_1->oob_poi);
 if (VAR_7)
  VAR_1->write_buf(VAR_0, VAR_5, VAR_7);
}
