
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ipoib_dev_priv {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipoib_dev_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_0(VAR_2);
 return FUNC_1(VAR_1, &VAR_3->flags) &&
  !FUNC_1(VAR_0, &VAR_3->flags);
}
