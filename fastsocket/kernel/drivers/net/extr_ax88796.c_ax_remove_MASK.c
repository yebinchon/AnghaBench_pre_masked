
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct net_device {int irq; } ;
struct ax_device {int mem2; scalar_t__ map2; int mem; } ;
struct TYPE_2__ {scalar_t__ mem; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 struct net_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;
 struct ax_device* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_4(VAR_1);
 struct ax_device *VAR_3;

 VAR_3 = FUNC_6(VAR_2);

 FUNC_7(VAR_2);
 FUNC_0(VAR_2->irq, VAR_2);

 FUNC_2(VAR_0.mem);
 FUNC_5(VAR_3->mem);
 FUNC_3(VAR_3->mem);

 if (VAR_3->map2) {
  FUNC_2(VAR_3->map2);
  FUNC_5(VAR_3->mem2);
  FUNC_3(VAR_3->mem2);
 }

 FUNC_1(VAR_2);

 return 0;
}
