
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_6__ {int size; int bytes; int steps; int total; int (* write_page_raw ) (struct mtd_info*,struct nand_chip*,int const*) ;int (* calculate ) (struct mtd_info*,int const*,int *) ;TYPE_2__* layout; } ;
struct nand_chip {TYPE_3__ ecc; int * oob_poi; TYPE_1__* buffers; } ;
struct mtd_info {int dummy; } ;
struct TYPE_5__ {size_t* eccpos; } ;
struct TYPE_4__ {int * ecccalc; } ;


 int FUNC_0 (struct mtd_info*,int const*,int *) ;
 int FUNC_1 (struct mtd_info*,struct nand_chip*,int const*) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_0, struct nand_chip *VAR_1,
      const uint8_t *VAR_2)
{
 int VAR_3, VAR_4 = VAR_1->ecc.size;
 int VAR_5 = VAR_1->ecc.bytes;
 int VAR_6 = VAR_1->ecc.steps;
 uint8_t *VAR_7 = VAR_1->buffers->ecccalc;
 const uint8_t *VAR_8 = VAR_2;
 uint32_t *VAR_9 = VAR_1->ecc.layout->eccpos;


 for (VAR_3 = 0; VAR_6; VAR_6--, VAR_3 += VAR_5, VAR_8 += VAR_4)
  VAR_1->ecc.calculate(VAR_0, VAR_8, &VAR_7[VAR_3]);

 for (VAR_3 = 0; VAR_3 < VAR_1->ecc.total; VAR_3++)
  VAR_1->oob_poi[VAR_9[VAR_3]] = VAR_7[VAR_3];

 VAR_1->ecc.write_page_raw(VAR_0, VAR_1, VAR_2);
}
