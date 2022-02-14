
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct gendisk {int dummy; } ;
typedef int sector_t ;
struct TYPE_23__ {unsigned int block_size; int nr_blocks; int raid_level; scalar_t__ heads; scalar_t__ sectors; scalar_t__ cylinders; int busy_configuring; int rev; int model; int vendor; int serial_no; scalar_t__ device_initialized; int LunID; } ;
typedef TYPE_2__ drive_info_struct ;
struct TYPE_24__ {scalar_t__ cciss_read; TYPE_1__* pdev; int num_luns; TYPE_2__** drv; struct gendisk** gendisk; int lock; int cciss_write; } ;
typedef TYPE_3__ ctlr_info_t ;
struct TYPE_22__ {int dev; } ;
typedef TYPE_2__ InquiryData_struct ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_3__*,struct gendisk*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int,int,unsigned int,TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,int,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int,int ,int) ;
 int FUNC_6 (TYPE_3__*,int,int*,unsigned int*) ;
 int FUNC_7 (TYPE_3__*,int,int*,unsigned int*) ;
 int FUNC_8 (TYPE_3__*,int,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,int,int ,int) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*,int) ;
 int FUNC_12 (TYPE_2__*) ;
 TYPE_2__* FUNC_13 (int,int ) ;
 TYPE_2__* FUNC_14 (int,int ) ;
 scalar_t__ FUNC_15 (int ,int ,int) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (struct gendisk*,int) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_20(ctlr_info_t *VAR_8, int VAR_9,
 int VAR_10, int VAR_11)
{
 struct gendisk *VAR_12;
 InquiryData_struct *VAR_13 = ((void*)0);
 unsigned int VAR_14;
 sector_t VAR_15;
 unsigned long VAR_16 = 0;
 int VAR_17 = 0;
 drive_info_struct *VAR_18;


 VAR_13 = FUNC_13(sizeof(InquiryData_struct), VAR_4);
 VAR_18 = FUNC_14(sizeof(*VAR_18), VAR_4);
 if (VAR_13 == ((void*)0) || VAR_18 == ((void*)0))
  goto mem_msg;


 if (VAR_8->cciss_read == VAR_1) {
  FUNC_7(VAR_8, VAR_9,
   &VAR_15, &VAR_14);

 } else {
  FUNC_6(VAR_8, VAR_9,
        &VAR_15, &VAR_14);




  if (VAR_15 == 0xFFFFFFFFULL) {
   FUNC_7(VAR_8, VAR_9,
   &VAR_15, &VAR_14);
   VAR_8->cciss_read = VAR_1;
   VAR_8->cciss_write = VAR_3;
  } else {
   VAR_8->cciss_read = VAR_0;
   VAR_8->cciss_write = VAR_2;
  }
 }

 FUNC_3(VAR_8, VAR_9, VAR_15, VAR_14,
          VAR_13, VAR_18);
 VAR_18->block_size = VAR_14;
 VAR_18->nr_blocks = VAR_15 + 1;

 FUNC_4(VAR_8, VAR_9, VAR_18->vendor,
    VAR_18->model, VAR_18->rev);
 FUNC_5(VAR_8, VAR_9, VAR_18->serial_no,
  sizeof(VAR_18->serial_no));

 FUNC_16(VAR_18->LunID, VAR_8->drv[VAR_9]->LunID,
  sizeof(VAR_18->LunID));


 if (VAR_8->drv[VAR_9]->raid_level != -1 &&
  ((FUNC_15(VAR_18->serial_no,
    VAR_8->drv[VAR_9]->serial_no, 16) == 0) &&
  VAR_18->block_size == VAR_8->drv[VAR_9]->block_size &&
  VAR_18->nr_blocks == VAR_8->drv[VAR_9]->nr_blocks &&
  VAR_18->heads == VAR_8->drv[VAR_9]->heads &&
  VAR_18->sectors == VAR_8->drv[VAR_9]->sectors &&
  VAR_18->cylinders == VAR_8->drv[VAR_9]->cylinders))

   goto freeret;







 if (VAR_8->drv[VAR_9]->raid_level != -1 && VAR_9 != 0) {
  FUNC_11(&VAR_8->pdev->dev, "disk %d has changed.\n", VAR_9);
  FUNC_18(&VAR_8->lock, VAR_16);
  VAR_8->drv[VAR_9]->busy_configuring = 1;
  FUNC_19(&VAR_8->lock, VAR_16);





  VAR_17 = FUNC_9(VAR_8, VAR_9, 0, VAR_11);
 }


 if (VAR_17)
  goto freeret;





 if (VAR_8->drv[VAR_9] == ((void*)0)) {
  VAR_18->device_initialized = 0;
  VAR_8->drv[VAR_9] = VAR_18;
  VAR_18 = ((void*)0);
 } else {

  VAR_8->drv[VAR_9]->block_size = VAR_18->block_size;
  VAR_8->drv[VAR_9]->nr_blocks = VAR_18->nr_blocks;
  VAR_8->drv[VAR_9]->heads = VAR_18->heads;
  VAR_8->drv[VAR_9]->sectors = VAR_18->sectors;
  VAR_8->drv[VAR_9]->cylinders = VAR_18->cylinders;
  VAR_8->drv[VAR_9]->raid_level = VAR_18->raid_level;
  FUNC_16(VAR_8->drv[VAR_9]->serial_no, VAR_18->serial_no, 16);
  FUNC_16(VAR_8->drv[VAR_9]->vendor, VAR_18->vendor,
   VAR_7 + 1);
  FUNC_16(VAR_8->drv[VAR_9]->model, VAR_18->model, VAR_5 + 1);
  FUNC_16(VAR_8->drv[VAR_9]->rev, VAR_18->rev, VAR_6 + 1);
 }

 ++VAR_8->num_luns;
 VAR_12 = VAR_8->gendisk[VAR_9];
 FUNC_17(VAR_12, VAR_8->drv[VAR_9]->nr_blocks);
 FUNC_8(VAR_8, VAR_9, VAR_8->drv[VAR_9]);







 if (VAR_9 || VAR_10) {
  if (FUNC_0(VAR_8, VAR_12, VAR_9) != 0) {
   FUNC_2(VAR_8, VAR_9);
   FUNC_1(VAR_8, VAR_9);
   FUNC_11(&VAR_8->pdev->dev, "could not update disk %d\n",
    VAR_9);
   --VAR_8->num_luns;
  }
 }

freeret:
 FUNC_12(VAR_13);
 FUNC_12(VAR_18);
 return;
mem_msg:
 FUNC_10(&VAR_8->pdev->dev, "out of memory\n");
 goto freeret;
}
