
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int *) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 FUNC_0();

 FUNC_1(VAR_1);
 FUNC_3(VAR_0, ((void*)0));

 return 0;
}
