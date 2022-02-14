
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100_irda {int dummy; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sa1100_irda*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct net_device *VAR_3 = VAR_2;
 if (FUNC_0(((struct sa1100_irda *)FUNC_1(VAR_3))))
  FUNC_2(VAR_3);
 else
  FUNC_3(VAR_3);
 return VAR_0;
}
