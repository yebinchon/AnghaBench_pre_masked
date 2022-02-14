
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int userptr; } ;
struct splice_desc {int len; TYPE_2__ u; } ;
struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {int offset; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* confirm ) (struct pipe_inode_info*,struct pipe_buffer*) ;char* (* map ) (struct pipe_inode_info*,struct pipe_buffer*,int) ;int (* unmap ) (struct pipe_inode_info*,struct pipe_buffer*,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct pipe_inode_info*,struct pipe_buffer*) ;
 char* FUNC_4 (struct pipe_inode_info*,struct pipe_buffer*,int) ;
 int FUNC_5 (struct pipe_inode_info*,struct pipe_buffer*,char*) ;
 char* FUNC_6 (struct pipe_inode_info*,struct pipe_buffer*,int) ;
 int FUNC_7 (struct pipe_inode_info*,struct pipe_buffer*,char*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct pipe_inode_info *VAR_1, struct pipe_buffer *VAR_2,
   struct splice_desc *VAR_3)
{
 char *VAR_4;
 int VAR_5;

 VAR_5 = VAR_2->ops->confirm(VAR_1, VAR_2);
 if (FUNC_8(VAR_5))
  return VAR_5;





 if (!FUNC_2(VAR_3->u.userptr, VAR_3->len)) {
  VAR_4 = VAR_2->ops->map(VAR_1, VAR_2, 1);
  VAR_5 = FUNC_0(VAR_3->u.userptr, VAR_4 + VAR_2->offset,
       VAR_3->len);
  VAR_2->ops->unmap(VAR_1, VAR_2, VAR_4);
  if (!VAR_5) {
   VAR_5 = VAR_3->len;
   goto out;
  }
 }




 VAR_4 = VAR_2->ops->map(VAR_1, VAR_2, 0);

 VAR_5 = VAR_3->len;
 if (FUNC_1(VAR_3->u.userptr, VAR_4 + VAR_2->offset, VAR_3->len))
  VAR_5 = -VAR_0;

 VAR_2->ops->unmap(VAR_1, VAR_2, VAR_4);
out:
 if (VAR_5 > 0)
  VAR_3->u.userptr += VAR_5;
 return VAR_5;
}
