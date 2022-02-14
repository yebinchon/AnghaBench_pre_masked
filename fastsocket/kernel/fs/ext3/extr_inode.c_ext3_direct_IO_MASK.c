
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {scalar_t__ i_size; scalar_t__ i_nlink; TYPE_2__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
struct ext3_inode_info {scalar_t__ i_disksize; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
typedef int handle_t ;
struct TYPE_4__ {int s_bdev; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 struct ext3_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int,struct kiocb*,struct inode*,int ,struct iovec const*,scalar_t__,unsigned long,int ,int *) ;
 int VAR_2 ;
 int * FUNC_4 (struct inode*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct inode*) ;
 int FUNC_7 (int *,struct inode*) ;
 int FUNC_8 (int *,struct inode*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int*) ;
 int FUNC_10 (struct inode*,scalar_t__) ;
 size_t FUNC_11 (struct iovec const*,unsigned long) ;
 int FUNC_12 (struct inode*,scalar_t__,size_t,int) ;
 int FUNC_13 (struct inode*,scalar_t__,size_t,int,int) ;

__attribute__((used)) static ssize_t FUNC_14(int VAR_3, struct kiocb *VAR_4,
   const struct iovec *VAR_5, loff_t VAR_6,
   unsigned long VAR_7)
{
 struct file *VAR_8 = VAR_4->ki_filp;
 struct inode *VAR_9 = VAR_8->f_mapping->host;
 struct ext3_inode_info *VAR_10 = FUNC_0(VAR_9);
 handle_t *VAR_11;
 ssize_t VAR_12;
 int VAR_13 = 0;
 size_t VAR_14 = FUNC_11(VAR_5, VAR_7);
 int VAR_15 = 0;

 FUNC_12(VAR_9, VAR_6, FUNC_11(VAR_5, VAR_7), VAR_3);

 if (VAR_3 == VAR_1) {
  loff_t VAR_16 = VAR_6 + VAR_14;

  if (VAR_16 > VAR_9->i_size) {

   VAR_11 = FUNC_4(VAR_9, 2);
   if (FUNC_1(VAR_11)) {
    VAR_12 = FUNC_2(VAR_11);
    goto out;
   }
   VAR_12 = FUNC_7(VAR_11, VAR_9);
   if (VAR_12) {
    FUNC_5(VAR_11);
    goto out;
   }
   VAR_13 = 1;
   VAR_10->i_disksize = VAR_9->i_size;
   FUNC_5(VAR_11);
  }
 }

retry:
 VAR_12 = FUNC_3(VAR_3, VAR_4, VAR_9, VAR_9->i_sb->s_bdev, VAR_5,
     VAR_6, VAR_7,
     VAR_2, ((void*)0));
 if (VAR_12 == -VAR_0 && FUNC_9(VAR_9->i_sb, &VAR_15))
  goto retry;

 if (VAR_13) {
  int VAR_17;


  VAR_11 = FUNC_4(VAR_9, 2);
  if (FUNC_1(VAR_11)) {



   VAR_12 = FUNC_2(VAR_11);
   goto out;
  }
  if (VAR_9->i_nlink)
   FUNC_8(VAR_11, VAR_9);
  if (VAR_12 > 0) {
   loff_t VAR_18 = VAR_6 + VAR_12;
   if (VAR_18 > VAR_9->i_size) {
    VAR_10->i_disksize = VAR_18;
    FUNC_10(VAR_9, VAR_18);







    FUNC_6(VAR_11, VAR_9);
   }
  }
  VAR_17 = FUNC_5(VAR_11);
  if (VAR_12 == 0)
   VAR_12 = VAR_17;
 }
out:
 FUNC_13(VAR_9, VAR_6,
    FUNC_11(VAR_5, VAR_7), VAR_3, VAR_12);
 return VAR_12;
}
