
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int (* read_page_raw ) (struct mtd_info*,struct nand_chip*,int *,int) ;int (* read_subpage ) (struct mtd_info*,struct nand_chip*,int,int,int *) ;int (* read_page ) (struct mtd_info*,struct nand_chip*,int *,int) ;TYPE_1__* layout; } ;
struct nand_chip {int phys_erase_shift; int page_shift; int chip_shift; int pagemask; int pagebuf; int options; int (* select_chip ) (struct mtd_info*,int) ;TYPE_3__* buffers; int chip_delay; int dev_ready; TYPE_2__ ecc; int (* cmdfunc ) (struct mtd_info*,int ,int,int) ;} ;
struct mtd_oob_ops {int len; int ooblen; scalar_t__ mode; int retlen; int oobretlen; int * oobbuf; int * datbuf; } ;
struct mtd_ecc_stats {scalar_t__ corrected; scalar_t__ failed; } ;
struct mtd_info {int writesize; int oobsize; struct mtd_ecc_stats ecc_stats; struct nand_chip* priv; } ;
typedef int loff_t ;
struct TYPE_6__ {int * databuf; } ;
struct TYPE_4__ {int oobavail; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct nand_chip*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct nand_chip*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int,int) ;
 int * FUNC_5 (struct nand_chip*,int *,struct mtd_oob_ops*,int) ;
 int FUNC_6 (struct mtd_info*) ;
 int FUNC_7 (struct mtd_info*,int) ;
 int FUNC_8 (struct mtd_info*,int ,int,int) ;
 int FUNC_9 (struct mtd_info*,struct nand_chip*,int *,int) ;
 int FUNC_10 (struct mtd_info*,struct nand_chip*,int,int,int *) ;
 int FUNC_11 (struct mtd_info*,struct nand_chip*,int *,int) ;
 int FUNC_12 (struct mtd_info*,int) ;
 int FUNC_13 (struct mtd_info*,int) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct mtd_info *VAR_5, loff_t VAR_6,
       struct mtd_oob_ops *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 struct nand_chip *VAR_14 = VAR_5->priv;
 struct mtd_ecc_stats VAR_15;
 int VAR_16 = (1 << (VAR_14->phys_erase_shift - VAR_14->page_shift)) - 1;
 int VAR_17 = 1;
 int VAR_18 = 0;
 uint32_t VAR_19 = VAR_7->len;
 uint32_t VAR_20 = VAR_7->ooblen;
 uint8_t *VAR_21, *VAR_22, *VAR_23;

 VAR_15 = VAR_5->ecc_stats;

 VAR_8 = (int)(VAR_6 >> VAR_14->chip_shift);
 VAR_14->select_chip(VAR_5, VAR_8);

 VAR_10 = (int)(VAR_6 >> VAR_14->page_shift);
 VAR_9 = VAR_10 & VAR_14->pagemask;

 VAR_11 = (int)(VAR_6 & (VAR_5->writesize - 1));

 VAR_23 = VAR_7->datbuf;
 VAR_22 = VAR_7->oobbuf;

 while(1) {
  VAR_12 = FUNC_4(VAR_5->writesize - VAR_11, VAR_19);
  VAR_13 = (VAR_12 == VAR_5->writesize);


  if (VAR_10 != VAR_14->pagebuf || VAR_22) {
   VAR_21 = VAR_13 ? VAR_23 : VAR_14->buffers->databuf;

   if (FUNC_2(VAR_17)) {
    VAR_14->cmdfunc(VAR_5, VAR_3, 0x00, VAR_9);
    VAR_17 = 0;
   }


   if (FUNC_15(VAR_7->mode == VAR_2))
    VAR_18 = VAR_14->ecc.read_page_raw(VAR_5, VAR_14,
             VAR_21, VAR_9);
   else if (!VAR_13 && FUNC_1(VAR_14) && !VAR_22)
    VAR_18 = VAR_14->ecc.read_subpage(VAR_5, VAR_14, VAR_11, VAR_12, VAR_21);
   else
    VAR_18 = VAR_14->ecc.read_page(VAR_5, VAR_14, VAR_21,
         VAR_9);
   if (VAR_18 < 0)
    break;


   if (!VAR_13) {
    if (!FUNC_1(VAR_14) && !VAR_22)
     VAR_14->pagebuf = VAR_10;
    FUNC_3(VAR_23, VAR_14->buffers->databuf + VAR_11, VAR_12);
   }

   VAR_23 += VAR_12;

   if (FUNC_15(*VAR_22)) {

    if (VAR_7->mode != VAR_2) {
     int VAR_24 = FUNC_4(VAR_20,
      VAR_14->ecc.layout->oobavail);
     if (VAR_24) {
      VAR_22 = FUNC_5(VAR_14,
       VAR_22, VAR_7, VAR_24);
      VAR_20 -= VAR_24;
     }
    } else
     VAR_23 = FUNC_5(VAR_14,
      VAR_23, VAR_7, VAR_5->oobsize);
   }

   if (!(VAR_14->options & VAR_4)) {







    if (!VAR_14->dev_ready)
     FUNC_14(VAR_14->chip_delay);
    else
     FUNC_6(VAR_5);
   }
  } else {
   FUNC_3(VAR_23, VAR_14->buffers->databuf + VAR_11, VAR_12);
   VAR_23 += VAR_12;
  }

  VAR_19 -= VAR_12;

  if (!VAR_19)
   break;


  VAR_11 = 0;

  VAR_10++;

  VAR_9 = VAR_10 & VAR_14->pagemask;

  if (!VAR_9) {
   VAR_8++;
   VAR_14->select_chip(VAR_5, -1);
   VAR_14->select_chip(VAR_5, VAR_8);
  }




  if (!FUNC_0(VAR_14) || !(VAR_9 & VAR_16))
   VAR_17 = 1;
 }

 VAR_7->retlen = VAR_7->len - (size_t) VAR_19;
 if (VAR_22)
  VAR_7->oobretlen = VAR_7->ooblen - VAR_20;

 if (VAR_18)
  return VAR_18;

 if (VAR_5->ecc_stats.failed - VAR_15.failed)
  return -VAR_0;

 return VAR_5->ecc_stats.corrected - VAR_15.corrected ? -VAR_1 : 0;
}
