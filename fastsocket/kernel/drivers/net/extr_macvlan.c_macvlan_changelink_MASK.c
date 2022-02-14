
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct macvlan_dev {int mode; } ;


 size_t VAR_0 ;
 struct macvlan_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nlattr*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
  struct nlattr *VAR_2[], struct nlattr *VAR_3[])
{
 struct macvlan_dev *VAR_4 = FUNC_0(VAR_1);
 if (VAR_3 && VAR_3[VAR_0])
  VAR_4->mode = FUNC_1(VAR_3[VAR_0]);
 return 0;
}
