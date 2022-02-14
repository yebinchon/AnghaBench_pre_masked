
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int prev; } ;
struct nfs_pageio_descriptor {scalar_t__ pg_count; TYPE_2__ pg_list; int pg_base; TYPE_1__* pg_ops; } ;
struct nfs_page {scalar_t__ wb_bytes; int wb_pgbase; } ;
struct TYPE_3__ {int (* pg_init ) (struct nfs_pageio_descriptor*,struct nfs_page*) ;} ;


 int FUNC_0 (struct nfs_page*,struct nfs_page*,struct nfs_pageio_descriptor*) ;
 int FUNC_1 (struct nfs_page*,TYPE_2__*) ;
 struct nfs_page* FUNC_2 (int ) ;
 int FUNC_3 (struct nfs_page*) ;
 int FUNC_4 (struct nfs_pageio_descriptor*,struct nfs_page*) ;

__attribute__((used)) static int FUNC_5(struct nfs_pageio_descriptor *VAR_0,
         struct nfs_page *VAR_1)
{
 if (VAR_0->pg_count != 0) {
  struct nfs_page *VAR_2;

  VAR_2 = FUNC_2(VAR_0->pg_list.prev);
  if (!FUNC_0(VAR_2, VAR_1, VAR_0))
   return 0;
 } else {
  if (VAR_0->pg_ops->pg_init)
   VAR_0->pg_ops->pg_init(VAR_0, VAR_1);
  VAR_0->pg_base = VAR_1->wb_pgbase;
 }
 FUNC_3(VAR_1);
 FUNC_1(VAR_1, &VAR_0->pg_list);
 VAR_0->pg_count += VAR_1->wb_bytes;
 return 1;
}
