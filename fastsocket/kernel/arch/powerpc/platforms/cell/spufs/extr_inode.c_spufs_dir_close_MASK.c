
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spu_context {int dummy; } ;
struct inode {int i_mutex; } ;
struct TYPE_4__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {int d_inode; TYPE_2__* d_parent; } ;
struct TYPE_6__ {struct spu_context* i_ctx; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*,struct file*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spu_context*) ;
 int FUNC_6 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct file *VAR_2)
{
 struct spu_context *VAR_3;
 struct inode *VAR_4;
 struct dentry *VAR_5;
 int VAR_6;

 VAR_5 = VAR_2->f_path.dentry;
 VAR_4 = VAR_5->d_parent->d_inode;
 VAR_3 = FUNC_0(VAR_5->d_inode)->i_ctx;

 FUNC_3(&VAR_4->i_mutex, VAR_0);
 VAR_6 = FUNC_6(VAR_4, VAR_5);
 FUNC_4(&VAR_4->i_mutex);
 FUNC_1(VAR_6);


 FUNC_5(VAR_3);

 return FUNC_2(VAR_1, VAR_2);
}
