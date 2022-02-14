
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {struct page** pagevec; } ;
struct nfs_read_data {int list; TYPE_1__ pages; } ;
struct nfs_pgio_header {int rpc_list; int pages; } ;
struct list_head {int next; } ;
struct nfs_pageio_descriptor {int * pg_rpc_callops; int pg_count; int pg_base; struct list_head pg_list; } ;
struct nfs_page {int wb_page; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (struct nfs_page*,int *) ;
 struct nfs_page* FUNC_3 (int ) ;
 int FUNC_4 (struct nfs_page*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*) ;
 int VAR_1 ;
 int FUNC_7 (struct nfs_read_data*,int ,int ) ;
 struct nfs_read_data* FUNC_8 (struct nfs_pgio_header*,int ) ;

__attribute__((used)) static int FUNC_9(struct nfs_pageio_descriptor *VAR_2,
     struct nfs_pgio_header *VAR_3)
{
 struct nfs_page *VAR_4;
 struct page **VAR_5;
 struct nfs_read_data *VAR_6;
 struct list_head *VAR_7 = &VAR_2->pg_list;

 VAR_6 = FUNC_8(VAR_3, FUNC_5(VAR_2->pg_base,
         VAR_2->pg_count));
 if (!VAR_6) {
  FUNC_6(VAR_2, VAR_3);
  return -VAR_0;
 }

 VAR_5 = VAR_6->pages.pagevec;
 while (!FUNC_1(VAR_7)) {
  VAR_4 = FUNC_3(VAR_7->next);
  FUNC_4(VAR_4);
  FUNC_2(VAR_4, &VAR_3->pages);
  *VAR_5++ = VAR_4->wb_page;
 }

 FUNC_7(VAR_6, VAR_2->pg_count, 0);
 FUNC_0(&VAR_6->list, &VAR_3->rpc_list);
 VAR_2->pg_rpc_callops = &VAR_1;
 return 0;
}
