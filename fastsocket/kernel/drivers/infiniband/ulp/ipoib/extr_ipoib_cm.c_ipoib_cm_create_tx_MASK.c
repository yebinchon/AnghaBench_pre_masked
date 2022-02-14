
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipoib_path {int dummy; } ;
struct ipoib_neigh {struct ipoib_cm_tx* cm; } ;
struct TYPE_2__ {int start_task; int start_list; } ;
struct ipoib_dev_priv {TYPE_1__ cm; } ;
struct ipoib_cm_tx {int flags; int list; struct net_device* dev; struct ipoib_path* path; struct ipoib_neigh* neigh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ipoib_cm_tx* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

struct ipoib_cm_tx *FUNC_5(struct net_device *VAR_3, struct ipoib_path *VAR_4,
           struct ipoib_neigh *VAR_5)
{
 struct ipoib_dev_priv *VAR_6 = FUNC_2(VAR_3);
 struct ipoib_cm_tx *VAR_7;

 VAR_7 = FUNC_0(sizeof *VAR_7, VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_5->cm = VAR_7;
 VAR_7->neigh = VAR_5;
 VAR_7->path = VAR_4;
 VAR_7->dev = VAR_3;
 FUNC_1(&VAR_7->list, &VAR_6->cm.start_list);
 FUNC_4(VAR_1, &VAR_7->flags);
 FUNC_3(VAR_2, &VAR_6->cm.start_task);
 return VAR_7;
}
