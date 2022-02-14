
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct file* file; } ;
struct splice_desc {int flags; int total_len; TYPE_1__ u; } ;
struct pipe_inode_info {int dummy; } ;
struct file {int f_pos; } ;


 int FUNC_0 (struct pipe_inode_info*,struct file*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct pipe_inode_info *VAR_0,
          struct splice_desc *VAR_1)
{
 struct file *VAR_2 = VAR_1->u.file;

 return FUNC_0(VAR_0, VAR_2, &VAR_2->f_pos, VAR_1->total_len,
         VAR_1->flags);
}
