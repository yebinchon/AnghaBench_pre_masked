
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_3__ {struct page** pagevec; } ;
struct nfs_read_data {int list; TYPE_1__ pages; } ;
struct nfs_pgio_header {int pages; int rpc_list; struct nfs_page* req; } ;
struct nfs_pageio_descriptor {size_t pg_count; int * pg_rpc_callops; int pg_inode; } ;
struct nfs_page {struct page* wb_page; } ;
struct TYPE_4__ {size_t rsize; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 size_t FUNC_2 (size_t,size_t) ;
 int FUNC_3 (struct nfs_page*,int *) ;
 int FUNC_4 (struct nfs_page*) ;
 int FUNC_5 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*) ;
 int VAR_1 ;
 int FUNC_6 (struct nfs_read_data*,size_t,unsigned int) ;
 struct nfs_read_data* FUNC_7 (struct nfs_pgio_header*,int) ;

__attribute__((used)) static int FUNC_8(struct nfs_pageio_descriptor *VAR_2,
       struct nfs_pgio_header *VAR_3)
{
 struct nfs_page *VAR_4 = VAR_3->req;
 struct page *VAR_5 = VAR_4->wb_page;
 struct nfs_read_data *VAR_6;
 size_t VAR_7 = FUNC_0(VAR_2->pg_inode)->rsize, VAR_8;
 unsigned int VAR_9;

 VAR_9 = 0;
 VAR_8 = VAR_2->pg_count;
 do {
  size_t VAR_10 = FUNC_2(VAR_8,VAR_7);

  VAR_6 = FUNC_7(VAR_3, 1);
  if (!VAR_6) {
   FUNC_5(VAR_2, VAR_3);
   return -VAR_0;
  }
  VAR_6->pages.pagevec[0] = VAR_5;
  FUNC_6(VAR_6, VAR_10, VAR_9);
  FUNC_1(&VAR_6->list, &VAR_3->rpc_list);
  VAR_8 -= VAR_10;
  VAR_9 += VAR_10;
 } while (VAR_8 != 0);

 FUNC_4(VAR_4);
 FUNC_3(VAR_4, &VAR_3->pages);
 VAR_2->pg_rpc_callops = &VAR_1;
 return 0;
}
