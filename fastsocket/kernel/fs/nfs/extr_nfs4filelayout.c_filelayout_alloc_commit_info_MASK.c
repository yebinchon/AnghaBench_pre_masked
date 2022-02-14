
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pnfs_layout_segment {int dummy; } ;
struct pnfs_commit_bucket {int committing; int written; } ;
struct nfs_commit_info {int lock; TYPE_2__* ds; } ;
struct nfs4_filelayout_segment {scalar_t__ stripe_type; TYPE_1__* dsaddr; scalar_t__ commit_through_mds; } ;
typedef int gfp_t ;
struct TYPE_4__ {int nbuckets; struct pnfs_commit_bucket* buckets; } ;
struct TYPE_3__ {int ds_num; int stripe_count; } ;


 int VAR_0 ;
 struct nfs4_filelayout_segment* FUNC_0 (struct pnfs_layout_segment*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 struct pnfs_commit_bucket* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct pnfs_commit_bucket*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct pnfs_layout_segment *VAR_2,
        struct nfs_commit_info *VAR_3,
        gfp_t VAR_4)
{
 struct nfs4_filelayout_segment *VAR_5 = FUNC_0(VAR_2);
 struct pnfs_commit_bucket *VAR_6;
 int VAR_7;

 if (VAR_5->commit_through_mds)
  return 0;
 if (VAR_3->ds->nbuckets != 0) {






  return 0;
 }

 VAR_7 = (VAR_5->stripe_type == VAR_1) ?
  VAR_5->dsaddr->ds_num : VAR_5->dsaddr->stripe_count;

 VAR_6 = FUNC_2(VAR_7, sizeof(struct pnfs_commit_bucket),
     VAR_4);
 if (!VAR_6)
  return -VAR_0;
 else {
  int VAR_8;

  FUNC_4(VAR_3->lock);
  if (VAR_3->ds->nbuckets != 0)
   FUNC_3(VAR_6);
  else {
   VAR_3->ds->buckets = VAR_6;
   VAR_3->ds->nbuckets = VAR_7;
   for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
    FUNC_1(&VAR_6[VAR_8].written);
    FUNC_1(&VAR_6[VAR_8].committing);
   }
  }
  FUNC_5(VAR_3->lock);
  return 0;
 }
}
