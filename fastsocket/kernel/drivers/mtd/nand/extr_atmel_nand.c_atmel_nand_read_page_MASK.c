
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int size; int bytes; int (* correct ) (struct mtd_info*,int *,int *,int *) ;TYPE_1__* layout; } ;
struct nand_chip {int (* read_buf ) (struct mtd_info*,int *,int) ;int (* cmdfunc ) (struct mtd_info*,int ,scalar_t__,int) ;TYPE_2__ ecc; struct atmel_nand_host* priv; int * oob_poi; } ;
struct TYPE_6__ {int corrected; int failed; } ;
struct mtd_info {scalar_t__ writesize; int oobsize; TYPE_3__ ecc_stats; } ;
struct atmel_nand_host {int ecc; } ;
struct TYPE_4__ {scalar_t__* eccpos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct mtd_info*,int *,int) ;
 int FUNC_3 (struct mtd_info*,int ,scalar_t__,int) ;
 int FUNC_4 (struct mtd_info*,int *,int) ;
 int FUNC_5 (struct mtd_info*,int *,int *,int *) ;
 int FUNC_6 (struct mtd_info*,int ,scalar_t__,int) ;
 int FUNC_7 (struct mtd_info*,int *,int) ;

__attribute__((used)) static int FUNC_8(struct mtd_info *VAR_3,
  struct nand_chip *VAR_4, uint8_t *VAR_5, int VAR_6)
{
 int VAR_7 = VAR_4->ecc.size;
 int VAR_8 = VAR_4->ecc.bytes;
 uint32_t *VAR_9 = VAR_4->ecc.layout->eccpos;
 uint8_t *VAR_10 = VAR_5;
 uint8_t *VAR_11 = VAR_4->oob_poi;
 uint8_t *VAR_12;
 int VAR_13;
 if (FUNC_0()) {
  struct atmel_nand_host *VAR_14 = VAR_4->priv;
  FUNC_1(VAR_14->ecc, VAR_1, VAR_0);
 }


 VAR_4->read_buf(VAR_3, VAR_10, VAR_7);


 if (VAR_9[0] != 0) {






  VAR_4->cmdfunc(VAR_3, VAR_2,
    VAR_3->writesize + VAR_9[0], -1);
 }


 VAR_12 = VAR_11 + VAR_9[0];
 VAR_4->read_buf(VAR_3, VAR_12, VAR_8);


 VAR_13 = VAR_4->ecc.correct(VAR_3, VAR_10, VAR_11, ((void*)0));

 if (VAR_13 < 0)
  VAR_3->ecc_stats.failed++;
 else
  VAR_3->ecc_stats.corrected += VAR_13;


 VAR_4->cmdfunc(VAR_3, VAR_2, VAR_3->writesize, -1);


 VAR_4->read_buf(VAR_3, VAR_11, VAR_3->oobsize);

 return 0;
}
