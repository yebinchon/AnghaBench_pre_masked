
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct net_device {int ifindex; int dev; } ;
struct macvlan_dev {int tap_features; int minor; } ;
struct device {int dummy; } ;
typedef int dev_t ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct device*) ;
 int VAR_0 ;
 struct device* FUNC_4 (int ,int *,int ,struct net_device*,char*,int ) ;
 int FUNC_5 (struct net_device*,struct nlattr**,struct nlattr**,int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_7 (struct macvlan_dev*) ;
 int FUNC_8 (struct macvlan_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct macvlan_dev* FUNC_9 (struct net_device*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5,
      struct nlattr *VAR_6[],
      struct nlattr *VAR_7[])
{
 struct device *VAR_8;
 struct macvlan_dev *VAR_9;
 dev_t VAR_10;
 int VAR_11;

 VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_7,
         VAR_4, VAR_2);
 if (VAR_11)
  goto out;

 VAR_9 = FUNC_9(VAR_5);
 VAR_11 = FUNC_8(VAR_9);
 if (VAR_11)
  return FUNC_10(VAR_11);

 VAR_10 = FUNC_2(FUNC_1(VAR_3), VAR_9->minor);

 VAR_8 = FUNC_4(VAR_1, &VAR_5->dev, VAR_10,
     VAR_5, "tap%d", VAR_5->ifindex);
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_3(VAR_8);
  FUNC_6(VAR_5);
  FUNC_7(VAR_9);
 }

 VAR_9->tap_features = VAR_0;

out:
 return VAR_11;
}
