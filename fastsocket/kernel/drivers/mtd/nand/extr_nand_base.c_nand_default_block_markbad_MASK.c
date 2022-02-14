
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int len; int ooblen; int ooboffs; int * oobbuf; int * datbuf; } ;
struct nand_chip {int bbt_erase_shift; int* bbt; int options; int badblockpos; TYPE_2__ ops; } ;
struct TYPE_3__ {int badblocks; } ;
struct mtd_info {TYPE_1__ ecc_stats; scalar_t__ oobsize; struct nand_chip* priv; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,int,TYPE_2__*) ;
 int FUNC_1 (struct nand_chip*,struct mtd_info*,int ) ;
 int FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (struct mtd_info*,int) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_2, loff_t VAR_3)
{
 struct nand_chip *VAR_4 = VAR_2->priv;
 uint8_t VAR_5[2] = { 0, 0 };
 int VAR_6, VAR_7;


 VAR_6 = (int)(VAR_3 >> VAR_4->bbt_erase_shift);
 if (VAR_4->bbt)
  VAR_4->bbt[VAR_6 >> 2] |= 0x01 << ((VAR_6 & 0x03) << 1);


 if (VAR_4->options & VAR_1)
  VAR_7 = FUNC_3(VAR_2, VAR_3);
 else {



  FUNC_1(VAR_4, VAR_2, VAR_0);
  VAR_3 += VAR_2->oobsize;
  VAR_4->ops.len = VAR_4->ops.ooblen = 2;
  VAR_4->ops.datbuf = ((void*)0);
  VAR_4->ops.oobbuf = VAR_5;
  VAR_4->ops.ooboffs = VAR_4->badblockpos & ~0x01;

  VAR_7 = FUNC_0(VAR_2, VAR_3, &VAR_4->ops);
  FUNC_2(VAR_2);
 }
 if (!VAR_7)
  VAR_2->ecc_stats.badblocks++;

 return VAR_7;
}
