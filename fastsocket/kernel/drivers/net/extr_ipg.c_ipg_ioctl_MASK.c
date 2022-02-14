
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipg_nic_private {int mii_mutex; int mii_if; } ;
struct ifreq {int dummy; } ;


 int FUNC_0 (int *,int ,int,int *) ;
 int FUNC_1 (struct ifreq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ipg_nic_private* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, struct ifreq *VAR_1, int VAR_2)
{
 struct ipg_nic_private *VAR_3 = FUNC_4(VAR_0);
 int VAR_4;

 FUNC_2(&VAR_3->mii_mutex);
 VAR_4 = FUNC_0(&VAR_3->mii_if, FUNC_1(VAR_1), VAR_2, ((void*)0));
 FUNC_3(&VAR_3->mii_mutex);

 return VAR_4;
}
