
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iso_directory_record {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
typedef int filldir_t ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct file*,void*,int ,char*,struct iso_directory_record*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2,
  void *VAR_3, filldir_t VAR_4)
{
 int VAR_5;
 char *VAR_6;
 struct iso_directory_record *VAR_7;
 struct inode *VAR_8 = VAR_2->f_path.dentry->d_inode;

 VAR_6 = (char *)FUNC_0(VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 FUNC_3();
 VAR_7 = (struct iso_directory_record *) (VAR_6+1024);

 VAR_5 = FUNC_1(VAR_8, VAR_2, VAR_3, VAR_4, VAR_6, VAR_7);

 FUNC_2((unsigned long) VAR_6);
 FUNC_4();
 return VAR_5;
}
