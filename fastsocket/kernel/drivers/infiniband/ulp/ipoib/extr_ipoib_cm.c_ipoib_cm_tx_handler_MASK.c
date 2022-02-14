
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipoib_neigh {int * cm; } ;
struct TYPE_2__ {int reap_task; int reap_list; } ;
struct ipoib_dev_priv {int lock; TYPE_1__ cm; struct net_device* dev; } ;
struct ipoib_cm_tx {int list; int flags; struct ipoib_neigh* neigh; int dev; } ;
struct ib_cm_id {struct ipoib_cm_tx* context; } ;
struct ib_cm_event {int event; } ;



 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct ib_cm_id*,int *,int ) ;
 int FUNC_1 (struct ib_cm_id*,int ,int *,int ,int *,int ) ;
 int FUNC_2 (struct ib_cm_id*,struct ib_cm_event*) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*,...) ;
 int FUNC_4 (struct ipoib_neigh*) ;
 int VAR_2 ;
 int FUNC_5 (int *,int *) ;
 struct ipoib_dev_priv* FUNC_6 (int ) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct ib_cm_id *VAR_3,
          struct ib_cm_event *VAR_4)
{
 struct ipoib_cm_tx *VAR_5 = VAR_3->context;
 struct ipoib_dev_priv *VAR_6 = FUNC_6(VAR_5->dev);
 struct net_device *VAR_7 = VAR_6->dev;
 struct ipoib_neigh *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 switch (VAR_4->event) {
 case 132:
  FUNC_3(VAR_6, "DREQ received.\n");
  FUNC_0(VAR_3, ((void*)0), 0);
  break;
 case 130:
  FUNC_3(VAR_6, "REP received.\n");
  VAR_10 = FUNC_2(VAR_3, VAR_4);
  if (VAR_10)
   FUNC_1(VAR_3, VAR_0,
           ((void*)0), 0, ((void*)0), 0);
  break;
 case 129:
 case 131:
 case 128:
  FUNC_3(VAR_6, "CM error %d.\n", VAR_4->event);
  FUNC_7(VAR_7);
  FUNC_10(&VAR_6->lock, VAR_9);
  VAR_8 = VAR_5->neigh;

  if (VAR_8) {
   VAR_8->cm = ((void*)0);
   FUNC_4(VAR_8);

   VAR_5->neigh = ((void*)0);
  }

  if (FUNC_12(VAR_1, &VAR_5->flags)) {
   FUNC_5(&VAR_5->list, &VAR_6->cm.reap_list);
   FUNC_9(VAR_2, &VAR_6->cm.reap_task);
  }

  FUNC_11(&VAR_6->lock, VAR_9);
  FUNC_8(VAR_7);
  break;
 default:
  break;
 }

 return 0;
}
