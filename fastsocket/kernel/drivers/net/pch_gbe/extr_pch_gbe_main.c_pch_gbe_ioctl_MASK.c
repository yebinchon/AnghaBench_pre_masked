
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_adapter {int mii; } ;
struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;


 int FUNC_0 (int *,int ,int,int *) ;
 int FUNC_1 (struct ifreq*) ;
 struct pch_gbe_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, struct ifreq *VAR_1, int VAR_2)
{
 struct pch_gbe_adapter *VAR_3 = FUNC_2(VAR_0);

 FUNC_3("cmd : 0x%04x\n", VAR_2);

 return FUNC_0(&VAR_3->mii, FUNC_1(VAR_1), VAR_2, ((void*)0));
}
