
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rsp_cons; TYPE_1__* sring; } ;
struct netfront_info {int rx_lock; int napi; TYPE_2__ rx; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ rsp_event; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct netfront_info* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_0)
{
 struct netfront_info *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->napi);

 FUNC_6(&VAR_1->rx_lock);
 if (FUNC_4(VAR_0)) {
  FUNC_8(VAR_0);
  VAR_1->rx.sring->rsp_event = VAR_1->rx.rsp_cons + 1;
  if (FUNC_0(&VAR_1->rx))
   FUNC_2(&VAR_1->napi);
 }
 FUNC_7(&VAR_1->rx_lock);

 FUNC_5(VAR_0);

 return 0;
}
