
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct spu_context {TYPE_3__* switch_log; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
typedef int poll_table ;
struct TYPE_8__ {struct spu_context* i_ctx; } ;
struct TYPE_7__ {int wait; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 unsigned int VAR_0 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (struct spu_context*) ;
 int FUNC_3 (struct spu_context*) ;
 scalar_t__ FUNC_4 (struct spu_context*) ;

__attribute__((used)) static unsigned int FUNC_5(struct file *VAR_1, poll_table *VAR_2)
{
 struct inode *VAR_3 = VAR_1->f_path.dentry->d_inode;
 struct spu_context *VAR_4 = FUNC_0(VAR_3)->i_ctx;
 unsigned int VAR_5 = 0;
 int VAR_6;

 FUNC_1(VAR_1, &VAR_4->switch_log->wait, VAR_2);

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  return VAR_6;

 if (FUNC_4(VAR_4) > 0)
  VAR_5 |= VAR_0;

 FUNC_3(VAR_4);

 return VAR_5;
}
