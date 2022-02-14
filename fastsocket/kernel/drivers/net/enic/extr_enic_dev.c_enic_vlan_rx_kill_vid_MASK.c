
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct enic {int devcmd_lock; } ;


 int FUNC_0 (struct enic*,int ) ;
 struct enic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct net_device *VAR_0, u16 VAR_1)
{
 struct enic *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(&VAR_2->devcmd_lock);
 FUNC_0(VAR_2, VAR_1);
 FUNC_3(&VAR_2->devcmd_lock);
}
