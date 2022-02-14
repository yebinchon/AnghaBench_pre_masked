
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int size; int bytes; int (* correct ) (struct mtd_info*,int *,int *,int *) ;int (* calculate ) (struct mtd_info*,int *,int *) ;TYPE_1__* layout; } ;
struct nand_chip {int options; TYPE_3__* buffers; TYPE_2__ ecc; int * oob_poi; int (* read_buf ) (struct mtd_info*,int *,int) ;int (* cmdfunc ) (struct mtd_info*,int ,int,int) ;} ;
struct TYPE_8__ {int corrected; int failed; } ;
struct mtd_info {int writesize; int oobsize; TYPE_4__ ecc_stats; } ;
struct TYPE_7__ {int * ecccalc; int * ecccode; } ;
struct TYPE_5__ {int* eccpos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,int ,int,int) ;
 int FUNC_1 (struct mtd_info*,int *,int) ;
 int FUNC_2 (struct mtd_info*,int *,int *) ;
 int FUNC_3 (struct mtd_info*,int ,int,int) ;
 int FUNC_4 (struct mtd_info*,int *,int) ;
 int FUNC_5 (struct mtd_info*,int ,int,int) ;
 int FUNC_6 (struct mtd_info*,int *,int) ;
 int FUNC_7 (struct mtd_info*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_8(struct mtd_info *VAR_2, struct nand_chip *VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint8_t *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 uint32_t *VAR_10 = VAR_3->ecc.layout->eccpos;
 uint8_t *VAR_11;
 int VAR_12, VAR_13, VAR_14 = 0;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19 = (VAR_3->options & VAR_0) ? 2 : 1;


 VAR_7 = VAR_4 / VAR_3->ecc.size;
 VAR_8 = (VAR_4 + VAR_5 - 1) / VAR_3->ecc.size;
 VAR_9 = VAR_8 - VAR_7 + 1;


 VAR_15 = VAR_9 * VAR_3->ecc.size;
 VAR_16 = VAR_9 * VAR_3->ecc.bytes;

 VAR_12 = VAR_7 * VAR_3->ecc.size;

 if (VAR_12 != 0)
  VAR_3->cmdfunc(VAR_2, VAR_1, VAR_12, -1);

 VAR_11 = VAR_6 + VAR_12;
 VAR_3->read_buf(VAR_2, VAR_11, VAR_15);


 for (VAR_13 = 0; VAR_13 < VAR_16 ; VAR_13 += VAR_3->ecc.bytes, VAR_11 += VAR_3->ecc.size)
  VAR_3->ecc.calculate(VAR_2, VAR_11, &VAR_3->buffers->ecccalc[VAR_13]);




 for (VAR_13 = 0; VAR_13 < VAR_16 - 1; VAR_13++) {
  if (VAR_10[VAR_13 + VAR_7 * VAR_3->ecc.bytes] + 1 !=
   VAR_10[VAR_13 + VAR_7 * VAR_3->ecc.bytes + 1]) {
   VAR_14 = 1;
   break;
  }
 }
 if (VAR_14) {
  VAR_3->cmdfunc(VAR_2, VAR_1, VAR_2->writesize, -1);
  VAR_3->read_buf(VAR_2, VAR_3->oob_poi, VAR_2->oobsize);
 } else {


  VAR_18 = VAR_10[VAR_7 * VAR_3->ecc.bytes] & ~(VAR_19 - 1);
  VAR_17 = VAR_16;
  if (VAR_10[VAR_7 * VAR_3->ecc.bytes] & (VAR_19 - 1))
   VAR_17++;
  if (VAR_10[(VAR_7 + VAR_9) * VAR_3->ecc.bytes] & (VAR_19 - 1))
   VAR_17++;

  VAR_3->cmdfunc(VAR_2, VAR_1, VAR_2->writesize + VAR_18, -1);
  VAR_3->read_buf(VAR_2, &VAR_3->oob_poi[VAR_18], VAR_17);
 }

 for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++)
  VAR_3->buffers->ecccode[VAR_13] = VAR_3->oob_poi[VAR_10[VAR_13 + VAR_7 * VAR_3->ecc.bytes]];

 VAR_11 = VAR_6 + VAR_12;
 for (VAR_13 = 0; VAR_13 < VAR_16 ; VAR_13 += VAR_3->ecc.bytes, VAR_11 += VAR_3->ecc.size) {
  int VAR_20;

  VAR_20 = VAR_3->ecc.correct(VAR_2, VAR_11, &VAR_3->buffers->ecccode[VAR_13], &VAR_3->buffers->ecccalc[VAR_13]);
  if (VAR_20 == -1)
   VAR_2->ecc_stats.failed++;
  else
   VAR_2->ecc_stats.corrected += VAR_20;
 }
 return 0;
}
