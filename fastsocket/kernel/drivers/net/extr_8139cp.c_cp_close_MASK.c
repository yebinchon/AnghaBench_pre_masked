
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; int name; } ;
struct cp_private {int lock; int napi; } ;


 int FUNC_0 (struct cp_private*) ;
 int FUNC_1 (struct cp_private*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int *) ;
 struct cp_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct cp_private*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11 (struct net_device *VAR_0)
{
 struct cp_private *VAR_1 = FUNC_4(VAR_0);
 unsigned long VAR_2;

 FUNC_3(&VAR_1->napi);

 if (FUNC_6(VAR_1))
  FUNC_8("%s: disabling interface\n", VAR_0->name);

 FUNC_9(&VAR_1->lock, VAR_2);

 FUNC_7(VAR_0);
 FUNC_5(VAR_0);

 FUNC_1(VAR_1);

 FUNC_10(&VAR_1->lock, VAR_2);

 FUNC_2(VAR_0->irq, VAR_0);

 FUNC_0(VAR_1);
 return 0;
}
