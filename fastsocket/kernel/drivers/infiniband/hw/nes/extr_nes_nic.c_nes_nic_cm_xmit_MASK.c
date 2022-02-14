
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 int VAR_3;

 VAR_1->dev = VAR_2;
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3) {
  FUNC_1(VAR_0, "Bad return code from dev_queue_xmit %d\n", VAR_3);
 }

 return VAR_3;
}
