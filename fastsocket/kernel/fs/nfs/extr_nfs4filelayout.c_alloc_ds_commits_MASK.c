
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_ds_commit_info {int nbuckets; struct pnfs_commit_bucket* buckets; } ;
struct pnfs_commit_bucket {int * clseg; int committing; } ;
struct nfs_commit_info {struct pnfs_ds_commit_info* ds; } ;
struct nfs_commit_data {int ds_commit_index; int pages; int * lseg; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int *,struct list_head*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct nfs_commit_data* FUNC_2 () ;
 int FUNC_3 (int *,int *,struct nfs_commit_info*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static unsigned int
FUNC_5(struct nfs_commit_info *VAR_0, struct list_head *VAR_1)
{
 struct pnfs_ds_commit_info *VAR_2;
 struct pnfs_commit_bucket *VAR_3;
 struct nfs_commit_data *VAR_4;
 int VAR_5, VAR_6;
 unsigned int VAR_7 = 0;

 VAR_2 = VAR_0->ds;
 VAR_3 = VAR_2->buckets;
 for (VAR_5 = 0; VAR_5 < VAR_2->nbuckets; VAR_5++, VAR_3++) {
  if (FUNC_1(&VAR_3->committing))
   continue;
  VAR_4 = FUNC_2();
  if (!VAR_4)
   break;
  VAR_4->ds_commit_index = VAR_5;
  VAR_4->lseg = VAR_3->clseg;
  VAR_3->clseg = ((void*)0);
  FUNC_0(&VAR_4->pages, VAR_1);
  VAR_7++;
 }


 for (VAR_6 = VAR_5; VAR_6 < VAR_2->nbuckets; VAR_6++, VAR_3++) {
  if (FUNC_1(&VAR_3->committing))
   continue;
  FUNC_3(&VAR_3->committing, VAR_3->clseg, VAR_0);
  FUNC_4(VAR_3->clseg);
  VAR_3->clseg = ((void*)0);
 }

 return VAR_7;
}
