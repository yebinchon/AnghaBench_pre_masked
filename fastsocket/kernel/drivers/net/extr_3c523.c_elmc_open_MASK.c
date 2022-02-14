
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int ,int *,int,int ,struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3)
{
 int VAR_4;

 FUNC_1();

 VAR_4 = FUNC_6(VAR_3->irq, &VAR_2, VAR_1 | VAR_0,
     VAR_3->name, VAR_3);
 if (VAR_4) {
  FUNC_5("%s: couldn't get irq %d\n", VAR_3->name, VAR_3->irq);
  FUNC_2();
  return VAR_4;
 }
 FUNC_0(VAR_3);
 FUNC_3(VAR_3);
 FUNC_7(VAR_3);
 FUNC_4(VAR_3);
 return 0;
}
