
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct r8192_priv {int wx_sem; int reset_wq; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct net_device *VAR_1, void *VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_1(VAR_1);
 struct sockaddr *VAR_4 = VAR_2;

 FUNC_0(&VAR_3->wx_sem);

 FUNC_2(VAR_1->dev_addr, VAR_4->sa_data, VAR_0);

 FUNC_3(&VAR_3->reset_wq);

 FUNC_4(&VAR_3->wx_sem);

 return 0;
}
