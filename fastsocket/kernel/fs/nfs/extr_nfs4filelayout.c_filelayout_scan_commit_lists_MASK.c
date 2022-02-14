
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_commit_info {TYPE_1__* ds; } ;
struct TYPE_2__ {int nbuckets; int * buckets; } ;


 int FUNC_0 (int *,struct nfs_commit_info*,int) ;

__attribute__((used)) static int FUNC_1(struct nfs_commit_info *VAR_0,
     int VAR_1)
{
 int VAR_2, VAR_3 = 0, VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_0->ds->nbuckets && VAR_1 != 0; VAR_2++) {
  VAR_4 = FUNC_0(&VAR_0->ds->buckets[VAR_2],
           VAR_0, VAR_1);
  VAR_1 -= VAR_4;
  VAR_3 += VAR_4;
 }
 return VAR_3;
}
