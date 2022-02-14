
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_header {int * verf; int refcnt; int lock; int rpc_list; int pages; } ;
struct nfs_write_header {int verf; struct nfs_pgio_header header; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct nfs_write_header* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct nfs_write_header*,int ,int) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

struct nfs_write_header *FUNC_5(void)
{
 struct nfs_write_header *VAR_2 = FUNC_2(VAR_1, VAR_0);

 if (VAR_2) {
  struct nfs_pgio_header *VAR_3 = &VAR_2->header;

  FUNC_3(VAR_2, 0, sizeof(*VAR_2));
  FUNC_0(&VAR_3->pages);
  FUNC_0(&VAR_3->rpc_list);
  FUNC_4(&VAR_3->lock);
  FUNC_1(&VAR_3->refcnt, 0);
  VAR_3->verf = &VAR_2->verf;
 }
 return VAR_2;
}
