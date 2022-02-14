
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct loop_device {int lo_offset; int lo_blocksize; scalar_t__ lo_encrypt_key_size; struct file* lo_backing_file; } ;
struct inode {TYPE_2__* i_op; } ;
struct TYPE_6__ {int dentry; } ;
struct file {TYPE_3__ f_path; TYPE_1__* f_mapping; } ;
struct bio {int bi_rw; int bi_size; scalar_t__ bi_sector; } ;
typedef int loff_t ;
struct TYPE_5__ {int (* fallocate ) (struct inode*,int,int,int ) ;} ;
struct TYPE_4__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (struct loop_device*,struct bio*,int ,int) ;
 int FUNC_3 (struct loop_device*,struct bio*,int) ;
 int FUNC_4 (struct inode*,int,int,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct file*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct loop_device *VAR_10, struct bio *VAR_11)
{
 loff_t VAR_12;
 int VAR_13;

 VAR_12 = ((loff_t) VAR_11->bi_sector << 9) + VAR_10->lo_offset;

 if (FUNC_0(VAR_11) == VAR_9) {
  struct file *VAR_14 = VAR_10->lo_backing_file;


  if (FUNC_1(VAR_11, VAR_3)) {
   VAR_13 = -VAR_6;
   goto out;
  }

  if (VAR_11->bi_rw & VAR_1) {
   VAR_13 = FUNC_6(VAR_14, VAR_14->f_path.dentry, 0);
   if (FUNC_5(VAR_13 && VAR_13 != -VAR_4)) {
    VAR_13 = -VAR_5;
    goto out;
   }
  }







  if (VAR_11->bi_rw & VAR_0) {
   struct inode *VAR_15 = VAR_10->lo_backing_file->f_mapping->host;
   int VAR_16 = VAR_8 | VAR_7;

   if ((!VAR_15->i_op->fallocate) ||
       VAR_10->lo_encrypt_key_size) {
    VAR_13 = -VAR_6;
    goto out;
   }
   VAR_13 = VAR_15->i_op->fallocate(VAR_15, VAR_16, VAR_12,
          VAR_11->bi_size);
   if (FUNC_5(VAR_13 && VAR_13 != -VAR_4 &&
         VAR_13 != -VAR_6))
    VAR_13 = -VAR_5;
   goto out;
  }

  VAR_13 = FUNC_3(VAR_10, VAR_11, VAR_12);

  if ((VAR_11->bi_rw & VAR_2) && !VAR_13) {
   VAR_13 = FUNC_6(VAR_14, VAR_14->f_path.dentry, 0);
   if (FUNC_5(VAR_13 && VAR_13 != -VAR_4))
    VAR_13 = -VAR_5;
  }
 } else
  VAR_13 = FUNC_2(VAR_10, VAR_11, VAR_10->lo_blocksize, VAR_12);

out:
 return VAR_13;
}
