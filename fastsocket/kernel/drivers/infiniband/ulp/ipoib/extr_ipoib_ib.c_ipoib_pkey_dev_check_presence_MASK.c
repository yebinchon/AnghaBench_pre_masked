
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct ipoib_dev_priv {int flags; int pkey; int port; int ca; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *) ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct ipoib_dev_priv *VAR_2 = FUNC_2(VAR_1);
 u16 VAR_3 = 0;

 if (FUNC_1(VAR_2->ca, VAR_2->port, VAR_2->pkey, &VAR_3))
  FUNC_0(VAR_0, &VAR_2->flags);
 else
  FUNC_3(VAR_0, &VAR_2->flags);
}
