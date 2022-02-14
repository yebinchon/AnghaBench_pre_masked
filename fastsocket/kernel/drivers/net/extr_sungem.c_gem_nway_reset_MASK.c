
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gem {int lock; int want_autoneg; } ;


 int VAR_0 ;
 int FUNC_0 (struct gem*,int *) ;
 int FUNC_1 (struct gem*) ;
 int FUNC_2 (struct gem*) ;
 struct gem* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 struct gem *VAR_2 = FUNC_3(VAR_1);

 if (!VAR_2->want_autoneg)
  return -VAR_0;


 FUNC_4(&VAR_2->lock);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2, ((void*)0));
 FUNC_2(VAR_2);
 FUNC_5(&VAR_2->lock);

 return 0;
}
