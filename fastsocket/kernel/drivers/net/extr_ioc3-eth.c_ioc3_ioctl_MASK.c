
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ioc3_private {int ioc3_lock; int mii; } ;
struct ifreq {int dummy; } ;


 int FUNC_0 (int *,int ,int,int *) ;
 int FUNC_1 (struct ifreq*) ;
 struct ioc3_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, struct ifreq *VAR_1, int VAR_2)
{
 struct ioc3_private *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 FUNC_3(&VAR_3->ioc3_lock);
 VAR_4 = FUNC_0(&VAR_3->mii, FUNC_1(VAR_1), VAR_2, ((void*)0));
 FUNC_4(&VAR_3->ioc3_lock);

 return VAR_4;
}
