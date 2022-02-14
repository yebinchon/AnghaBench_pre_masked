
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct fuse_req {unsigned int num_pages; struct page** pages; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static void FUNC_2(struct fuse_req *VAR_0, int VAR_1)
{
 unsigned VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_pages; VAR_2++) {
  struct page *VAR_3 = VAR_0->pages[VAR_2];
  if (VAR_1)
   FUNC_1(VAR_3);
  FUNC_0(VAR_3);
 }
}
