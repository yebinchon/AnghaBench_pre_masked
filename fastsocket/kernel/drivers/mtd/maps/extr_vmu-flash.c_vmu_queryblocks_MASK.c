
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmupart {unsigned short user_blocks; unsigned short root_block; int numblocks; struct vmu_cache* name; struct vmu_cache* pcache; } ;
struct vmu_cache {size_t partition; struct maple_device* mdev; } ;
struct mtd_info {int type; int flags; int size; int erasesize; int writesize; struct vmu_cache* priv; int owner; int sync; int read; int write; struct vmu_cache* name; } ;
struct memcard {unsigned short tempA; unsigned short tempB; size_t partition; int blocklen; size_t partitions; struct mtd_info* mtd; struct vmupart* parts; } ;
struct mdev_part {size_t partition; struct maple_device* mdev; } ;
struct mapleq {TYPE_1__* recvbuf; struct maple_device* dev; } ;
struct maple_device {int port; int unit; int dev; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int,int,int) ;
 int FUNC_3 (int *,char*,size_t,unsigned short,unsigned short) ;
 int FUNC_4 (struct vmu_cache*) ;
 void* FUNC_5 (int,int ) ;
 struct vmu_cache* FUNC_6 (int,int ) ;
 int FUNC_7 (struct maple_device*,int ,int ,int,int *) ;
 struct memcard* FUNC_8 (struct maple_device*) ;
 int FUNC_9 (struct maple_device*,void (*) (struct mapleq*),int ,int ) ;
 int FUNC_10 (struct vmu_cache*,char*,int,int,size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_11(struct mapleq *VAR_9)
{
 struct maple_device *VAR_10;
 unsigned short *VAR_11;
 struct memcard *VAR_12;
 __be32 VAR_13;
 struct vmu_cache *VAR_14;
 struct mdev_part *VAR_15;
 struct mtd_info *VAR_16;
 struct vmupart *VAR_17;
 int VAR_18;

 VAR_10 = VAR_9->dev;
 VAR_12 = FUNC_8(VAR_10);
 VAR_11 = (unsigned short *) (VAR_9->recvbuf->buf);
 VAR_12->tempA = VAR_11[12];
 VAR_12->tempB = VAR_11[6];

 FUNC_3(&VAR_10->dev, "VMU device at partition %d has %d user "
  "blocks with a root block at %d\n", VAR_12->partition,
  VAR_12->tempA, VAR_12->tempB);

 VAR_17 = &VAR_12->parts[VAR_12->partition];
 VAR_17->user_blocks = VAR_12->tempA;
 VAR_17->root_block = VAR_12->tempB;
 VAR_17->numblocks = VAR_12->tempB + 1;
 VAR_17->name = FUNC_5(12, VAR_0);
 if (!VAR_17->name)
  goto fail_name;

 FUNC_10(VAR_17->name, "vmu%d.%d.%d",
  VAR_10->port, VAR_10->unit, VAR_12->partition);
 VAR_16 = &VAR_12->mtd[VAR_12->partition];
 VAR_16->name = VAR_17->name;
 VAR_16->type = 8;
 VAR_16->flags = VAR_4|VAR_3;
 VAR_16->size = VAR_17->numblocks * VAR_12->blocklen;
 VAR_16->erasesize = VAR_12->blocklen;
 VAR_16->write = VAR_8;
 VAR_16->read = VAR_6;
 VAR_16->sync = VAR_7;
 VAR_16->writesize = VAR_12->blocklen;

 VAR_15 = FUNC_5(sizeof(struct mdev_part), VAR_0);
 if (!VAR_15)
  goto fail_mpart;

 VAR_15->mdev = VAR_10;
 VAR_15->partition = VAR_12->partition;
 VAR_16->priv = VAR_15;
 VAR_16->owner = VAR_5;

 VAR_14 = FUNC_6(sizeof(struct vmu_cache), VAR_0);
 if (!VAR_14)
  goto fail_cache_create;
 VAR_17->pcache = VAR_14;

 VAR_18 = FUNC_0(VAR_16);
 if (VAR_18)
  goto fail_mtd_register;

 FUNC_9(VAR_10, ((void*)0), 0,
  VAR_2);





 if (++VAR_12->partition < VAR_12->partitions) {
  VAR_13 = FUNC_1(VAR_12->partition << 24);
  FUNC_9(VAR_10, FUNC_11, 0,
   VAR_2);
  FUNC_7(VAR_10, VAR_2,
   VAR_1, 2, &VAR_13);
 }
 return;

fail_mtd_register:
 FUNC_2(&VAR_10->dev, "Could not register maple device at (%d, %d)"
  "error is 0x%X\n", VAR_10->port, VAR_10->unit, VAR_18);
 for (VAR_18 = 0; VAR_18 <= VAR_12->partition; VAR_18++) {
  FUNC_4(((VAR_12->parts)[VAR_18]).pcache);
  ((VAR_12->parts)[VAR_18]).pcache = ((void*)0);
 }
fail_cache_create:
fail_mpart:
 for (VAR_18 = 0; VAR_18 <= VAR_12->partition; VAR_18++) {
  FUNC_4(((VAR_12->mtd)[VAR_18]).priv);
  ((VAR_12->mtd)[VAR_18]).priv = ((void*)0);
 }
 FUNC_9(VAR_10, ((void*)0), 0,
  VAR_2);
 FUNC_4(VAR_17->name);
fail_name:
 return;
}
