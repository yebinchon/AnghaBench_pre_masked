
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int poll_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct ipoib_dev_priv*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_1)
{
 struct ipoib_dev_priv *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(VAR_1);
 while (FUNC_5(VAR_2))
  ;

 if (FUNC_2(VAR_1))
  FUNC_0(&VAR_2->poll_timer, VAR_0 + 1);

 FUNC_4(VAR_1);
}
