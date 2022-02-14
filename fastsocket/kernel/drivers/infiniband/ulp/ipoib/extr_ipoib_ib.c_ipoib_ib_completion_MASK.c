
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int napi; } ;
struct ib_cq {int dummy; } ;


 int FUNC_0 (int *) ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;

void FUNC_2(struct ib_cq *VAR_0, void *VAR_1)
{
 struct net_device *VAR_2 = VAR_1;
 struct ipoib_dev_priv *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(&VAR_3->napi);
}
