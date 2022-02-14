
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int size; int bytes; int steps; int prepad; int (* correct ) (struct mtd_info*,int *,int *,int *) ;int postpad; int (* hwctl ) (struct mtd_info*,int ) ;} ;
struct nand_chip {int (* read_buf ) (struct mtd_info*,int *,int) ;int * oob_poi; TYPE_2__ ecc; } ;
struct TYPE_3__ {int corrected; int failed; } ;
struct mtd_info {int oobsize; TYPE_1__ ecc_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,int ) ;
 int FUNC_1 (struct mtd_info*,int *,int) ;
 int FUNC_2 (struct mtd_info*,int *,int) ;
 int FUNC_3 (struct mtd_info*,int ) ;
 int FUNC_4 (struct mtd_info*,int *,int) ;
 int FUNC_5 (struct mtd_info*,int *,int *,int *) ;
 int FUNC_6 (struct mtd_info*,int *,int) ;
 int FUNC_7 (struct mtd_info*,int *,int) ;

__attribute__((used)) static int FUNC_8(struct mtd_info *VAR_2, struct nand_chip *VAR_3,
       uint8_t *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = VAR_3->ecc.size;
 int VAR_8 = VAR_3->ecc.bytes;
 int VAR_9 = VAR_3->ecc.steps;
 uint8_t *VAR_10 = VAR_4;
 uint8_t *VAR_11 = VAR_3->oob_poi;

 for (VAR_6 = 0; VAR_9; VAR_9--, VAR_6 += VAR_8, VAR_10 += VAR_7) {
  int VAR_12;

  VAR_3->ecc.hwctl(VAR_2, VAR_0);
  VAR_3->read_buf(VAR_2, VAR_10, VAR_7);

  if (VAR_3->ecc.prepad) {
   VAR_3->read_buf(VAR_2, VAR_11, VAR_3->ecc.prepad);
   VAR_11 += VAR_3->ecc.prepad;
  }

  VAR_3->ecc.hwctl(VAR_2, VAR_1);
  VAR_3->read_buf(VAR_2, VAR_11, VAR_8);
  VAR_12 = VAR_3->ecc.correct(VAR_2, VAR_10, VAR_11, ((void*)0));

  if (VAR_12 < 0)
   VAR_2->ecc_stats.failed++;
  else
   VAR_2->ecc_stats.corrected += VAR_12;

  VAR_11 += VAR_8;

  if (VAR_3->ecc.postpad) {
   VAR_3->read_buf(VAR_2, VAR_11, VAR_3->ecc.postpad);
   VAR_11 += VAR_3->ecc.postpad;
  }
 }


 VAR_6 = VAR_2->oobsize - (VAR_11 - VAR_3->oob_poi);
 if (VAR_6)
  VAR_3->read_buf(VAR_2, VAR_11, VAR_6);

 return 0;
}
