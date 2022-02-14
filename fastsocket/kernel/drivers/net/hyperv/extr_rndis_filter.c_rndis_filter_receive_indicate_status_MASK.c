
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rndis_indicate_status {scalar_t__ status; } ;
struct TYPE_3__ {struct rndis_indicate_status indicate_status; } ;
struct rndis_message {TYPE_1__ msg; } ;
struct rndis_device {TYPE_2__* net_dev; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct rndis_device *VAR_2,
          struct rndis_message *VAR_3)
{
 struct rndis_indicate_status *VAR_4 =
   &VAR_3->msg.indicate_status;

 if (VAR_4->status == VAR_0) {
  FUNC_0(
   VAR_2->net_dev->dev, 1);
 } else if (VAR_4->status == VAR_1) {
  FUNC_0(
   VAR_2->net_dev->dev, 0);
 } else {



 }
}
