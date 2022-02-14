
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ccwdev; int state; } ;
struct qeth_card {scalar_t__ state; int napi; TYPE_1__ data; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6)
{
 struct qeth_card *VAR_7 = VAR_6->ml_priv;
 int VAR_8 = 0;

 FUNC_0(VAR_5, 4, "qethopen");
 if (VAR_7->state == VAR_1)
  return 0;
 if (VAR_7->state != VAR_0)
  return -VAR_4;
 VAR_7->data.state = VAR_2;
 VAR_7->state = VAR_1;
 FUNC_3(VAR_6);

 if (FUNC_4(VAR_7->data.ccwdev, 0) >= 0) {
  FUNC_1(&VAR_7->napi);
  FUNC_2(&VAR_7->napi);
 } else
  VAR_8 = -VAR_3;
 return VAR_8;
}
