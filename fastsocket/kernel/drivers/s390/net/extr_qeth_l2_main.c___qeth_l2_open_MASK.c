
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ccwdev; int state; } ;
struct TYPE_3__ {scalar_t__ type; int mac_bits; } ;
struct qeth_card {scalar_t__ state; int napi; TYPE_2__ data; TYPE_1__ info; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_9)
{
 struct qeth_card *VAR_10 = VAR_9->ml_priv;
 int VAR_11 = 0;

 FUNC_0(VAR_8, 4, "qethopen");
 if (VAR_10->state == VAR_1)
  return 0;
 if (VAR_10->state != VAR_0)
  return -VAR_4;

 if ((VAR_10->info.type != VAR_6) &&
      (!(VAR_10->info.mac_bits & VAR_7))) {
  FUNC_0(VAR_8, 4, "nomacadr");
  return -VAR_5;
 }
 VAR_10->data.state = VAR_2;
 VAR_10->state = VAR_1;
 FUNC_3(VAR_9);

 if (FUNC_4(VAR_10->data.ccwdev, 0) >= 0) {
  FUNC_1(&VAR_10->napi);
  FUNC_2(&VAR_10->napi);
 } else
  VAR_11 = -VAR_3;
 return VAR_11;
}
