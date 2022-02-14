
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct loop_device {scalar_t__ lo_state; unsigned int lo_blocksize; int lo_flags; int old_gfp_mask; int lo_disk; TYPE_3__* lo_queue; struct file* lo_backing_file; struct block_device* lo_device; int * lo_thread; int lo_number; int lo_bio_list; scalar_t__ lo_sizelimit; int * ioctl; int transfer; } ;
struct inode {struct block_device* i_bdev; int i_mode; } ;
struct file {int f_mode; TYPE_2__* f_op; struct address_space* f_mapping; } ;
struct block_device {unsigned int bd_block_size; TYPE_1__* bd_disk; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ sector_t ;
typedef int loff_t ;
typedef int fmode_t ;
struct TYPE_6__ {int * unplug_fn; } ;
struct TYPE_5__ {scalar_t__ fsync; int write; } ;
struct TYPE_4__ {struct loop_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct block_device*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 struct file* FUNC_8 (unsigned int) ;
 int FUNC_9 (struct file*) ;
 int FUNC_10 (struct loop_device*,struct file*) ;
 int FUNC_11 (struct block_device*) ;
 int FUNC_12 (struct block_device*,int ,int ) ;
 scalar_t__ FUNC_13 (struct file*) ;
 int * FUNC_14 (int ,struct loop_device*,char*,int ) ;
 int VAR_14 ;
 int * VAR_15 ;
 int FUNC_15 (struct address_space*) ;
 int FUNC_16 (struct address_space*,int) ;
 scalar_t__ VAR_16 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct block_device*,unsigned int) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (struct block_device*,int) ;
 int VAR_17 ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct loop_device *VAR_18, fmode_t VAR_19,
         struct block_device *VAR_20, unsigned int VAR_21)
{
 struct file *VAR_22, *VAR_23;
 struct inode *VAR_24;
 struct address_space *VAR_25;
 unsigned VAR_26;
 int VAR_27 = 0;
 int VAR_28;
 loff_t VAR_29;


 FUNC_4(VAR_11);

 VAR_28 = -VAR_1;
 VAR_22 = FUNC_8(VAR_21);
 if (!VAR_22)
  goto out;

 VAR_28 = -VAR_2;
 if (VAR_18->lo_state != VAR_8)
  goto out_putf;


 VAR_23 = VAR_22;
 while (FUNC_13(VAR_23)) {
  struct loop_device *VAR_30;

  if (VAR_23->f_mapping->host->i_bdev == VAR_20)
   goto out_putf;

  VAR_30 = VAR_23->f_mapping->host->i_bdev->bd_disk->private_data;
  if (VAR_30->lo_state == VAR_8) {
   VAR_28 = -VAR_4;
   goto out_putf;
  }
  VAR_23 = VAR_30->lo_backing_file;
 }

 VAR_25 = VAR_22->f_mapping;
 VAR_24 = VAR_25->host;

 VAR_28 = -VAR_4;
 if (!FUNC_3(VAR_24->i_mode) && !FUNC_2(VAR_24->i_mode))
  goto out_putf;

 if (!(VAR_22->f_mode & VAR_5) || !(VAR_19 & VAR_5) ||
     !VAR_22->f_op->write)
  VAR_27 |= VAR_6;

 VAR_26 = FUNC_2(VAR_24->i_mode) ?
  VAR_24->i_bdev->bd_block_size : VAR_9;

 VAR_28 = -VAR_3;
 VAR_29 = FUNC_10(VAR_18, VAR_22);
 if ((loff_t)(sector_t)VAR_29 != VAR_29)
  goto out_putf;

 VAR_28 = 0;

 FUNC_20(VAR_20, (VAR_27 & VAR_6) != 0);

 VAR_18->lo_blocksize = VAR_26;
 VAR_18->lo_device = VAR_20;
 VAR_18->lo_flags = VAR_27;
 VAR_18->lo_backing_file = VAR_22;
 VAR_18->transfer = VAR_17;
 VAR_18->ioctl = ((void*)0);
 VAR_18->lo_sizelimit = 0;
 VAR_18->old_gfp_mask = FUNC_15(VAR_25);
 FUNC_16(VAR_25, VAR_18->old_gfp_mask & ~(VAR_13|VAR_12));

 FUNC_6(&VAR_18->lo_bio_list);

 VAR_18->lo_queue->unplug_fn = VAR_15;

 if (!(VAR_27 & VAR_6) && VAR_22->f_op->fsync)
  FUNC_7(VAR_18->lo_queue, VAR_10);

 FUNC_19(VAR_18->lo_disk, VAR_29);
 FUNC_5(VAR_20, VAR_29 << 9);

 FUNC_18(VAR_20, VAR_26);

 VAR_18->lo_thread = FUNC_14(VAR_14, VAR_18, "loop%d",
      VAR_18->lo_number);
 if (FUNC_0(VAR_18->lo_thread)) {
  VAR_28 = FUNC_1(VAR_18->lo_thread);
  goto out_clr;
 }
 VAR_18->lo_state = VAR_7;
 FUNC_21(VAR_18->lo_thread);
 if (VAR_16 > 0)
  FUNC_12(VAR_20, VAR_0, 0);
 return 0;

out_clr:
 VAR_18->lo_thread = ((void*)0);
 VAR_18->lo_device = ((void*)0);
 VAR_18->lo_backing_file = ((void*)0);
 VAR_18->lo_flags = 0;
 VAR_18->lo_queue->unplug_fn = ((void*)0);
 FUNC_19(VAR_18->lo_disk, 0);
 FUNC_11(VAR_20);
 FUNC_5(VAR_20, 0);
 FUNC_16(VAR_25, VAR_18->old_gfp_mask);
 VAR_18->lo_state = VAR_8;
 out_putf:
 FUNC_9(VAR_22);
 out:

 FUNC_17(VAR_11);
 return VAR_28;
}
