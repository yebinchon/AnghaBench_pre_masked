
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct sg_list* data; } ;
struct splice_desc {unsigned int len; unsigned int pos; TYPE_1__ u; } ;
struct sg_list {size_t n; size_t size; unsigned int len; int * sg; } ;
struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {unsigned int offset; TYPE_2__* ops; struct page* page; int len; } ;
struct page {int dummy; } ;
struct TYPE_4__ {scalar_t__ (* steal ) (struct pipe_inode_info*,struct pipe_buffer*) ;char* (* map ) (struct pipe_inode_info*,struct pipe_buffer*,int) ;int (* unmap ) (struct pipe_inode_info*,struct pipe_buffer*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 char* FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (char*,char*,unsigned int) ;
 unsigned int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int *,struct page*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_7 (struct pipe_inode_info*,struct pipe_buffer*) ;
 char* FUNC_8 (struct pipe_inode_info*,struct pipe_buffer*,int) ;
 int FUNC_9 (struct pipe_inode_info*,struct pipe_buffer*,char*) ;
 int FUNC_10 (struct page*) ;

__attribute__((used)) static int FUNC_11(struct pipe_inode_info *VAR_4, struct pipe_buffer *VAR_5,
   struct splice_desc *VAR_6)
{
 struct sg_list *VAR_7 = VAR_6->u.data;
 unsigned int VAR_8, VAR_9;

 if (VAR_7->n == VAR_7->size)
  return 0;


 if (VAR_5->ops->steal(VAR_4, VAR_5) == 0) {

  FUNC_1(VAR_5->page);
  FUNC_10(VAR_5->page);

  VAR_9 = FUNC_5(VAR_5->len, VAR_6->len);
  FUNC_6(&(VAR_7->sg[VAR_7->n]), VAR_5->page, VAR_9, VAR_5->offset);
 } else {

  struct page *VAR_10 = FUNC_0(VAR_1);
  char *VAR_11 = VAR_5->ops->map(VAR_4, VAR_5, 1);
  char *VAR_12;

  if (!VAR_10)
   return -VAR_0;
  VAR_12 = FUNC_2(VAR_10);

  VAR_8 = VAR_6->pos & ~VAR_2;

  VAR_9 = VAR_6->len;
  if (VAR_9 + VAR_8 > VAR_3)
   VAR_9 = VAR_3 - VAR_8;

  FUNC_4(VAR_12 + VAR_8, VAR_11 + VAR_5->offset, VAR_9);

  FUNC_3(VAR_10);
  VAR_5->ops->unmap(VAR_4, VAR_5, VAR_11);

  FUNC_6(&(VAR_7->sg[VAR_7->n]), VAR_10, VAR_9, VAR_8);
 }
 VAR_7->n++;
 VAR_7->len += VAR_9;

 return VAR_9;
}
