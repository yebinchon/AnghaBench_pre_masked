
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {struct page** pagevec; } ;
struct nfs_write_data {int list; TYPE_1__ pages; } ;
struct nfs_pgio_header {int rpc_list; int pages; } ;
struct list_head {int next; } ;
struct nfs_pageio_descriptor {int pg_ioflags; int * pg_rpc_callops; int pg_count; scalar_t__ pg_moreio; int pg_dreq; int pg_inode; int pg_base; struct list_head pg_list; } ;
struct nfs_page {int wb_page; } ;
struct nfs_commit_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*) ;
 int FUNC_3 (struct nfs_commit_info*,int ,int ) ;
 int FUNC_4 (struct nfs_page*,int *) ;
 struct nfs_page* FUNC_5 (int ) ;
 int FUNC_6 (struct nfs_page*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct nfs_commit_info*) ;
 int VAR_2 ;
 int FUNC_9 (struct nfs_write_data*,int ,int ,int,struct nfs_commit_info*) ;
 struct nfs_write_data* FUNC_10 (struct nfs_pgio_header*,int ) ;

__attribute__((used)) static int FUNC_11(struct nfs_pageio_descriptor *VAR_3,
    struct nfs_pgio_header *VAR_4)
{
 struct nfs_page *VAR_5;
 struct page **VAR_6;
 struct nfs_write_data *VAR_7;
 struct list_head *VAR_8 = &VAR_3->pg_list;
 struct nfs_commit_info VAR_9;

 VAR_7 = FUNC_10(VAR_4, FUNC_7(VAR_3->pg_base,
          VAR_3->pg_count));
 if (!VAR_7) {
  FUNC_2(VAR_3, VAR_4);
  return -VAR_0;
 }

 FUNC_3(&VAR_9, VAR_3->pg_inode, VAR_3->pg_dreq);
 VAR_6 = VAR_7->pages.pagevec;
 while (!FUNC_1(VAR_8)) {
  VAR_5 = FUNC_5(VAR_8->next);
  FUNC_6(VAR_5);
  FUNC_4(VAR_5, &VAR_4->pages);
  *VAR_6++ = VAR_5->wb_page;
 }

 if ((VAR_3->pg_ioflags & VAR_1) &&
     (VAR_3->pg_moreio || FUNC_8(&VAR_9)))
  VAR_3->pg_ioflags &= ~VAR_1;


 FUNC_9(VAR_7, VAR_3->pg_count, 0, VAR_3->pg_ioflags, &VAR_9);
 FUNC_0(&VAR_7->list, &VAR_4->rpc_list);
 VAR_3->pg_rpc_callops = &VAR_2;
 return 0;
}
