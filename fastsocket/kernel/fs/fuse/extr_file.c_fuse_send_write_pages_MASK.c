
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int index; } ;
struct inode {int dummy; } ;
struct TYPE_5__ {int error; } ;
struct TYPE_6__ {TYPE_2__ h; } ;
struct fuse_req {unsigned int num_pages; TYPE_3__ out; struct page** pages; TYPE_1__* page_descs; } ;
struct fuse_io_priv {struct file* file; int async; } ;
struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_4__ {unsigned int offset; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct page*) ;
 size_t FUNC_1 (struct fuse_req*,struct fuse_io_priv*,int ,size_t,int *) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static size_t FUNC_5(struct fuse_req *VAR_1, struct file *VAR_2,
        struct inode *VAR_3, loff_t VAR_4,
        size_t VAR_5)
{
 size_t VAR_6;
 unsigned VAR_7;
 unsigned VAR_8;
 struct fuse_io_priv VAR_9 = { .async = 0, .file = VAR_2 };

 for (VAR_8 = 0; VAR_8 < VAR_1->num_pages; VAR_8++)
  FUNC_2(VAR_3, VAR_1->pages[VAR_8]->index);

 VAR_6 = FUNC_1(VAR_1, &VAR_9, VAR_4, VAR_5, ((void*)0));

 VAR_7 = VAR_1->page_descs[0].offset;
 VAR_5 = VAR_6;
 for (VAR_8 = 0; VAR_8 < VAR_1->num_pages; VAR_8++) {
  struct page *VAR_10 = VAR_1->pages[VAR_8];

  if (!VAR_1->out.h.error && !VAR_7 && VAR_5 >= VAR_0)
   FUNC_0(VAR_10);

  if (VAR_5 > VAR_0 - VAR_7)
   VAR_5 -= VAR_0 - VAR_7;
  else
   VAR_5 = 0;
  VAR_7 = 0;

  FUNC_4(VAR_10);
  FUNC_3(VAR_10);
 }

 return VAR_6;
}
