
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct pnfs_commit_bucket {int * clseg; int * wlseg; struct list_head committing; struct list_head written; } ;
struct nfs_commit_info {TYPE_1__* ds; } ;
struct TYPE_2__ {int nwritten; int ncommitting; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct list_head*) ;
 int FUNC_2 (struct list_head*,struct list_head*,struct nfs_commit_info*,int) ;

__attribute__((used)) static int
FUNC_3(struct pnfs_commit_bucket *VAR_0,
          struct nfs_commit_info *VAR_1,
          int VAR_2)
{
 struct list_head *VAR_3 = &VAR_0->written;
 struct list_head *VAR_4 = &VAR_0->committing;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_1, VAR_2);
 if (VAR_5) {
  VAR_1->ds->nwritten -= VAR_5;
  VAR_1->ds->ncommitting += VAR_5;
  VAR_0->clseg = VAR_0->wlseg;
  if (FUNC_1(VAR_3))
   VAR_0->wlseg = ((void*)0);
  else
   FUNC_0(VAR_0->clseg);
 }
 return VAR_5;
}
