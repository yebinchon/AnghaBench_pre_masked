
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int bytes; int mode; int write_page; int read_page; int * layout; } ;
struct nand_chip {int chipsize; TYPE_1__ ecc; int * badblock_pattern; } ;
struct sh_flctl {int page_size; scalar_t__ hwecc; void* erase_ADRCNT; void* rw_ADRCNT; struct nand_chip chip; } ;
struct mtd_info {int writesize; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sh_flctl*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct sh_flctl* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_16)
{
 struct sh_flctl *VAR_17 = FUNC_1(VAR_16);
 struct nand_chip *VAR_18 = &VAR_17->chip;

 if (VAR_16->writesize == 512) {
  VAR_17->page_size = 0;
  if (VAR_18->chipsize > (32 << 20)) {

   VAR_17->rw_ADRCNT = VAR_4;
   VAR_17->erase_ADRCNT = VAR_3;
  } else if (VAR_18->chipsize > (2 << 16)) {

   VAR_17->rw_ADRCNT = VAR_3;
   VAR_17->erase_ADRCNT = VAR_2;
  } else {
   VAR_17->rw_ADRCNT = VAR_2;
   VAR_17->erase_ADRCNT = VAR_1;
  }
 } else {
  VAR_17->page_size = 1;
  if (VAR_18->chipsize > (128 << 20)) {

   VAR_17->rw_ADRCNT = VAR_0;
   VAR_17->erase_ADRCNT = VAR_3;
  } else if (VAR_18->chipsize > (8 << 16)) {

   VAR_17->rw_ADRCNT = VAR_4;
   VAR_17->erase_ADRCNT = VAR_2;
  } else {
   VAR_17->rw_ADRCNT = VAR_3;
   VAR_17->erase_ADRCNT = VAR_1;
  }
 }

 if (VAR_17->hwecc) {
  if (VAR_16->writesize == 512) {
   VAR_18->ecc.layout = &VAR_11;
   VAR_18->badblock_pattern = &VAR_13;
  } else {
   VAR_18->ecc.layout = &VAR_12;
   VAR_18->badblock_pattern = &VAR_10;
  }

  VAR_18->ecc.size = 512;
  VAR_18->ecc.bytes = 10;
  VAR_18->ecc.read_page = VAR_14;
  VAR_18->ecc.write_page = VAR_15;
  VAR_18->ecc.mode = VAR_7;


  FUNC_3(FUNC_2(FUNC_0(VAR_17)) | VAR_9 | VAR_5 | VAR_6,
    FUNC_0(VAR_17));
 } else {
  VAR_18->ecc.mode = VAR_8;
 }

 return 0;
}
