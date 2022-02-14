
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int max_unmap_block_desc_count; int unmap_granularity; int max_write_same_len; int is_nonrot; int unmap_granularity_alignment; int max_unmap_lba_count; int hw_queue_depth; int hw_max_sectors; int hw_block_size; } ;
struct se_device {TYPE_2__ dev_attrib; } ;
struct TYPE_3__ {int discard_granularity; int discard_alignment; int max_discard_sectors; } ;
struct request_queue {TYPE_1__ limits; int nr_requests; } ;
struct iblock_dev {int ibd_flags; int * ibd_bio_set; struct block_device* ibd_bd; int ibd_udev_path; int ibd_readonly; } ;
struct block_device {int dummy; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct iblock_dev* FUNC_0 (struct se_device*) ;
 scalar_t__ FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*) ;
 int VAR_7 ;
 struct request_queue* FUNC_3 (struct block_device*) ;
 int FUNC_4 (struct block_device*) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct request_queue*) ;
 scalar_t__ FUNC_8 (struct request_queue*) ;
 struct block_device* FUNC_9 (int ,int,struct iblock_dev*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(struct se_device *VAR_8)
{
 struct iblock_dev *VAR_9 = FUNC_0(VAR_8);
 struct request_queue *VAR_10;
 struct block_device *VAR_11 = ((void*)0);
 fmode_t VAR_12;
 int VAR_13 = -VAR_1;

 if (!(VAR_9->ibd_flags & VAR_5)) {
  FUNC_11("Missing udev_path= parameters for IBLOCK\n");
  return -VAR_0;
 }

 VAR_9->ibd_bio_set = FUNC_5(VAR_6, 0);
 if (!VAR_9->ibd_bio_set) {
  FUNC_11("IBLOCK: Unable to create bioset\n");
  goto out;
 }

 FUNC_10( "IBLOCK: Claiming struct block_device: %s\n",
   VAR_9->ibd_udev_path);

 VAR_12 = VAR_3|VAR_2;
 if (!VAR_9->ibd_readonly)
  VAR_12 |= VAR_4;

 VAR_11 = FUNC_9(VAR_9->ibd_udev_path, VAR_12, VAR_9);
 if (FUNC_1(VAR_11)) {
  VAR_13 = FUNC_2(VAR_11);
  goto out_free_bioset;
 }
 VAR_9->ibd_bd = VAR_11;

 VAR_10 = FUNC_3(VAR_11);

 VAR_8->dev_attrib.hw_block_size = FUNC_4(VAR_11);
 VAR_8->dev_attrib.hw_max_sectors = VAR_7;
 VAR_8->dev_attrib.hw_queue_depth = VAR_10->nr_requests;






 if (FUNC_7(VAR_10)) {
  VAR_8->dev_attrib.max_unmap_lba_count =
    VAR_10->limits.max_discard_sectors;




  VAR_8->dev_attrib.max_unmap_block_desc_count = 1;
  VAR_8->dev_attrib.unmap_granularity =
    VAR_10->limits.discard_granularity >> 9;
  VAR_8->dev_attrib.unmap_granularity_alignment =
    VAR_10->limits.discard_alignment;

  FUNC_10("IBLOCK: BLOCK Discard support available,"
    " disabled by default\n");
 }




 VAR_8->dev_attrib.max_write_same_len = 0xFFFF;

 if (FUNC_8(VAR_10))
  VAR_8->dev_attrib.is_nonrot = 1;

 return 0;

out_free_bioset:
 FUNC_6(VAR_9->ibd_bio_set);
 VAR_9->ibd_bio_set = ((void*)0);
out:
 return VAR_13;
}
