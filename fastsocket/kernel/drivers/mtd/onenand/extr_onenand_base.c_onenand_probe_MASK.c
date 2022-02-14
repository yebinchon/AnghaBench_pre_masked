
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int (* read_word ) (scalar_t__) ;int technology; int device_id; int version_id; int dies; int chipsize; int erase_shift; int page_shift; int page_mask; int density_mask; int writesize; scalar_t__ base; int (* write_word ) (int,scalar_t__) ;int (* wait ) (struct mtd_info*,int ) ;} ;
struct mtd_info {int numeraseregions; int writesize; int oobsize; int erasesize; int size; int eraseregions; struct onenand_chip* priv; } ;
struct mtd_erase_region_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct onenand_chip*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct onenand_chip*) ;
 scalar_t__ FUNC_2 (struct onenand_chip*) ;
 scalar_t__ FUNC_3 (struct onenand_chip*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct mtd_info*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct mtd_info*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int,scalar_t__) ;
 int FUNC_17 (int,scalar_t__) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (int,scalar_t__) ;
 int FUNC_21 (struct mtd_info*,int ) ;
 int FUNC_22 (int,scalar_t__) ;
 int FUNC_23 (scalar_t__) ;

__attribute__((used)) static int FUNC_24(struct mtd_info *VAR_15)
{
 struct onenand_chip *VAR_16 = VAR_15->priv;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22;
 int VAR_23;


 VAR_23 = VAR_16->read_word(VAR_16->base + VAR_10);

 VAR_16->write_word((VAR_23 & ~VAR_13 & ~VAR_14), VAR_16->base + VAR_10);


 VAR_16->write_word(VAR_5, VAR_16->base + VAR_4);


 VAR_17 = VAR_16->read_word(VAR_16->base + VAR_4 + 0x0);
 VAR_18 = VAR_16->read_word(VAR_16->base + VAR_4 + 0x2);


 VAR_16->write_word(VAR_6, VAR_16->base + VAR_4);

 VAR_16->wait(VAR_15, VAR_2);


 VAR_16->write_word(VAR_23, VAR_16->base + VAR_10);


 if (FUNC_8(VAR_17))
  return -VAR_1;


 VAR_19 = VAR_16->read_word(VAR_16->base + VAR_9);
 VAR_20 = VAR_16->read_word(VAR_16->base + VAR_8);
 VAR_21 = VAR_16->read_word(VAR_16->base + VAR_12);
 VAR_16->technology = VAR_16->read_word(VAR_16->base + VAR_11);


 if (VAR_19 != VAR_17 || VAR_20 != VAR_18)
  return -VAR_1;


 FUNC_10(VAR_20, VAR_21);
 VAR_16->device_id = VAR_20;
 VAR_16->version_id = VAR_21;

 VAR_22 = FUNC_9(VAR_20);
 if (FUNC_0(VAR_16)) {
  VAR_16->dies = FUNC_2(VAR_16) ? 2 : 1;

  VAR_15->numeraseregions = VAR_16->dies << 1;
  VAR_15->eraseregions = FUNC_6(sizeof(struct mtd_erase_region_info)
     * (VAR_16->dies << 1), VAR_3);
  if (!VAR_15->eraseregions)
   return -VAR_0;
 }





 VAR_16->chipsize = (16 << VAR_22) << 20;



 VAR_15->writesize = VAR_16->read_word(VAR_16->base + VAR_7);

 if (FUNC_3(VAR_16))
  VAR_15->writesize <<= 1;

 VAR_15->oobsize = VAR_15->writesize >> 5;

 VAR_15->erasesize = VAR_15->writesize << 6;





 if (FUNC_0(VAR_16))
  VAR_15->erasesize <<= 1;

 VAR_16->erase_shift = FUNC_4(VAR_15->erasesize) - 1;
 VAR_16->page_shift = FUNC_4(VAR_15->writesize) - 1;
 VAR_16->page_mask = (1 << (VAR_16->erase_shift - VAR_16->page_shift)) - 1;

 if (FUNC_2(VAR_16))
  VAR_16->density_mask = VAR_16->chipsize >> (VAR_16->erase_shift + 1);

 VAR_16->writesize = VAR_15->writesize;



 if (FUNC_0(VAR_16))
  FUNC_5(VAR_15);
 else
  VAR_15->size = VAR_16->chipsize;


 FUNC_7(VAR_15);







 if (FUNC_1(VAR_16)) {
  VAR_15->writesize <<= 1;
  VAR_15->erasesize <<= 1;
 }

 return 0;
}
