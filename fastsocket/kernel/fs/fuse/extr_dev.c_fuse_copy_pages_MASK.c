
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct fuse_req {unsigned int num_pages; struct page** pages; TYPE_1__* page_descs; } ;
struct fuse_copy_state {struct fuse_req* req; } ;
struct TYPE_2__ {unsigned int offset; int length; } ;


 int FUNC_0 (struct fuse_copy_state*,struct page*,unsigned int,unsigned int,int) ;
 unsigned int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct fuse_copy_state *VAR_0, unsigned VAR_1,
      int VAR_2)
{
 unsigned VAR_3;
 struct fuse_req *VAR_4 = VAR_0->req;

 for (VAR_3 = 0; VAR_3 < VAR_4->num_pages && (VAR_1 || VAR_2); VAR_3++) {
  unsigned VAR_5 = VAR_4->page_descs[VAR_3].offset;
  unsigned VAR_6 = FUNC_1(VAR_1, VAR_4->page_descs[VAR_3].length);
  struct page *VAR_7 = VAR_4->pages[VAR_3];
  int VAR_8 = FUNC_0(VAR_0, VAR_7, VAR_5, VAR_6, VAR_2);
  if (VAR_8)
   return VAR_8;

  VAR_1 -= VAR_6;
 }
 return 0;
}
