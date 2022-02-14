
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct file* file; } ;
struct splice_desc {unsigned int pos; unsigned int len; TYPE_1__ u; } ;
struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {int offset; TYPE_2__* ops; struct page* page; } ;
struct page {int dummy; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {int dummy; } ;
struct TYPE_4__ {int (* confirm ) (struct pipe_inode_info*,struct pipe_buffer*) ;char* (* map ) (struct pipe_inode_info*,struct pipe_buffer*,int) ;int (* unmap ) (struct pipe_inode_info*,struct pipe_buffer*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct page*) ;
 char* FUNC_1 (struct page*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*,unsigned int) ;
 int FUNC_4 (struct file*,struct address_space*,unsigned int,unsigned int,int ,struct page**,void**) ;
 int FUNC_5 (struct file*,struct address_space*,unsigned int,unsigned int,unsigned int,struct page*,void*) ;
 int FUNC_6 (struct pipe_inode_info*,struct pipe_buffer*) ;
 char* FUNC_7 (struct pipe_inode_info*,struct pipe_buffer*,int) ;
 int FUNC_8 (struct pipe_inode_info*,struct pipe_buffer*,char*) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct pipe_inode_info *VAR_4, struct pipe_buffer *VAR_5,
   struct splice_desc *VAR_6)
{
 struct file *VAR_7 = VAR_6->u.file;
 struct address_space *VAR_8 = VAR_7->f_mapping;
 unsigned int VAR_9, VAR_10;
 struct page *VAR_11;
 void *VAR_12;
 int VAR_13;




 VAR_13 = VAR_5->ops->confirm(VAR_4, VAR_5);
 if (FUNC_9(VAR_13))
  return VAR_13;

 VAR_9 = VAR_6->pos & ~VAR_2;

 VAR_10 = VAR_6->len;
 if (VAR_10 + VAR_9 > VAR_3)
  VAR_10 = VAR_3 - VAR_9;

 VAR_13 = FUNC_4(VAR_7, VAR_8, VAR_6->pos, VAR_10,
    VAR_0, &VAR_11, &VAR_12);
 if (FUNC_9(VAR_13))
  goto out;

 if (VAR_5->page != VAR_11) {



  char *VAR_14 = VAR_5->ops->map(VAR_4, VAR_5, 1);
  char *VAR_15 = FUNC_1(VAR_11, VAR_1);

  FUNC_3(VAR_15 + VAR_9, VAR_14 + VAR_5->offset, VAR_10);
  FUNC_0(VAR_11);
  FUNC_2(VAR_15, VAR_1);
  VAR_5->ops->unmap(VAR_4, VAR_5, VAR_14);
 }
 VAR_13 = FUNC_5(VAR_7, VAR_8, VAR_6->pos, VAR_10, VAR_10,
    VAR_11, VAR_12);
out:
 return VAR_13;
}
