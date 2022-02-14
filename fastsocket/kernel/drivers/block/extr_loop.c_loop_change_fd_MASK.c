
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loop_device {scalar_t__ lo_state; int lo_flags; struct file* lo_backing_file; } ;
struct inode {int i_mode; } ;
struct file {TYPE_1__* f_mapping; } ;
struct block_device {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct file* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (struct loop_device*,struct file*) ;
 int FUNC_5 (struct block_device*,int ,int ) ;
 int FUNC_6 (struct loop_device*,struct file*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_7(struct loop_device *VAR_7, struct block_device *VAR_8,
     unsigned int VAR_9)
{
 struct file *VAR_10, *VAR_11;
 struct inode *VAR_12;
 int VAR_13;

 VAR_13 = -VAR_3;
 if (VAR_7->lo_state != VAR_5)
  goto out;


 VAR_13 = -VAR_2;
 if (!(VAR_7->lo_flags & VAR_4))
  goto out;

 VAR_13 = -VAR_1;
 VAR_10 = FUNC_2(VAR_9);
 if (!VAR_10)
  goto out;

 VAR_12 = VAR_10->f_mapping->host;
 VAR_11 = VAR_7->lo_backing_file;

 VAR_13 = -VAR_2;

 if (!FUNC_1(VAR_12->i_mode) && !FUNC_0(VAR_12->i_mode))
  goto out_putf;


 if (FUNC_4(VAR_7, VAR_10) != FUNC_4(VAR_7, VAR_11))
  goto out_putf;


 VAR_13 = FUNC_6(VAR_7, VAR_10);
 if (VAR_13)
  goto out_putf;

 FUNC_3(VAR_11);
 if (VAR_6 > 0)
  FUNC_5(VAR_8, VAR_0, 0);
 return 0;

 out_putf:
 FUNC_3(VAR_10);
 out:
 return VAR_13;
}
