
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hypfs_dbfs_file {int data_free_work; int lock; int dentry; int name; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int,int ,struct hypfs_dbfs_file*,int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct hypfs_dbfs_file *VAR_3)
{
 VAR_3->dentry = FUNC_3(VAR_3->name, 0400, VAR_1, VAR_3,
      &VAR_2);
 if (FUNC_1(VAR_3->dentry))
  return FUNC_2(VAR_3->dentry);
 FUNC_4(&VAR_3->lock);
 FUNC_0(&VAR_3->data_free_work, VAR_0);
 return 0;
}
