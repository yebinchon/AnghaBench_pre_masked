
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_1,
         unsigned long VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = (struct net_device *)VAR_3;


 switch (VAR_2) {
 case 130:




 case 128:
 case 129:

  FUNC_0(VAR_4);
  break;

 default:
  break;
 };

 return VAR_0;
}
