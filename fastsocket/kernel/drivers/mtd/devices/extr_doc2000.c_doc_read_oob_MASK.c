
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mtd_oob_ops {size_t len; scalar_t__ mode; size_t retlen; scalar_t__ ooboffs; int * oobbuf; } ;
struct mtd_info {struct DiskOnChip* priv; } ;
struct Nand {scalar_t__ floor; scalar_t__ chip; } ;
struct DiskOnChip {size_t chipshift; scalar_t__ curfloor; scalar_t__ curchip; int lock; scalar_t__ page256; struct Nand* chips; } ;
typedef size_t loff_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct DiskOnChip*,int ,size_t,int ,int ) ;
 int FUNC_2 (struct DiskOnChip*,int ,int ) ;
 int FUNC_3 (struct DiskOnChip*,int *,size_t) ;
 int FUNC_4 (struct DiskOnChip*,scalar_t__) ;
 int FUNC_5 (struct DiskOnChip*,scalar_t__) ;
 int FUNC_6 (struct DiskOnChip*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct mtd_info *VAR_4, loff_t VAR_5,
   struct mtd_oob_ops *VAR_6)
{
 struct DiskOnChip *VAR_7 = VAR_4->priv;
 int VAR_8 = 0, VAR_9;
 struct Nand *VAR_10;
 uint8_t *VAR_11 = VAR_6->oobbuf;
 size_t VAR_12 = VAR_6->len;

 FUNC_0(VAR_6->mode != VAR_2);

 VAR_5 += VAR_6->ooboffs;

 FUNC_7(&VAR_7->lock);

 VAR_10 = &VAR_7->chips[VAR_5 >> VAR_7->chipshift];

 if (VAR_7->curfloor != VAR_10->floor) {
  FUNC_5(VAR_7, VAR_10->floor);
  FUNC_4(VAR_7, VAR_10->chip);
 } else if (VAR_7->curchip != VAR_10->chip) {
  FUNC_4(VAR_7, VAR_10->chip);
 }
 VAR_7->curfloor = VAR_10->floor;
 VAR_7->curchip = VAR_10->chip;



 if (VAR_7->page256) {
  if (!(VAR_5 & 0x8))
   VAR_5 += 0x100;
  else
   VAR_5 -= 0x8;
 }

 FUNC_2(VAR_7, VAR_3, VAR_1);
 FUNC_1(VAR_7, VAR_0, VAR_5, VAR_1, 0);




 if (VAR_7->page256 && VAR_5 + VAR_12 > (VAR_5 | 0x7) + 1) {
  VAR_8 = (VAR_5 | 0x7) + 1 - VAR_5;
  FUNC_3(VAR_7, VAR_11, VAR_8);

  FUNC_2(VAR_7, VAR_3, VAR_1);
  FUNC_1(VAR_7, VAR_0, VAR_5 & (~0x1ff),
       VAR_1, 0);
 }

 FUNC_3(VAR_7, &VAR_11[VAR_8], VAR_12 - VAR_8);

 VAR_6->retlen = VAR_12;




 VAR_9 = FUNC_6(VAR_7);

 FUNC_8(&VAR_7->lock);
 return VAR_9;

}
