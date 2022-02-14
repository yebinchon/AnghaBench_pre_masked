
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int next; } ;
struct nfs_pgio_header {scalar_t__ good_bytes; int (* release ) (struct nfs_pgio_header*) ;TYPE_1__ pages; int error; int flags; struct nfs_direct_req* dreq; } ;
struct nfs_page {scalar_t__ wb_bytes; struct page* wb_page; } ;
struct nfs_direct_req {int lock; int count; int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct nfs_direct_req*) ;
 int FUNC_3 (struct nfs_page*) ;
 struct nfs_page* FUNC_4 (int ) ;
 int FUNC_5 (struct nfs_page*) ;
 scalar_t__ FUNC_6 (struct nfs_direct_req*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct nfs_pgio_header*) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct nfs_pgio_header *VAR_2)
{
 unsigned long VAR_3 = 0;
 struct nfs_direct_req *VAR_4 = VAR_2->dreq;

 if (FUNC_11(VAR_1, &VAR_2->flags))
  goto out_put;

 FUNC_8(&VAR_4->lock);
 if (FUNC_11(VAR_0, &VAR_2->flags) && (VAR_2->good_bytes == 0))
  VAR_4->error = VAR_2->error;
 else
  VAR_4->count += VAR_2->good_bytes;
 FUNC_9(&VAR_4->lock);

 while (!FUNC_1(&VAR_2->pages)) {
  struct nfs_page *VAR_5 = FUNC_4(VAR_2->pages.next);
  struct page *VAR_6 = VAR_5->wb_page;

  if (!FUNC_0(VAR_6) && VAR_3 < VAR_2->good_bytes)
   FUNC_7(VAR_6);
  VAR_3 += VAR_5->wb_bytes;
  FUNC_5(VAR_5);
  FUNC_3(VAR_5);
 }
out_put:
 if (FUNC_6(VAR_4))
  FUNC_2(VAR_4);
 VAR_2->release(VAR_2);
}
