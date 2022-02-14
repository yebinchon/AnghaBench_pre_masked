
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {int wx_sem; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct net_device *VAR_0)
{
 struct r8180_priv *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 FUNC_0(&VAR_1->wx_sem);
 VAR_2 = FUNC_2(VAR_0);
 FUNC_3(&VAR_1->wx_sem);
 return VAR_2;
}
