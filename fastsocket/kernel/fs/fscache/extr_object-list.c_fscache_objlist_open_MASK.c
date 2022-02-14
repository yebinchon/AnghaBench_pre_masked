
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct fscache_objlist_data* private; } ;
struct inode {int dummy; } ;
struct fscache_objlist_data {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fscache_objlist_data*) ;
 int VAR_2 ;
 struct fscache_objlist_data* FUNC_1 (int,int ) ;
 int FUNC_2 (struct file*,int *) ;
 int FUNC_3 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 struct fscache_objlist_data *VAR_5;
 struct seq_file *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_4, &VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = VAR_4->private_data;


 VAR_5 = FUNC_1(sizeof(struct fscache_objlist_data), VAR_1);
 if (!VAR_5) {
  FUNC_3(VAR_3, VAR_4);
  return -VAR_0;
 }


 FUNC_0(VAR_5);

 VAR_6->private = VAR_5;
 return 0;
}
