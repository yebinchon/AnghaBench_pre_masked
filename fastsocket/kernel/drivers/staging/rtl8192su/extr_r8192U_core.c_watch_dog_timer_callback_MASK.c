
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int watch_dog_timer; int watch_dog_wq; int priv_wq; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ,int *,int ) ;

void FUNC_4(unsigned long VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_1((struct net_device *) VAR_2);

 FUNC_3(VAR_3->priv_wq,&VAR_3->watch_dog_wq, 0);
 FUNC_2(&VAR_3->watch_dog_timer, VAR_1 + FUNC_0(VAR_0));
}
