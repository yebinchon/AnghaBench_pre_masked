
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
struct TYPE_7__ {int size; int bytes; int steps; int total; int (* correct ) (struct mtd_info*,int *,int *,int *) ;int (* calculate ) (struct mtd_info*,int *,int *) ;int (* hwctl ) (struct mtd_info*,int ) ;TYPE_1__* layout; } ;
struct nand_chip {TYPE_3__ ecc; int (* read_buf ) (struct mtd_info*,int *,int) ;int * oob_poi; int (* cmdfunc ) (struct mtd_info*,int ,int ,int) ;TYPE_2__* buffers; } ;
struct TYPE_8__ {int corrected; int failed; } ;
struct mtd_info {int oobsize; TYPE_4__ ecc_stats; } ;
struct TYPE_6__ {int * ecccalc; int * ecccode; } ;
struct TYPE_5__ {size_t* eccpos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mtd_info*,int ,int ,int) ;
 int FUNC_1 (struct mtd_info*,int *,int) ;
 int FUNC_2 (struct mtd_info*,int ,int ,int) ;
 int FUNC_3 (struct mtd_info*,int ) ;
 int FUNC_4 (struct mtd_info*,int *,int) ;
 int FUNC_5 (struct mtd_info*,int *,int *) ;
 int FUNC_6 (struct mtd_info*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_7(struct mtd_info *VAR_3,
 struct nand_chip *VAR_4, uint8_t *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8 = VAR_4->ecc.size;
 int VAR_9 = VAR_4->ecc.bytes;
 int VAR_10 = VAR_4->ecc.steps;
 uint8_t *VAR_11 = VAR_5;
 uint8_t *VAR_12 = VAR_4->buffers->ecccode;
 uint32_t *VAR_13 = VAR_4->ecc.layout->eccpos;
 uint8_t *VAR_14 = VAR_4->buffers->ecccalc;


 VAR_4->cmdfunc(VAR_3, VAR_1, 0, VAR_6);
 VAR_4->read_buf(VAR_3, VAR_4->oob_poi, VAR_3->oobsize);
 VAR_4->cmdfunc(VAR_3, VAR_0, 0, VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_4->ecc.total; VAR_7++)
  VAR_12[VAR_7] = VAR_4->oob_poi[VAR_13[VAR_7]];

 for (VAR_7 = 0; VAR_10; VAR_10--, VAR_7 += VAR_9, VAR_11 += VAR_8) {
  int VAR_15;

  VAR_4->ecc.hwctl(VAR_3, VAR_2);
  VAR_4->read_buf(VAR_3, VAR_11, VAR_8);
  VAR_4->ecc.calculate(VAR_3, VAR_11, &VAR_14[VAR_7]);

  VAR_15 = VAR_4->ecc.correct(VAR_3, VAR_11, &VAR_12[VAR_7], ((void*)0));
  if (VAR_15 < 0)
   VAR_3->ecc_stats.failed++;
  else
   VAR_3->ecc_stats.corrected += VAR_15;
 }
 return 0;
}
