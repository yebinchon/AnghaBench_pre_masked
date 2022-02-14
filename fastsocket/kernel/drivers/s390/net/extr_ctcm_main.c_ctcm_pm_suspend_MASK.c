
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ctcm_priv {TYPE_1__** channel; TYPE_2__* fsm; } ;
struct ccwgroup_device {scalar_t__ state; int * cdev; int dev; } ;
struct TYPE_4__ {int wait_q; } ;
struct TYPE_3__ {int netdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ctcm_priv* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct ccwgroup_device *VAR_5)
{
 struct ctcm_priv *VAR_6 = FUNC_2(&VAR_5->dev);

 if (VAR_5->state == VAR_0)
  return 0;
 FUNC_5(VAR_6->channel[VAR_4]->netdev);
 FUNC_1(VAR_6->channel[VAR_4]->netdev);
 if (!FUNC_6(VAR_6->fsm->wait_q,
     FUNC_3(VAR_6->fsm) == VAR_2, VAR_1)) {
  FUNC_4(VAR_6->channel[VAR_4]->netdev);
  return -VAR_3;
 }
 FUNC_0(VAR_5->cdev[1]);
 FUNC_0(VAR_5->cdev[0]);
 return 0;
}
