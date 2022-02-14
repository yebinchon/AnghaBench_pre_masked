
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {struct block_device* i_bdev; } ;
struct gendisk {TYPE_2__* fops; } ;
struct file {int f_flags; int f_mode; TYPE_1__* f_mapping; } ;
struct block_device {int bd_inode; struct gendisk* bd_disk; } ;
struct backing_dev_info {int ra_pages; } ;
typedef int loff_t ;
typedef int fmode_t ;
struct TYPE_4__ {int (* compat_ioctl ) (struct block_device*,int ,unsigned int,unsigned long) ;} ;
struct TYPE_3__ {struct inode* host; } ;




 unsigned int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct block_device*) ;
 int FUNC_4 (struct block_device*) ;
 int FUNC_5 (struct block_device*) ;
 int FUNC_6 (struct block_device*) ;
 int FUNC_7 (struct block_device*) ;
 struct backing_dev_info* FUNC_8 (struct block_device*) ;
 int FUNC_9 (struct block_device*,unsigned int,scalar_t__) ;
 long FUNC_10 (struct block_device*,int ,unsigned int,unsigned long) ;
 int FUNC_11 (struct block_device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct block_device*,scalar_t__) ;
 int FUNC_14 (struct block_device*,int ,unsigned int,unsigned long) ;
 long FUNC_15 (struct block_device*,int ,unsigned int,scalar_t__) ;
 long FUNC_16 (struct gendisk*,struct block_device*,scalar_t__) ;
 scalar_t__ FUNC_17 (unsigned long) ;
 long FUNC_18 (unsigned long,int) ;
 long FUNC_19 (unsigned long,int) ;
 long FUNC_20 (unsigned long,int) ;
 long FUNC_21 (unsigned long,int ) ;
 long FUNC_22 (unsigned long,int) ;
 long FUNC_23 (unsigned long,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 () ;
 int FUNC_26 (int ) ;
 int FUNC_27 (struct block_device*,int ,unsigned int,unsigned long) ;
 int FUNC_28 () ;

long FUNC_29(struct file *VAR_10, unsigned VAR_11, unsigned long VAR_12)
{
 int VAR_13 = -VAR_5;
 struct inode *VAR_14 = VAR_10->f_mapping->host;
 struct block_device *VAR_15 = VAR_14->i_bdev;
 struct gendisk *VAR_16 = VAR_15->bd_disk;
 fmode_t VAR_17 = VAR_10->f_mode;
 struct backing_dev_info *VAR_18;
 loff_t VAR_19;





 if (VAR_10->f_flags & VAR_8)
  VAR_17 |= VAR_7;
 else
  VAR_17 &= ~VAR_7;

 switch (VAR_11) {
 case 128:
  return FUNC_16(VAR_16, VAR_15, FUNC_17(VAR_12));
 case 141:
  return FUNC_21(VAR_12, FUNC_6(VAR_15));
 case 143:
  return FUNC_21(VAR_12, FUNC_3(VAR_15));
 case 142:
  return FUNC_21(VAR_12, FUNC_4(VAR_15));
 case 153:
  return FUNC_18(VAR_12, FUNC_0(VAR_15));
 case 149:
  return FUNC_21(VAR_12, FUNC_1(VAR_15));
 case 148:
 case 136:
 case 150:




 case 135:
  return FUNC_10(VAR_15, VAR_17, VAR_11,
    (unsigned long)FUNC_17(VAR_12));
 case 151:
  return FUNC_10(VAR_15, VAR_17, VAR_0,
    (unsigned long)FUNC_17(VAR_12));
 case 140:
  return FUNC_15(VAR_15, VAR_17, VAR_11, FUNC_17(VAR_12));
 case 139:
 case 147:
  if (!VAR_12)
   return -VAR_4;
  VAR_18 = FUNC_8(VAR_15);
  if (VAR_18 == ((void*)0))
   return -VAR_6;
  return FUNC_19(VAR_12,
           (VAR_18->ra_pages * VAR_9) / 512);
 case 137:
  return FUNC_18(VAR_12, FUNC_7(VAR_15) != 0);
 case 152:
  return FUNC_18(VAR_12, FUNC_11(VAR_15));
 case 133:
  return FUNC_18(VAR_12, FUNC_5(VAR_15));
 case 134:
  return FUNC_23(VAR_12,
      FUNC_26(FUNC_2(VAR_15)));
 case 138:
 case 146:
  if (!FUNC_12(VAR_1))
   return -VAR_2;
  VAR_18 = FUNC_8(VAR_15);
  if (VAR_18 == ((void*)0))
   return -VAR_6;
  VAR_18->ra_pages = (VAR_12 * 512) / VAR_9;
  return 0;
 case 145:
  VAR_19 = FUNC_24(VAR_15->bd_inode);
  if ((VAR_19 >> 9) > ~0UL)
   return -VAR_3;
  return FUNC_22(VAR_12, VAR_19 >> 9);

 case 144:
  return FUNC_20(VAR_12, FUNC_24(VAR_15->bd_inode));

 case 132:
  FUNC_25();
  VAR_13 = FUNC_13(VAR_15, FUNC_17(VAR_12));
  FUNC_28();
  return VAR_13;
 case 131:
 case 130:
 case 129:
  FUNC_25();
  VAR_13 = FUNC_9(VAR_15, VAR_11, FUNC_17(VAR_12));
  FUNC_28();
  return VAR_13;
 default:
  if (VAR_16->fops->compat_ioctl)
   VAR_13 = VAR_16->fops->compat_ioctl(VAR_15, VAR_17, VAR_11, VAR_12);
  if (VAR_13 == -VAR_5)
   VAR_13 = FUNC_14(VAR_15, VAR_17, VAR_11, VAR_12);
  return VAR_13;
 }
}
