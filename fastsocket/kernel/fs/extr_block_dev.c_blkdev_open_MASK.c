
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_flags; int f_mode; int f_mapping; } ;
struct block_device {TYPE_1__* bd_inode; } ;
struct TYPE_2__ {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct block_device* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct block_device*,struct file*) ;
 int FUNC_2 (struct block_device*,int) ;
 int FUNC_3 (struct block_device*,int) ;

__attribute__((used)) static int FUNC_4(struct inode * VAR_8, struct file * VAR_9)
{
 struct block_device *VAR_10;
 int VAR_11;







 VAR_9->f_flags |= VAR_6;

 if (VAR_9->f_flags & VAR_7)
  VAR_9->f_mode |= VAR_2;
 if (VAR_9->f_flags & VAR_5)
  VAR_9->f_mode |= VAR_1;
 if ((VAR_9->f_flags & VAR_4) == 3)
  VAR_9->f_mode |= VAR_3;

 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_9->f_mapping = VAR_10->bd_inode->i_mapping;

 VAR_11 = FUNC_2(VAR_10, VAR_9->f_mode);
 if (VAR_11)
  return VAR_11;

 if (VAR_9->f_mode & VAR_1) {
  VAR_11 = FUNC_1(VAR_10, VAR_9);
  if (VAR_11)
   goto out_blkdev_put;
 }

 return 0;

 out_blkdev_put:
 FUNC_3(VAR_10, VAR_9->f_mode);
 return VAR_11;
}
