
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nic {int mii; } ;
struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;


 int FUNC_0 (int *,int ,int,int *) ;
 int FUNC_1 (struct ifreq*) ;
 struct nic* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, struct ifreq *VAR_1, int VAR_2)
{
 struct nic *VAR_3 = FUNC_2(VAR_0);

 return FUNC_0(&VAR_3->mii, FUNC_1(VAR_1), VAR_2, ((void*)0));
}
