
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tape_device {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {struct tape_device* private_data; TYPE_2__ f_path; } ;
struct TYPE_3__ {int d_inode; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct tape_device*) ;
 int FUNC_2 (struct tape_device*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct inode*,struct file*) ;
 struct tape_device* FUNC_7 (int) ;
 int FUNC_8 (struct tape_device*) ;
 int FUNC_9 (struct tape_device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11 (struct inode *VAR_3, struct file *VAR_4)
{
 struct tape_device *VAR_5;
 int VAR_6, VAR_7;

 FUNC_0(6, "TCHAR:open: %i:%i\n",
  FUNC_3(VAR_4->f_path.dentry->d_inode),
  FUNC_4(VAR_4->f_path.dentry->d_inode));

 if (FUNC_3(VAR_4->f_path.dentry->d_inode) != VAR_2)
  return -VAR_0;

 FUNC_5();
 VAR_6 = FUNC_4(VAR_4->f_path.dentry->d_inode);
 VAR_5 = FUNC_7(VAR_6 / VAR_1);
 if (FUNC_1(VAR_5)) {
  FUNC_0(3, "TCHAR:open: tape_get_device() failed\n");
  VAR_7 = FUNC_2(VAR_5);
  goto out;
 }


 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7 == 0) {
  VAR_4->private_data = VAR_5;
  VAR_7 = FUNC_6(VAR_3, VAR_4);
 }
 else
  FUNC_9(VAR_5);

out:
 FUNC_10();
 return VAR_7;
}
