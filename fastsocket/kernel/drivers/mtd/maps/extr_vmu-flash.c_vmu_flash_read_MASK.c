
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct vmu_cache {scalar_t__ block; scalar_t__ buffer; scalar_t__ jiffies_atc; scalar_t__ valid; } ;
struct vmu_block {scalar_t__ num; size_t ofs; } ;
struct mtd_info {struct mdev_part* priv; } ;
struct memcard {int blocklen; TYPE_1__* parts; } ;
struct mdev_part {int partition; struct maple_device* mdev; } ;
struct maple_device {int dummy; } ;
typedef size_t loff_t ;
struct TYPE_2__ {int numblocks; struct vmu_cache* pcache; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vmu_block*) ;
 struct memcard* FUNC_1 (struct maple_device*) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (int *,unsigned char,int) ;
 struct vmu_block* FUNC_4 (size_t,struct mtd_info*,int) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 unsigned char FUNC_6 (size_t,int*,struct mtd_info*) ;

__attribute__((used)) static int FUNC_7(struct mtd_info *VAR_4, loff_t VAR_5, size_t VAR_6,
 size_t *VAR_7, u_char *VAR_8)
{
 struct maple_device *VAR_9;
 struct memcard *VAR_10;
 struct mdev_part *VAR_11;
 struct vmu_cache *VAR_12;
 struct vmu_block *VAR_13;
 int VAR_14 = 0, VAR_15, VAR_16, VAR_17, VAR_18;
 unsigned char VAR_19;

 if (VAR_6 < 1)
  return -VAR_0;

 VAR_11 = VAR_4->priv;
 VAR_9 = VAR_11->mdev;
 VAR_16 = VAR_11->partition;
 VAR_10 = FUNC_1(VAR_9);

 VAR_18 = VAR_10->parts[VAR_16].numblocks;
 if (VAR_5 + VAR_6 > VAR_18 * VAR_10->blocklen)
  VAR_6 = VAR_18 * VAR_10->blocklen - VAR_5;
 if (VAR_6 == 0)
  return -VAR_0;

 VAR_12 = VAR_10->parts[VAR_16].pcache;
 do {
  VAR_13 = FUNC_4(VAR_5 + VAR_14, VAR_4, VAR_16);
  if (!VAR_13)
   return -VAR_1;

  if (VAR_12->valid &&
   FUNC_5(VAR_3, VAR_12->jiffies_atc + VAR_2) &&
   (VAR_12->block == VAR_13->num)) {

   VAR_17 = VAR_10->blocklen - VAR_13->ofs;
   if (VAR_13->ofs + VAR_6 - VAR_14 < VAR_10->blocklen) {

    FUNC_2(VAR_8 + VAR_14,
     VAR_12->buffer + VAR_13->ofs,
     VAR_6 - VAR_14);
    VAR_14 = VAR_6;
   } else {

    FUNC_2(VAR_8 + VAR_14, VAR_12->buffer +
     VAR_13->ofs, VAR_17);
    VAR_14 += VAR_17;
   }
  } else {




   VAR_19 = FUNC_6(VAR_5 + VAR_14, &VAR_15, VAR_4);
   if (VAR_15) {
    *VAR_7 = VAR_14;
    FUNC_0(VAR_13);
    return VAR_19;
   }
   FUNC_3(VAR_8 + VAR_14, VAR_19, 1);
   VAR_14++;
  }
  FUNC_0(VAR_13);
 } while (VAR_6 > VAR_14);
 *VAR_7 = VAR_14;

 return 0;
}
