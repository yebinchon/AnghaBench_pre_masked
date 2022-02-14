
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_page {int wb_kref; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct page*) ;

__attribute__((used)) static struct nfs_page *FUNC_3(struct page *VAR_0)
{
 struct nfs_page *VAR_1 = ((void*)0);

 if (FUNC_0(VAR_0)) {
  VAR_1 = (struct nfs_page *)FUNC_2(VAR_0);
  if (VAR_1 != ((void*)0))
   FUNC_1(&VAR_1->wb_kref);
 }
 return VAR_1;
}
