
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int file; } ;
struct splice_desc {int pos; int len; TYPE_1__ u; } ;
struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {int offset; TYPE_2__* ops; } ;
struct TYPE_4__ {int (* confirm ) (struct pipe_inode_info*,struct pipe_buffer*) ;int (* unmap ) (struct pipe_inode_info*,struct pipe_buffer*,void*) ;void* (* map ) (struct pipe_inode_info*,struct pipe_buffer*,int ) ;} ;


 int FUNC_0 (int ,void*,int ,int ) ;
 int FUNC_1 (struct pipe_inode_info*,struct pipe_buffer*) ;
 void* FUNC_2 (struct pipe_inode_info*,struct pipe_buffer*,int ) ;
 int FUNC_3 (struct pipe_inode_info*,struct pipe_buffer*,void*) ;

__attribute__((used)) static int FUNC_4(struct pipe_inode_info *VAR_0, struct pipe_buffer *VAR_1,
     struct splice_desc *VAR_2)
{
 int VAR_3;
 void *VAR_4;

 VAR_3 = VAR_1->ops->confirm(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_4 = VAR_1->ops->map(VAR_0, VAR_1, 0);
 VAR_3 = FUNC_0(VAR_2->u.file, VAR_4 + VAR_1->offset, VAR_2->len, VAR_2->pos);
 VAR_1->ops->unmap(VAR_0, VAR_1, VAR_4);

 return VAR_3;
}
