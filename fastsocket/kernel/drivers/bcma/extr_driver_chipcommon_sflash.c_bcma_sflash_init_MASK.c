
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct bcma_sflash_tbl_e {int id; int blocksize; int numblocks; int name; } ;
struct bcma_sflash {int blocksize; int numblocks; int size; int present; int window; } ;
struct bcma_drv_cc {int capabilities; struct bcma_sflash sflash; TYPE_1__* core; } ;
struct bcma_bus {int dummy; } ;
struct TYPE_7__ {struct bcma_sflash* platform_data; } ;
struct TYPE_8__ {TYPE_3__ dev; TYPE_2__* resource; } ;
struct TYPE_6__ {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_5__ {struct bcma_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bcma_drv_cc*,int ) ;
 int FUNC_1 (struct bcma_drv_cc*,int ,int) ;
 int FUNC_2 (struct bcma_bus*,char*,...) ;
 int FUNC_3 (struct bcma_bus*,char*,int ,int,int,int) ;
 struct bcma_sflash_tbl_e* VAR_8 ;
 int FUNC_4 (struct bcma_drv_cc*,int ) ;
 TYPE_4__ VAR_9 ;
 struct bcma_sflash_tbl_e* VAR_10 ;
 struct bcma_sflash_tbl_e* VAR_11 ;

int FUNC_5(struct bcma_drv_cc *VAR_12)
{
 struct bcma_bus *VAR_13 = VAR_12->core->bus;
 struct bcma_sflash *VAR_14 = &VAR_12->sflash;
 struct bcma_sflash_tbl_e *VAR_15;
 u32 VAR_16, VAR_17;

 switch (VAR_12->capabilities & VAR_0) {
 case 128:
  FUNC_4(VAR_12, VAR_3);

  FUNC_1(VAR_12, VAR_1, 0);
  FUNC_4(VAR_12, VAR_4);
  VAR_16 = FUNC_0(VAR_12, VAR_5);

  FUNC_1(VAR_12, VAR_1, 1);
  FUNC_4(VAR_12, VAR_4);
  VAR_17 = FUNC_0(VAR_12, VAR_5);

  switch (VAR_16) {
  case 0xbf:
   for (VAR_15 = VAR_10; VAR_15->name; VAR_15++) {
    if (VAR_15->id == VAR_17)
     break;
   }
   break;
  case 0x13:
   return -VAR_7;
  default:
   for (VAR_15 = VAR_11; VAR_15->name; VAR_15++) {
    if (VAR_15->id == VAR_16)
     break;
   }
   break;
  }
  if (!VAR_15->name) {
   FUNC_2(VAR_13, "Unsupported ST serial flash (id: 0x%X, id2: 0x%X)\n", VAR_16, VAR_17);
   return -VAR_7;
  }

  break;
 case 129:
  FUNC_4(VAR_12, VAR_2);
  VAR_16 = FUNC_0(VAR_12, VAR_5) & 0x3c;

  for (VAR_15 = VAR_8; VAR_15->name; VAR_15++) {
   if (VAR_15->id == VAR_16)
    break;
  }
  if (!VAR_15->name) {
   FUNC_2(VAR_13, "Unsupported Atmel serial flash (id: 0x%X)\n", VAR_16);
   return -VAR_7;
  }

  break;
 default:
  FUNC_2(VAR_13, "Unsupported flash type\n");
  return -VAR_7;
 }

 VAR_14->window = VAR_6;
 VAR_14->blocksize = VAR_15->blocksize;
 VAR_14->numblocks = VAR_15->numblocks;
 VAR_14->size = VAR_14->blocksize * VAR_14->numblocks;
 VAR_14->present = 1;

 FUNC_3(VAR_13, "Found %s serial flash (size: %dKiB, blocksize: 0x%X, blocks: %d)\n",
    VAR_15->name, VAR_14->size / 1024, VAR_14->blocksize,
    VAR_14->numblocks);



 VAR_9.resource[0].end = VAR_9.resource[0].start +
       VAR_14->size;
 VAR_9.dev.platform_data = VAR_14;

 return 0;
}
