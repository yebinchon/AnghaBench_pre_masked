
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
struct TYPE_7__ {int size; int bytes; int steps; int total; int (* correct ) (struct mtd_info*,int *,int *,int *) ;int (* calculate ) (struct mtd_info*,int *,int *) ;int (* read_page_raw ) (struct mtd_info*,struct nand_chip*,int *,int) ;TYPE_2__* layout; } ;
struct nand_chip {TYPE_3__ ecc; int * oob_poi; TYPE_1__* buffers; } ;
struct TYPE_8__ {int corrected; int failed; } ;
struct mtd_info {TYPE_4__ ecc_stats; } ;
struct TYPE_6__ {size_t* eccpos; } ;
struct TYPE_5__ {int * ecccode; int * ecccalc; } ;


 int FUNC_0 (struct mtd_info*,struct nand_chip*,int *,int) ;
 int FUNC_1 (struct mtd_info*,int *,int *) ;
 int FUNC_2 (struct mtd_info*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_0, struct nand_chip *VAR_1,
    uint8_t *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = VAR_1->ecc.size;
 int VAR_6 = VAR_1->ecc.bytes;
 int VAR_7 = VAR_1->ecc.steps;
 uint8_t *VAR_8 = VAR_2;
 uint8_t *VAR_9 = VAR_1->buffers->ecccalc;
 uint8_t *VAR_10 = VAR_1->buffers->ecccode;
 uint32_t *VAR_11 = VAR_1->ecc.layout->eccpos;

 VAR_1->ecc.read_page_raw(VAR_0, VAR_1, VAR_2, VAR_3);

 for (VAR_4 = 0; VAR_7; VAR_7--, VAR_4 += VAR_6, VAR_8 += VAR_5)
  VAR_1->ecc.calculate(VAR_0, VAR_8, &VAR_9[VAR_4]);

 for (VAR_4 = 0; VAR_4 < VAR_1->ecc.total; VAR_4++)
  VAR_10[VAR_4] = VAR_1->oob_poi[VAR_11[VAR_4]];

 VAR_7 = VAR_1->ecc.steps;
 VAR_8 = VAR_2;

 for (VAR_4 = 0 ; VAR_7; VAR_7--, VAR_4 += VAR_6, VAR_8 += VAR_5) {
  int VAR_12;

  VAR_12 = VAR_1->ecc.correct(VAR_0, VAR_8, &VAR_10[VAR_4], &VAR_9[VAR_4]);
  if (VAR_12 < 0)
   VAR_0->ecc_stats.failed++;
  else
   VAR_0->ecc_stats.corrected += VAR_12;
 }
 return 0;
}
