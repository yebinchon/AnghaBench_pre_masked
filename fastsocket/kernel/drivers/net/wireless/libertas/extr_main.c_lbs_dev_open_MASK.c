
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int mesh_open; int infra_open; scalar_t__ connect_status; int driver_lock; int tx_pending_len; scalar_t__ mesh_connect_status; struct net_device* mesh_dev; scalar_t__ monitormode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3)
{
 struct lbs_private *VAR_4 = VAR_3->ml_priv;
 int VAR_5 = 0;

 FUNC_0(VAR_2);

 FUNC_5(&VAR_4->driver_lock);

 if (VAR_4->monitormode) {
  VAR_5 = -VAR_0;
  goto out;
 }

 if (VAR_3 == VAR_4->mesh_dev) {
  VAR_4->mesh_open = 1;
  VAR_4->mesh_connect_status = VAR_1;
  FUNC_3(VAR_3);
 } else {
  VAR_4->infra_open = 1;

  if (VAR_4->connect_status == VAR_1)
   FUNC_3(VAR_3);
  else
   FUNC_2(VAR_3);
 }

 if (!VAR_4->tx_pending_len)
  FUNC_4(VAR_3);
 out:

 FUNC_6(&VAR_4->driver_lock);
 FUNC_1(VAR_2, "ret %d", VAR_5);
 return VAR_5;
}
