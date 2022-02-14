
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_data; int i_mapping; } ;
struct file_lock {scalar_t__ fl_type; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,struct file*,struct file_lock*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_3, int VAR_4, struct file_lock *VAR_5)
{
 int VAR_6 = 0;
 struct inode *VAR_7 = VAR_3->f_path.dentry->d_inode;

 FUNC_2(VAR_2, "filp: %p lock: %p\n", VAR_3, VAR_5);


 if (FUNC_3(VAR_7))
  return -VAR_0;

 if ((FUNC_0(VAR_4) || FUNC_1(VAR_4)) && VAR_5->fl_type != VAR_1) {
  FUNC_4(VAR_7->i_mapping);
  FUNC_5(&VAR_7->i_data, 0, -1);
 }

 return VAR_6;
}
