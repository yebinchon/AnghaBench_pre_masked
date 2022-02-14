
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_header {int refcnt; int lock; int rpc_list; int pages; } ;
struct nfs_read_header {struct nfs_pgio_header header; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct nfs_read_header* FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

struct nfs_read_header *FUNC_4(void)
{
 struct nfs_read_header *VAR_2;

 VAR_2 = FUNC_2(VAR_1, VAR_0);
 if (VAR_2) {
  struct nfs_pgio_header *VAR_3 = &VAR_2->header;

  FUNC_0(&VAR_3->pages);
  FUNC_0(&VAR_3->rpc_list);
  FUNC_3(&VAR_3->lock);
  FUNC_1(&VAR_3->refcnt, 0);
 }
 return VAR_2;
}
