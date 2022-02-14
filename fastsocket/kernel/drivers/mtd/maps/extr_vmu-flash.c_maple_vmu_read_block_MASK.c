
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmu_cache {int valid; unsigned char* buffer; unsigned int block; int jiffies_atc; } ;
struct mtd_info {struct mdev_part* priv; } ;
struct memcard {int blocklen; int readcnt; unsigned char* blockread; TYPE_1__* parts; } ;
struct mdev_part {int partition; struct maple_device* mdev; } ;
struct maple_device {int unit; int port; int dev; TYPE_2__* mq; int busy; int maple_wait; } ;
typedef int __be32 ;
struct TYPE_4__ {unsigned char* sendbuf; int list; } ;
struct TYPE_3__ {struct vmu_cache* pcache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int *,char*,int ,int ,...) ;
 int FUNC_5 (int *,char*,int ,int ,unsigned int) ;
 int VAR_9 ;
 int FUNC_6 (unsigned char*) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct maple_device*,int ,int ,int,int *) ;
 struct memcard* FUNC_10 (struct maple_device*) ;
 int FUNC_11 (struct maple_device*,int ,int ,int ) ;
 int FUNC_12 (unsigned char*,unsigned char*,int) ;
 int VAR_10 ;
 int FUNC_13 (int ,int,int) ;

__attribute__((used)) static int FUNC_14(unsigned int VAR_11, unsigned char *VAR_12,
 struct mtd_info *VAR_13)
{
 struct memcard *VAR_14;
 struct mdev_part *VAR_15;
 struct maple_device *VAR_16;
 int VAR_17, VAR_18 = 0, VAR_19, VAR_20;
 unsigned char *VAR_21 = ((void*)0);
 struct vmu_cache *VAR_22;
 __be32 VAR_23;

 VAR_15 = VAR_13->priv;
 VAR_16 = VAR_15->mdev;
 VAR_17 = VAR_15->partition;
 VAR_14 = FUNC_10(VAR_16);
 VAR_22 = VAR_14->parts[VAR_17].pcache;
 VAR_22->valid = 0;


 if (!VAR_22->buffer) {
  VAR_22->buffer = FUNC_7(VAR_14->blocklen, VAR_5);
  if (!VAR_22->buffer) {
   FUNC_3(&VAR_16->dev, "VMU at (%d, %d) - read fails due"
    " to lack of memory\n", VAR_16->port,
    VAR_16->unit);
   VAR_18 = -VAR_2;
   goto outB;
  }
 }






 for (VAR_19 = 0; VAR_19 < VAR_14->readcnt; VAR_19++) {
  VAR_23 = FUNC_2(VAR_17 << 24 | VAR_19 << 16 | VAR_11);

  if (FUNC_0(&VAR_16->busy) == 1) {
   FUNC_13(VAR_16->maple_wait,
    FUNC_0(&VAR_16->busy) == 0, VAR_6);
   if (FUNC_0(&VAR_16->busy) == 1) {
    FUNC_4(&VAR_16->dev, "VMU at (%d, %d)"
     " is busy\n", VAR_16->port, VAR_16->unit);
    VAR_18 = -VAR_0;
    goto outB;
   }
  }

  FUNC_1(&VAR_16->busy, 1);
  VAR_21 = FUNC_7(VAR_14->blocklen/VAR_14->readcnt, VAR_5);
  if (!VAR_21) {
   VAR_18 = -VAR_2;
   FUNC_1(&VAR_16->busy, 0);
   goto outB;
  }
  VAR_14->blockread = VAR_21;

  FUNC_11(VAR_16, VAR_10, 0,
   VAR_8);
  VAR_18 = FUNC_9(VAR_16, VAR_8,
    VAR_7, 2, &VAR_23);

  VAR_20 = FUNC_13(VAR_16->maple_wait,
   (FUNC_0(&VAR_16->busy) == 0 ||
   FUNC_0(&VAR_16->busy) == 2), VAR_6 * 3);





  if (VAR_18 || FUNC_0(&VAR_16->busy) == 2) {
   if (FUNC_0(&VAR_16->busy) == 2)
    VAR_18 = -VAR_3;
   FUNC_1(&VAR_16->busy, 0);
   VAR_14->blockread = ((void*)0);
   goto outA;
  }
  if (VAR_20 == 0 || VAR_20 == -VAR_4) {
   VAR_14->blockread = ((void*)0);
   FUNC_1(&VAR_16->busy, 0);
   VAR_18 = -VAR_1;
   FUNC_8(&(VAR_16->mq->list));
   FUNC_6(VAR_16->mq->sendbuf);
   VAR_16->mq->sendbuf = ((void*)0);
   if (VAR_20 == -VAR_4) {
    FUNC_5(&VAR_16->dev, "VMU read on (%d, %d)"
     " interrupted on block 0x%X\n",
     VAR_16->port, VAR_16->unit, VAR_11);
   } else
    FUNC_4(&VAR_16->dev, "VMU read on (%d, %d)"
     " timed out on block 0x%X\n",
     VAR_16->port, VAR_16->unit, VAR_11);
   goto outA;
  }

  FUNC_12(VAR_12 + (VAR_14->blocklen/VAR_14->readcnt) * VAR_19, VAR_21,
   VAR_14->blocklen/VAR_14->readcnt);

  FUNC_12(VAR_22->buffer + (VAR_14->blocklen/VAR_14->readcnt) * VAR_19,
   VAR_14->blockread, VAR_14->blocklen/VAR_14->readcnt);
  VAR_14->blockread = ((void*)0);
  VAR_22->block = VAR_11;
  VAR_22->jiffies_atc = VAR_9;
  VAR_22->valid = 1;
  FUNC_6(VAR_21);
 }

 return VAR_18;

outA:
 FUNC_6(VAR_21);
outB:
 return VAR_18;
}
