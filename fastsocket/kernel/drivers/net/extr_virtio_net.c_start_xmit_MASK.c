
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {int svq; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dev; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct virtnet_info*) ;
 struct virtnet_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct virtnet_info*,struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_13(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct virtnet_info *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

again:

 FUNC_1(VAR_5);


 VAR_6 = FUNC_12(VAR_5, VAR_3);


 if (FUNC_7(VAR_6 < 0)) {
  FUNC_4(VAR_4);
  FUNC_0(&VAR_4->dev, "Unexpected full queue\n");
  if (FUNC_7(!FUNC_9(VAR_5->svq))) {
   FUNC_8(VAR_5->svq);
   FUNC_3(VAR_4);
   goto again;
  }
  return VAR_1;
 }
 FUNC_11(VAR_5->svq);


 FUNC_6(VAR_3);
 FUNC_5(VAR_3);



 if (VAR_6 < 2+VAR_0) {
  FUNC_4(VAR_4);
  if (FUNC_7(!FUNC_10(VAR_5->svq))) {

   VAR_6 += FUNC_1(VAR_5);
   if (VAR_6 >= 2+VAR_0) {
    FUNC_3(VAR_4);
    FUNC_8(VAR_5->svq);
   }
  }
 }

 return VAR_2;
}
