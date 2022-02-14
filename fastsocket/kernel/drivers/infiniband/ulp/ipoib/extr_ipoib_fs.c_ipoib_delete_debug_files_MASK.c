
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {scalar_t__ path_dentry; scalar_t__ mcg_dentry; } ;


 int FUNC_0 (scalar_t__) ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_0)
{
 struct ipoib_dev_priv *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->mcg_dentry)
  FUNC_0(VAR_1->mcg_dentry);
 if (VAR_1->path_dentry)
  FUNC_0(VAR_1->path_dentry);
}
