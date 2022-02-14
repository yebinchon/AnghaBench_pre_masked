
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct qeth_card {TYPE_2__* dev; TYPE_1__ info; } ;
struct net_device {struct qeth_card* ml_priv; } ;
struct TYPE_4__ {int * dev_addr; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int ,int,char*,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct qeth_card*,int *) ;
 int FUNC_5 (struct qeth_card*,int ) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct qeth_card*,int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_9, void *VAR_10)
{
 struct sockaddr *VAR_11 = VAR_10;
 struct qeth_card *VAR_12 = VAR_9->ml_priv;
 int VAR_13 = 0;

 FUNC_2(VAR_8, 3, "setmac");

 if (FUNC_6(VAR_9) != VAR_6) {
  FUNC_2(VAR_8, 3, "setmcINV");
  return -VAR_0;
 }

 if (VAR_12->info.type == VAR_4 ||
     VAR_12->info.type == VAR_3 ||
     VAR_12->info.type == VAR_5) {
  FUNC_2(VAR_8, 3, "setmcTYP");
  return -VAR_0;
 }
 FUNC_3(VAR_8, 3, "%s", FUNC_0(VAR_12));
 FUNC_1(VAR_8, 3, VAR_11->sa_data, VAR_2);
 if (FUNC_7(VAR_12, VAR_7)) {
  FUNC_2(VAR_8, 3, "setmcREC");
  return -VAR_1;
 }
 VAR_13 = FUNC_4(VAR_12, &VAR_12->dev->dev_addr[0]);
 if (!VAR_13)
  VAR_13 = FUNC_5(VAR_12, VAR_11->sa_data);
 return VAR_13;
}
