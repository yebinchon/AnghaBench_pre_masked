
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_7__ {int size; int bytes; int steps; int total; int (* correct ) (struct mtd_info*,int *,int *,int *) ;int (* calculate ) (struct mtd_info*,int *,int *) ;int (* hwctl ) (struct mtd_info*,int ) ;TYPE_2__* layout; } ;
struct nand_chip {TYPE_3__ ecc; int * oob_poi; int (* read_buf ) (struct mtd_info*,int *,int) ;TYPE_1__* buffers; } ;
struct TYPE_8__ {int corrected; int failed; } ;
struct mtd_info {int oobsize; TYPE_4__ ecc_stats; } ;
struct TYPE_6__ {size_t* eccpos; } ;
struct TYPE_5__ {int * ecccode; int * ecccalc; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int ) ;
 int FUNC_1 (struct mtd_info*,int *,int) ;
 int FUNC_2 (struct mtd_info*,int *,int *) ;
 int FUNC_3 (struct mtd_info*,int *,int) ;
 int FUNC_4 (struct mtd_info*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_1, struct nand_chip *VAR_2,
    uint8_t *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = VAR_2->ecc.size;
 int VAR_7 = VAR_2->ecc.bytes;
 int VAR_8 = VAR_2->ecc.steps;
 uint8_t *VAR_9 = VAR_3;
 uint8_t *VAR_10 = VAR_2->buffers->ecccalc;
 uint8_t *VAR_11 = VAR_2->buffers->ecccode;
 uint32_t *VAR_12 = VAR_2->ecc.layout->eccpos;

 for (VAR_5 = 0; VAR_8; VAR_8--, VAR_5 += VAR_7, VAR_9 += VAR_6) {
  VAR_2->ecc.hwctl(VAR_1, VAR_0);
  VAR_2->read_buf(VAR_1, VAR_9, VAR_6);
  VAR_2->ecc.calculate(VAR_1, VAR_9, &VAR_10[VAR_5]);
 }
 VAR_2->read_buf(VAR_1, VAR_2->oob_poi, VAR_1->oobsize);

 for (VAR_5 = 0; VAR_5 < VAR_2->ecc.total; VAR_5++)
  VAR_11[VAR_5] = VAR_2->oob_poi[VAR_12[VAR_5]];

 VAR_8 = VAR_2->ecc.steps;
 VAR_9 = VAR_3;

 for (VAR_5 = 0 ; VAR_8; VAR_8--, VAR_5 += VAR_7, VAR_9 += VAR_6) {
  int VAR_13;

  VAR_13 = VAR_2->ecc.correct(VAR_1, VAR_9, &VAR_11[VAR_5], &VAR_10[VAR_5]);
  if (VAR_13 < 0)
   VAR_1->ecc_stats.failed++;
  else
   VAR_1->ecc_stats.corrected += VAR_13;
 }
 return 0;
}
