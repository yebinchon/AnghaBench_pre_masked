
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct file* file; } ;
struct splice_desc {int flags; int len; int total_len; int pos; TYPE_1__ u; } ;
struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {int offset; int page; TYPE_2__* ops; } ;
struct file {TYPE_3__* f_op; } ;
typedef int loff_t ;
struct TYPE_6__ {int (* sendpage ) (struct file*,int ,int ,int ,int *,int) ;} ;
struct TYPE_5__ {int (* confirm ) (struct pipe_inode_info*,struct pipe_buffer*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pipe_inode_info*,struct pipe_buffer*) ;
 int FUNC_1 (struct file*,int ,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct pipe_inode_info *VAR_2,
       struct pipe_buffer *VAR_3, struct splice_desc *VAR_4)
{
 struct file *VAR_5 = VAR_4->u.file;
 loff_t VAR_6 = VAR_4->pos;
 int VAR_7, VAR_8;

 VAR_7 = VAR_3->ops->confirm(VAR_2, VAR_3);
 if (!VAR_7) {
  VAR_8 = (VAR_4->flags & VAR_1) || VAR_4->len < VAR_4->total_len;
  if (VAR_5->f_op && VAR_5->f_op->sendpage)
   VAR_7 = VAR_5->f_op->sendpage(VAR_5, VAR_3->page, VAR_3->offset,
         VAR_4->len, &VAR_6, VAR_8);
  else
   VAR_7 = -VAR_0;
 }

 return VAR_7;
}
