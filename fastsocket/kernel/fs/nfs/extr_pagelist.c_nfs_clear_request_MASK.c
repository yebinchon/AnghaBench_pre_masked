
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_page {struct nfs_open_context* wb_context; struct nfs_lock_context* wb_lock_context; struct page* wb_page; } ;
struct nfs_open_context {int dummy; } ;
struct nfs_lock_context {int io_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfs_lock_context*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct nfs_open_context*) ;

__attribute__((used)) static void FUNC_4(struct nfs_page *VAR_0)
{
 struct page *VAR_1 = VAR_0->wb_page;
 struct nfs_open_context *VAR_2 = VAR_0->wb_context;
 struct nfs_lock_context *VAR_3 = VAR_0->wb_lock_context;

 if (VAR_1 != ((void*)0)) {
  FUNC_2(VAR_1);
  VAR_0->wb_page = ((void*)0);
 }
 if (VAR_3 != ((void*)0)) {
  FUNC_0(&VAR_3->io_count);
  FUNC_1(VAR_3);
  VAR_0->wb_lock_context = ((void*)0);
 }
 if (VAR_2 != ((void*)0)) {
  FUNC_3(VAR_2);
  VAR_0->wb_context = ((void*)0);
 }
}
