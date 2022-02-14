
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct macvlan_dev {int minor; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct macvlan_dev*) ;
 int VAR_1 ;
 struct macvlan_dev* FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_2)
{
 struct macvlan_dev *VAR_3;

 VAR_3 = FUNC_6(VAR_2);
 FUNC_2(VAR_0,
         FUNC_1(FUNC_0(VAR_1), VAR_3->minor));

 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_5(VAR_3);
}
