
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct sh_flctl {scalar_t__* hwecc_cant_correct; } ;
struct TYPE_3__ {int size; int bytes; int steps; } ;
struct nand_chip {int (* read_buf ) (struct mtd_info*,int *,int) ;TYPE_1__ ecc; } ;
struct TYPE_4__ {int corrected; int failed; } ;
struct mtd_info {TYPE_2__ ecc_stats; } ;


 struct sh_flctl* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct mtd_info*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, struct nand_chip *VAR_1,
    uint8_t *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = VAR_1->ecc.size;
 int VAR_6 = VAR_1->ecc.bytes;
 int VAR_7 = VAR_1->ecc.steps;
 uint8_t *VAR_8 = VAR_2;
 struct sh_flctl *VAR_9 = FUNC_0(VAR_0);

 for (VAR_4 = 0; VAR_7; VAR_7--, VAR_4 += VAR_6, VAR_8 += VAR_5)
  VAR_1->read_buf(VAR_0, VAR_8, VAR_5);

 for (VAR_4 = 0; VAR_7; VAR_7--, VAR_4 += VAR_6, VAR_8 += VAR_5) {
  if (VAR_9->hwecc_cant_correct[VAR_4])
   VAR_0->ecc_stats.failed++;
  else
   VAR_0->ecc_stats.corrected += 0;
 }

 return 0;
}
