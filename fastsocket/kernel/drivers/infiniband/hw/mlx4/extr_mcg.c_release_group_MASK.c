
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_ib_demux_ctx {int mcg_table_lock; int mcg_table; int port; int dev; } ;
struct TYPE_4__ {int attr; } ;
struct TYPE_3__ {int mgid; } ;
struct mcast_group {scalar_t__ state; int lock; int mgid0_list; int node; int pending_list; TYPE_2__ dentry; TYPE_1__ rec; int refcount; int timeout_work; struct mlx4_ib_demux_ctx* demux; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct mcast_group*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mcast_group*,char*) ;
 int FUNC_8 (int *,int *,int) ;
 int VAR_1 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static int FUNC_12(struct mcast_group *VAR_2, int VAR_3)
{
 struct mlx4_ib_demux_ctx *VAR_4 = VAR_2->demux;
 int VAR_5;

 FUNC_9(&VAR_4->mcg_table_lock);
 FUNC_9(&VAR_2->lock);
 if (FUNC_0(&VAR_2->refcount)) {
  if (!VAR_3) {
   if (VAR_2->state != VAR_0 &&
       !FUNC_2(&VAR_2->timeout_work)) {
    FUNC_1(&VAR_2->refcount);
    FUNC_10(&VAR_2->lock);
    FUNC_10(&VAR_4->mcg_table_lock);
    return 0;
   }
  }

  VAR_5 = FUNC_8(&VAR_2->rec.mgid, &VAR_1, sizeof VAR_1);
  if (VAR_5)
   FUNC_3(VAR_4->dev, VAR_4->port, &VAR_2->dentry.attr);
  if (!FUNC_6(&VAR_2->pending_list))
   FUNC_7(VAR_2, "releasing a group with non empty pending list\n");
  if (VAR_5)
   FUNC_11(&VAR_2->node, &VAR_4->mcg_table);
  FUNC_5(&VAR_2->mgid0_list);
  FUNC_10(&VAR_2->lock);
  FUNC_10(&VAR_4->mcg_table_lock);
  FUNC_4(VAR_2);
  return 1;
 } else {
  FUNC_10(&VAR_2->lock);
  FUNC_10(&VAR_4->mcg_table_lock);
 }
 return 0;
}
