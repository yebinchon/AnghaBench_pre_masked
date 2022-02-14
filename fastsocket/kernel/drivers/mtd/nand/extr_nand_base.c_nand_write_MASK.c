
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {size_t len; size_t retlen; int * oobbuf; int * datbuf; } ;
struct nand_chip {TYPE_1__ ops; } ;
struct mtd_info {scalar_t__ size; struct nand_chip* priv; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,scalar_t__,TYPE_1__*) ;
 int FUNC_1 (struct nand_chip*,struct mtd_info*,int ) ;
 int FUNC_2 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_2, loff_t VAR_3, size_t VAR_4,
     size_t *VAR_5, const uint8_t *VAR_6)
{
 struct nand_chip *VAR_7 = VAR_2->priv;
 int VAR_8;


 if ((VAR_3 + VAR_4) > VAR_2->size)
  return -VAR_0;
 if (!VAR_4)
  return 0;

 FUNC_1(VAR_7, VAR_2, VAR_1);

 VAR_7->ops.len = VAR_4;
 VAR_7->ops.datbuf = (uint8_t *)VAR_6;
 VAR_7->ops.oobbuf = ((void*)0);

 VAR_8 = FUNC_0(VAR_2, VAR_3, &VAR_7->ops);

 *VAR_5 = VAR_7->ops.retlen;

 FUNC_2(VAR_2);

 return VAR_8;
}
