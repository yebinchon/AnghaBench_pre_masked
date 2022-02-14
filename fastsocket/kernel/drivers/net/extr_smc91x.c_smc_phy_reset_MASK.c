
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_local {int lock; } ;
struct net_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct smc_local* FUNC_1 (struct net_device*) ;
 unsigned int FUNC_2 (struct net_device*,int,int ) ;
 int FUNC_3 (struct net_device*,int,int ,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, int VAR_3)
{
 struct smc_local *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5;
 int VAR_6;

 FUNC_3(VAR_2, VAR_3, VAR_1, VAR_0);

 for (VAR_6 = 2; VAR_6; VAR_6--) {
  FUNC_5(&VAR_4->lock);
  FUNC_0(50);
  FUNC_4(&VAR_4->lock);

  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_1);
  if (!(VAR_5 & VAR_0))
   break;
 }

 return VAR_5 & VAR_0;
}
