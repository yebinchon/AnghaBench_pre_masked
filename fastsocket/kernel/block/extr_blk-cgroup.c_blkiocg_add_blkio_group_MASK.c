
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blkio_group {int plid; int dev; int path; int blkcg_node; int blkcg_id; int key; int stats_lock; } ;
struct TYPE_2__ {int cgroup; } ;
struct blkio_cgroup {TYPE_1__ css; int lock; int blkg_list; } ;
typedef enum blkio_policy_id { ____Placeholder_blkio_policy_id } blkio_policy_id ;
typedef int dev_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct blkio_cgroup *VAR_0,
  struct blkio_group *VAR_1, void *VAR_2, dev_t VAR_3,
  enum blkio_policy_id VAR_4)
{
 unsigned long VAR_5;

 FUNC_5(&VAR_0->lock, VAR_5);
 FUNC_4(&VAR_1->stats_lock);
 FUNC_3(VAR_1->key, VAR_2);
 VAR_1->blkcg_id = FUNC_1(&VAR_0->css);
 FUNC_2(&VAR_1->blkcg_node, &VAR_0->blkg_list);
 VAR_1->plid = VAR_4;
 FUNC_6(&VAR_0->lock, VAR_5);

 FUNC_0(VAR_0->css.cgroup, VAR_1->path, sizeof(VAR_1->path));
 VAR_1->dev = VAR_3;
}
