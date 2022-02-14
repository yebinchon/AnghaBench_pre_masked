
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipw2100_priv {int status; int low_lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct ipw2100_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 struct ipw2100_priv *VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3;
 FUNC_0("dev->open\n");

 FUNC_4(&VAR_2->low_lock, VAR_3);
 if (VAR_2->status & VAR_0) {
  FUNC_2(VAR_1);
  FUNC_3(VAR_1);
 }
 FUNC_5(&VAR_2->low_lock, VAR_3);

 return 0;
}
