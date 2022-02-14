
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnfs_commit_bucket {int * wlseg; int written; } ;
struct nfs_commit_info {TYPE_1__* ds; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int nbuckets; scalar_t__ nwritten; struct pnfs_commit_bucket* buckets; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,struct list_head*,struct nfs_commit_info*,int ) ;

__attribute__((used)) static void FUNC_4(struct list_head *VAR_0,
        struct nfs_commit_info *VAR_1)
{
 struct pnfs_commit_bucket *VAR_2;
 int VAR_3;





 for (VAR_3 = 0, VAR_2 = VAR_1->ds->buckets; VAR_3 < VAR_1->ds->nbuckets; VAR_3++, VAR_2++) {
  if (FUNC_3(&VAR_2->written, VAR_0, VAR_1, 0)) {
   FUNC_0(!FUNC_1(&VAR_2->written));
   FUNC_2(VAR_2->wlseg);
   VAR_2->wlseg = ((void*)0);
  }
 }
 VAR_1->ds->nwritten = 0;
}
