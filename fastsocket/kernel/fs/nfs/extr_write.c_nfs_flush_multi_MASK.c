
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_3__ {struct page** pagevec; } ;
struct nfs_write_data {int list; TYPE_1__ pages; } ;
struct nfs_pgio_header {int pages; int rpc_list; struct nfs_page* req; } ;
struct nfs_pageio_descriptor {int pg_ioflags; size_t pg_count; int * pg_rpc_callops; scalar_t__ pg_moreio; int pg_dreq; int pg_inode; } ;
struct nfs_page {struct page* wb_page; } ;
struct nfs_commit_info {int dummy; } ;
struct TYPE_4__ {size_t wsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 size_t FUNC_2 (size_t,size_t) ;
 int FUNC_3 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*) ;
 int FUNC_4 (struct nfs_commit_info*,int ,int ) ;
 int FUNC_5 (struct nfs_page*,int *) ;
 int FUNC_6 (struct nfs_page*) ;
 scalar_t__ FUNC_7 (struct nfs_commit_info*) ;
 int VAR_2 ;
 int FUNC_8 (struct nfs_write_data*,size_t,unsigned int,int,struct nfs_commit_info*) ;
 struct nfs_write_data* FUNC_9 (struct nfs_pgio_header*,int) ;

__attribute__((used)) static int FUNC_10(struct nfs_pageio_descriptor *VAR_3,
      struct nfs_pgio_header *VAR_4)
{
 struct nfs_page *VAR_5 = VAR_4->req;
 struct page *VAR_6 = VAR_5->wb_page;
 struct nfs_write_data *VAR_7;
 size_t VAR_8 = FUNC_0(VAR_3->pg_inode)->wsize, VAR_9;
 unsigned int VAR_10;
 int VAR_11 = 0;
 struct nfs_commit_info VAR_12;

 FUNC_4(&VAR_12, VAR_3->pg_inode, VAR_3->pg_dreq);

 if ((VAR_3->pg_ioflags & VAR_1) &&
     (VAR_3->pg_moreio || FUNC_7(&VAR_12) ||
      VAR_3->pg_count > VAR_8))
  VAR_3->pg_ioflags &= ~VAR_1;


 VAR_10 = 0;
 VAR_9 = VAR_3->pg_count;
 do {
  size_t VAR_13 = FUNC_2(VAR_9, VAR_8);

  VAR_7 = FUNC_9(VAR_4, 1);
  if (!VAR_7) {
   FUNC_3(VAR_3, VAR_4);
   return -VAR_0;
  }
  VAR_7->pages.pagevec[0] = VAR_6;
  FUNC_8(VAR_7, VAR_13, VAR_10, VAR_3->pg_ioflags, &VAR_12);
  FUNC_1(&VAR_7->list, &VAR_4->rpc_list);
  VAR_11++;
  VAR_9 -= VAR_13;
  VAR_10 += VAR_13;
 } while (VAR_9 != 0);
 FUNC_6(VAR_5);
 FUNC_5(VAR_5, &VAR_4->pages);
 VAR_3->pg_rpc_callops = &VAR_2;
 return 0;
}
