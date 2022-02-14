
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_unmap_block_desc_count; int max_unmap_lba_count; } ;
struct se_device {TYPE_2__* transport; TYPE_1__ dev_attrib; } ;
struct se_cmd {int data_length; scalar_t__* t_task_cdb; struct se_device* se_dev; } ;
struct iblock_dev {int ibd_bd; } ;
typedef scalar_t__ sense_reason_t ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {scalar_t__ (* get_blocks ) (struct se_device*) ;int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iblock_dev* FUNC_0 (struct se_device*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*) ;
 scalar_t__ FUNC_4 (unsigned char*) ;
 int FUNC_5 (char*,unsigned long long,int,...) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int,...) ;
 scalar_t__ FUNC_8 (struct se_device*) ;
 int FUNC_9 (struct se_cmd*,int ) ;
 unsigned char* FUNC_10 (struct se_cmd*) ;
 int FUNC_11 (struct se_cmd*) ;

__attribute__((used)) static sense_reason_t
FUNC_12(struct se_cmd *VAR_8)
{
 struct se_device *VAR_9 = VAR_8->se_dev;
 struct iblock_dev *VAR_10 = FUNC_0(VAR_9);
 unsigned char *VAR_11, *VAR_12 = ((void*)0);
 sector_t VAR_13;
 int VAR_14;
 u32 VAR_15;
 sense_reason_t VAR_16 = 0;
 int VAR_17, VAR_18, VAR_19;


 if (VAR_8->t_task_cdb[1])
  return VAR_4;

 if (VAR_8->data_length == 0) {
  FUNC_9(VAR_8, VAR_2);
  return 0;
 }

 if (VAR_8->data_length < 8) {
  FUNC_7("UNMAP parameter list length %u too small\n",
   VAR_8->data_length);
  return VAR_7;
 }

 VAR_11 = FUNC_10(VAR_8);
 if (!VAR_11)
  return VAR_6;

 VAR_17 = FUNC_2(&VAR_11[0]);
 VAR_18 = FUNC_2(&VAR_11[2]);

 VAR_14 = VAR_8->data_length - 8;
 if (VAR_18 > VAR_14)
  FUNC_7("UNMAP parameter list length %u too small, ignoring bd_dl %u\n",
   VAR_8->data_length, VAR_18);
 else
  VAR_14 = VAR_18;

 if (VAR_14 / 16 > VAR_9->dev_attrib.max_unmap_block_desc_count) {
  VAR_16 = VAR_5;
  goto err;
 }


 VAR_12 = &VAR_11[8];
 FUNC_5("UNMAP: Sub: %s Using dl: %u bd_dl: %u size: %u"
  " ptr: %p\n", VAR_9->transport->name, VAR_17, VAR_18, VAR_14, VAR_12);

 while (VAR_14 >= 16) {
  VAR_13 = FUNC_4(&VAR_12[0]);
  VAR_15 = FUNC_3(&VAR_12[8]);
  FUNC_5("UNMAP: Using lba: %llu and range: %u\n",
     (unsigned long long)VAR_13, VAR_15);

  if (VAR_15 > VAR_9->dev_attrib.max_unmap_lba_count) {
   VAR_16 = VAR_5;
   goto err;
  }

  if (VAR_13 + VAR_15 > VAR_9->transport->get_blocks(VAR_9) + 1) {
   VAR_16 = VAR_3;
   goto err;
  }

  VAR_19 = FUNC_1(VAR_10->ibd_bd, VAR_13, VAR_15,
        VAR_0, 0);
  if (VAR_19 < 0) {
   FUNC_6("blkdev_issue_discard() failed: %d\n",
     VAR_19);
   VAR_16 = VAR_6;
   goto err;
  }

  VAR_12 += 16;
  VAR_14 -= 16;
 }

err:
 FUNC_11(VAR_8);
 if (!VAR_16)
  FUNC_9(VAR_8, VAR_1);
 return VAR_16;
}
