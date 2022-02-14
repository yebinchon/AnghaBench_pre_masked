
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct pnfs_layout_segment {int dummy; } ;
struct list_head {int dummy; } ;
struct pnfs_commit_bucket {int wlseg; struct list_head written; } ;
struct nfs_page {int wb_flags; } ;
struct nfs_commit_info {TYPE_2__* ds; TYPE_1__* mds; } ;
struct nfs4_filelayout_segment {scalar_t__ commit_through_mds; } ;
struct TYPE_4__ {int nwritten; struct pnfs_commit_bucket* buckets; } ;
struct TYPE_3__ {struct list_head list; } ;


 struct nfs4_filelayout_segment* FUNC_0 (struct pnfs_layout_segment*) ;
 int VAR_0 ;
 int FUNC_1 (struct pnfs_layout_segment*) ;
 scalar_t__ FUNC_2 (struct list_head*) ;
 size_t FUNC_3 (struct pnfs_layout_segment*,int ) ;
 int FUNC_4 (struct nfs_page*) ;
 size_t FUNC_5 (struct nfs4_filelayout_segment*,size_t) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static struct list_head *
FUNC_7(struct nfs_page *VAR_1,
         struct pnfs_layout_segment *VAR_2,
         struct nfs_commit_info *VAR_3)
{
 struct nfs4_filelayout_segment *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5, VAR_6;
 struct list_head *VAR_7;
 struct pnfs_commit_bucket *VAR_8;

 if (VAR_4->commit_through_mds)
  return &VAR_3->mds->list;







 VAR_6 = FUNC_3(VAR_2, FUNC_4(VAR_1));
 VAR_5 = FUNC_5(VAR_4, VAR_6);
 VAR_8 = VAR_3->ds->buckets;
 VAR_7 = &VAR_8[VAR_5].written;
 if (FUNC_2(VAR_7)) {






  VAR_8[VAR_5].wlseg = FUNC_1(VAR_2);
 }
 FUNC_6(VAR_0, &VAR_1->wb_flags);
 VAR_3->ds->nwritten++;
 return VAR_7;
}
