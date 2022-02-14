
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_8__ {TYPE_2__* dentry; } ;
struct file {int f_mode; struct block_device* private_data; TYPE_3__ f_path; int f_mapping; int f_flags; int * f_op; } ;
struct block_device {TYPE_5__* bd_inode; } ;
struct TYPE_10__ {int i_mapping; } ;
struct TYPE_9__ {int inuse; struct block_device* binding; } ;
struct TYPE_7__ {TYPE_1__* d_inode; } ;
struct TYPE_6__ {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct block_device*,int (*) (struct inode*,struct file*)) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct block_device*,int ) ;
 int FUNC_4 (struct block_device*,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (struct block_device*,int ) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_5, struct file *VAR_6)
{
 const int VAR_7 = FUNC_6(VAR_5);
 struct block_device *VAR_8;
 int VAR_9;

 if (VAR_7 == 0) {
  VAR_6->f_op = &VAR_2;
  return 0;
 }

 FUNC_7();
 FUNC_8(&VAR_4);




 VAR_8 = VAR_3[VAR_7].binding;
 VAR_9 = -VAR_0;
 if (!VAR_8)
  goto out;
 FUNC_5(VAR_8->bd_inode);
 VAR_9 = FUNC_3(VAR_8, VAR_6->f_mode);
 if (VAR_9)
  goto out;
 VAR_9 = FUNC_0(VAR_8, FUNC_12);
 if (VAR_9)
  goto out1;
 VAR_9 = FUNC_10(VAR_8, FUNC_2(VAR_8));
 if (VAR_9)
  goto out2;
 VAR_6->f_flags |= VAR_1;
 VAR_6->f_mapping = VAR_8->bd_inode->i_mapping;
 if (++VAR_3[VAR_7].inuse == 1)
  VAR_6->f_path.dentry->d_inode->i_mapping =
   VAR_8->bd_inode->i_mapping;
 VAR_6->private_data = VAR_8;
 FUNC_9(&VAR_4);
 FUNC_11();
 return 0;

out2:
 FUNC_1(VAR_8);
out1:
 FUNC_4(VAR_8, VAR_6->f_mode);
out:
 FUNC_9(&VAR_4);
 FUNC_11();
 return VAR_9;
}
