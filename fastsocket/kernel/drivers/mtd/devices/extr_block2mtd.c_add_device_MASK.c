
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct block_device {TYPE_1__* bd_inode; int bd_dev; } ;
struct TYPE_4__ {char* name; int size; int erasesize; int writesize; int index; int owner; struct block2mtd_dev* priv; int read; int sync; int writev; int write; int erase; int flags; int type; } ;
struct block2mtd_dev {TYPE_2__ mtd; int list; struct block_device* blkdev; int write_mutex; } ;
typedef scalar_t__ dev_t ;
struct TYPE_3__ {int i_size; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,char*,int,int) ;
 scalar_t__ FUNC_2 (struct block_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct block2mtd_dev*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_6 (int,int ) ;
 struct block2mtd_dev* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char*) ;
 struct block_device* FUNC_11 (char*,int,int *) ;
 struct block_device* FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (char*,char*,char*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static struct block2mtd_dev *FUNC_15(char *VAR_14, int VAR_15)
{
 struct block_device *VAR_16;
 struct block2mtd_dev *VAR_17;
 char *VAR_18;

 if (!VAR_14)
  return ((void*)0);

 VAR_17 = FUNC_7(sizeof(struct block2mtd_dev), VAR_2);
 if (!VAR_17)
  return ((void*)0);


 VAR_16 = FUNC_11(VAR_14, VAR_0|VAR_1, ((void*)0));

 if (FUNC_2(VAR_16)) {




  dev_t VAR_19 = FUNC_10(VAR_14);
  if (VAR_19) {
   VAR_16 = FUNC_12(VAR_19, VAR_1 | VAR_0);
  }
 }


 if (FUNC_2(VAR_16)) {
  FUNC_0("error: cannot open device %s", VAR_14);
  goto devinit_err;
 }
 VAR_17->blkdev = VAR_16;

 if (FUNC_3(VAR_16->bd_dev) == VAR_3) {
  FUNC_0("attempting to use an MTD device as a block device");
  goto devinit_err;
 }

 FUNC_9(&VAR_17->write_mutex);



 VAR_18 = FUNC_6(sizeof("block2mtd: ") + FUNC_14(VAR_14) + 1,
   VAR_2);
 if (!VAR_18)
  goto devinit_err;

 FUNC_13(VAR_18, "block2mtd: %s", VAR_14);
 VAR_17->mtd.name = VAR_18;

 VAR_17->mtd.size = VAR_17->blkdev->bd_inode->i_size & VAR_6;
 VAR_17->mtd.erasesize = VAR_15;
 VAR_17->mtd.writesize = 1;
 VAR_17->mtd.type = VAR_5;
 VAR_17->mtd.flags = VAR_4;
 VAR_17->mtd.erase = VAR_9;
 VAR_17->mtd.write = VAR_12;
 VAR_17->mtd.writev = VAR_13;
 VAR_17->mtd.sync = VAR_11;
 VAR_17->mtd.read = VAR_10;
 VAR_17->mtd.priv = VAR_17;
 VAR_17->mtd.owner = VAR_7;

 if (FUNC_4(&VAR_17->mtd)) {

  goto devinit_err;
 }
 FUNC_8(&VAR_17->list, &VAR_8);
 FUNC_1("mtd%d: [%s] erase_size = %dKiB [%d]", VAR_17->mtd.index,
   VAR_17->mtd.name + FUNC_14("block2mtd: "),
   VAR_17->mtd.erasesize >> 10, VAR_17->mtd.erasesize);
 return VAR_17;

devinit_err:
 FUNC_5(VAR_17);
 return ((void*)0);
}
