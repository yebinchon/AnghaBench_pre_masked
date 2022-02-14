
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_write_data {struct nfs_pgio_header* header; } ;
struct nfs_pgio_header {int pages; int flags; } ;
struct nfs_pageio_descriptor {int pg_recoalesce; int pg_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct nfs_pageio_descriptor*) ;
 int FUNC_2 (struct nfs_write_data*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct nfs_pageio_descriptor *VAR_1,
  struct nfs_write_data *VAR_2)
{
 struct nfs_pgio_header *VAR_3 = VAR_2->header;

 if (!FUNC_3(VAR_0, &VAR_3->flags)) {
  FUNC_0(&VAR_3->pages, &VAR_1->pg_list);
  FUNC_1(VAR_1);
  VAR_1->pg_recoalesce = 1;
 }
 FUNC_2(VAR_2);
}
