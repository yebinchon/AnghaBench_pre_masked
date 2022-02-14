
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rx_function; } ;
struct z8530_dev {TYPE_1__ chanA; } ;
struct net_device {int dummy; } ;


 struct z8530_dev* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_3 (struct net_device*,TYPE_1__*) ;
 int FUNC_4 (struct net_device*,TYPE_1__*) ;
 int FUNC_5 (struct net_device*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2)
{
 struct z8530_dev *VAR_3 = FUNC_0(VAR_2);



 VAR_3->chanA.rx_function = VAR_1;

 FUNC_1(VAR_2);
 FUNC_2(VAR_2);

 switch (VAR_0) {
  case 0:
   FUNC_3(VAR_2, &VAR_3->chanA);
   break;
  case 1:
   FUNC_4(VAR_2, &VAR_3->chanA);
   break;
  case 2:
   FUNC_5(VAR_2, &VAR_3->chanA);
   break;
 }
 return 0;
}
