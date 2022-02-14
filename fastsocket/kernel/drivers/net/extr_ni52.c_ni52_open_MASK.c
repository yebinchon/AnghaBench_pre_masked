
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; int irq; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *,int ,int ,struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1)
{
 int VAR_2;

 FUNC_3();
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
 FUNC_7(VAR_1);
 FUNC_4();

 VAR_2 = FUNC_6(VAR_1->irq, &VAR_0, 0, VAR_1->name, VAR_1);
 if (VAR_2) {
  FUNC_5();
  return VAR_2;
 }
 FUNC_2(VAR_1);
 return 0;
}
