
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lun {int ro; int file_length; int num_sectors; struct file* filp; } ;
struct inode {TYPE_4__* i_mapping; int i_mode; int i_bdev; } ;
struct TYPE_8__ {TYPE_1__* dentry; } ;
struct file {int f_mode; TYPE_3__* f_op; TYPE_2__ f_path; } ;
typedef int loff_t ;
struct TYPE_12__ {int files; } ;
struct TYPE_11__ {scalar_t__ cdrom; } ;
struct TYPE_10__ {int host; } ;
struct TYPE_9__ {scalar_t__ aio_write; scalar_t__ write; scalar_t__ aio_read; scalar_t__ read; } ;
struct TYPE_7__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct lun*,char*,char const*) ;
 int FUNC_2 (struct lun*,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_6__* VAR_7 ;
 int FUNC_7 (struct file*,int ) ;
 struct file* FUNC_8 (char const*,int,int ) ;
 int FUNC_9 (struct file*) ;
 int FUNC_10 (int ) ;
 TYPE_5__ VAR_8 ;

__attribute__((used)) static int FUNC_11(struct lun *VAR_9, const char *VAR_10)
{
 int VAR_11;
 struct file *VAR_12 = ((void*)0);
 int VAR_13 = -VAR_0;
 struct inode *VAR_14 = ((void*)0);
 loff_t VAR_15;
 loff_t VAR_16;
 loff_t VAR_17;


 VAR_11 = VAR_9->ro;
 if (!VAR_11) {
  VAR_12 = FUNC_8(VAR_10, VAR_6 | VAR_4, 0);
  if (-VAR_1 == FUNC_3(VAR_12))
   VAR_11 = 1;
 }
 if (VAR_11)
  VAR_12 = FUNC_8(VAR_10, VAR_5 | VAR_4, 0);
 if (FUNC_0(VAR_12)) {
  FUNC_2(VAR_9, "unable to open backing file: %s\n", VAR_10);
  return FUNC_3(VAR_12);
 }

 if (!(VAR_12->f_mode & VAR_3))
  VAR_11 = 1;

 if (VAR_12->f_path.dentry)
  VAR_14 = VAR_12->f_path.dentry->d_inode;
 if (VAR_14 && FUNC_4(VAR_14->i_mode)) {
  if (FUNC_6(VAR_14->i_bdev))
   VAR_11 = 1;
 } else if (!VAR_14 || !FUNC_5(VAR_14->i_mode)) {
  FUNC_2(VAR_9, "invalid file type: %s\n", VAR_10);
  goto out;
 }



 if (!VAR_12->f_op || !(VAR_12->f_op->read || VAR_12->f_op->aio_read)) {
  FUNC_2(VAR_9, "file not readable: %s\n", VAR_10);
  goto out;
 }
 if (!(VAR_12->f_op->write || VAR_12->f_op->aio_write))
  VAR_11 = 1;

 VAR_15 = FUNC_10(VAR_14->i_mapping->host);
 if (VAR_15 < 0) {
  FUNC_2(VAR_9, "unable to find file size: %s\n", VAR_10);
  VAR_13 = (int) VAR_15;
  goto out;
 }
 VAR_16 = VAR_15 >> 9;
 VAR_17 = 1;
 if (VAR_8.cdrom) {
  VAR_16 &= ~3;
  VAR_17 = 300*4;
  if (VAR_16 >= 256*60*75*4) {
   VAR_16 = (256*60*75 - 1) * 4;
   FUNC_2(VAR_9, "file too big: %s\n", VAR_10);
   FUNC_2(VAR_9, "using only first %d blocks\n",
     (int) VAR_16);
  }
 }
 if (VAR_16 < VAR_17) {
  FUNC_2(VAR_9, "file too small: %s\n", VAR_10);
  VAR_13 = -VAR_2;
  goto out;
 }

 FUNC_9(VAR_12);
 VAR_9->ro = VAR_11;
 VAR_9->filp = VAR_12;
 VAR_9->file_length = VAR_15;
 VAR_9->num_sectors = VAR_16;
 FUNC_1(VAR_9, "open backing file: %s\n", VAR_10);
 VAR_13 = 0;

out:
 FUNC_7(VAR_12, VAR_7->files);
 return VAR_13;
}
