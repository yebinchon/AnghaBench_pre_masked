
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; } ;
struct nfs_page {unsigned int wb_offset; unsigned int wb_pgbase; unsigned int wb_bytes; int wb_kref; int wb_context; int wb_index; struct page* wb_page; struct nfs_lock_context* wb_lock_context; } ;
struct nfs_open_context {int flags; } ;
struct nfs_lock_context {int io_count; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs_page* FUNC_0 (struct nfs_lock_context*) ;
 struct nfs_page* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nfs_lock_context*) ;
 int VAR_2 ;
 int FUNC_3 (struct nfs_open_context*) ;
 int FUNC_4 (int *) ;
 struct nfs_lock_context* FUNC_5 (struct nfs_open_context*) ;
 int FUNC_6 (int *) ;
 struct nfs_page* FUNC_7 () ;
 int FUNC_8 (struct nfs_page*) ;
 int FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (int ,int *) ;

struct nfs_page *
FUNC_11(struct nfs_open_context *VAR_3, struct inode *VAR_4,
     struct page *VAR_5,
     unsigned int VAR_6, unsigned int VAR_7)
{
 struct nfs_page *VAR_8;
 struct nfs_lock_context *VAR_9;

 if (FUNC_10(VAR_2, &VAR_3->flags))
  return FUNC_1(-VAR_0);

 VAR_8 = FUNC_7();
 if (VAR_8 == ((void*)0))
  return FUNC_1(-VAR_1);


 VAR_9 = FUNC_5(VAR_3);
 if (FUNC_2(VAR_9)) {
  FUNC_8(VAR_8);
  return FUNC_0(VAR_9);
 }
 VAR_8->wb_lock_context = VAR_9;
 FUNC_6(&VAR_9->io_count);




 VAR_8->wb_page = VAR_5;
 VAR_8->wb_index = VAR_5->index;
 FUNC_9(VAR_5);
 VAR_8->wb_offset = VAR_6;
 VAR_8->wb_pgbase = VAR_6;
 VAR_8->wb_bytes = VAR_7;
 VAR_8->wb_context = FUNC_3(VAR_3);
 FUNC_4(&VAR_8->wb_kref);
 return VAR_8;
}
